#include "Sorted_Agenda.h"
#include "Sorted_Noeud.h"
#include "RDV.h"

#include <iostream>
using namespace std;

Sorted_Agenda::Sorted_Agenda(){
    pointeur = NULL;
}

void Sorted_Agenda::add(RDV rdv){
    Sorted_Noeud* p = pointeur; // p va parcourir la liste
    Sorted_Noeud* last_p = NULL;// last_p va parcourir la liste avec un de d�calage par rapport � p
    bool added = false;         // boolen qui dit si le noeud � �t� rajout�

    if (p == NULL){             // si l'agenda est vide
        pointeur = new Sorted_Noeud(rdv, NULL);
        added = true;
    }

    while (p != NULL){
        // on compare rdv avec le rdv du noeud point� par p si il n'a pas d�j� �t� ajout�
        if (not(added) &&((p->get_RDV()).compare(rdv) != 1)){ // on ajoute le nouveau noeud devant noeud point� par p si compare vaut -1 ou 0
            Sorted_Noeud* new_noeud = new Sorted_Noeud(rdv, p, last_p);
            p->set_previous(new_noeud);         // on change le pointeur 'previous' du noeud d'apr�s
            if (not(last_p == NULL))
                last_p->set_next(new_noeud);    // on change le pointeur 'next' du noeud d'avant (s'il existe)
            else
                pointeur = new_noeud;
            added = true;
        }
        last_p = p;         // on incremente last_p
        p = p->get_next();  // on incremente p
    }

    if (not(added)){        // dans le cas o� rdv que l'on veut ajout� doit �tre mis � la fin
        Sorted_Noeud* new_noeud = new Sorted_Noeud(rdv, NULL, last_p);
        last_p->set_next(new_noeud);
    }
}

void Sorted_Agenda::suppr(){
    if (pointeur != NULL)
        pointeur = (*pointeur).get_next();
}

void Sorted_Agenda::clear(){
    while (pointeur != NULL)
        this->suppr();
}

void Sorted_Agenda::Print(){
    Sorted_Noeud* p = pointeur;
    if (p != NULL){
        int i = 0;
        while (p != NULL){
            cout << "RDV numero: " << i << endl;
            p->Print();
            p = p->get_next();
            i++;
        }
    }
    else
        cout << "Il n'y a pas de rdv prevu" << endl;
}

Sorted_Agenda::Sorted_Agenda(const Sorted_Agenda &a){
    Sorted_Noeud* p = pointeur;             // creation d'un pointeur qui parcours la liste
    Sorted_Noeud* last_p = NULL;            // creation d'un pointeur qui parcous la liste avec 1 de d�calade par rapport � p
    while (p != NULL){
        Sorted_Noeud* new_noeud = new Sorted_Noeud(p->get_RDV());  // creation d'un noeud contenant seulement un rdv
        if (last_p == NULL){                // cas de la copie du premier noeud
            last_p = new_noeud;             // on incremante last_p
        }
        else{                               // copie d'un noeud autre que le premier
            last_p->set_next(new_noeud);    // on fait pointer notre dernier noeud vers le noeud vers 'new_noeud'
            last_p = new_noeud;             // on incremante last_p
        }
        p = p->get_next();                  // on incremante p
    }
}

