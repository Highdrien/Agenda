#include "Agenda.h"
#include "Noeud.h"
#include "RDV.h"

#include <iostream>
using namespace std;

Agenda::Agenda(){
    pointeur = NULL;
}

void Agenda::add(RDV rdv){
    pointeur = new Noeud(rdv, pointeur);
}

void Agenda::suppr(){
    if (pointeur != NULL)
        pointeur = (*pointeur).get_next();
}

void Agenda::clear(){
    while (pointeur != NULL)
        this->suppr();
}

void Agenda::Print(){
    Noeud* p = pointeur;
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


Agenda::Agenda(const Agenda &a){
    Noeud* p = pointeur;             // creation d'un pointeur qui parcours la liste
    Noeud* last_p = NULL;            // creation d'un pointeur qui parcous la liste avec 1 de décalade par rapport à p
    while (p != NULL){
        Noeud* new_noeud = new Noeud(p->get_RDV());  // creation d'un noeud contenant seulement un rdv
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




