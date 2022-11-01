#include "Agenda.h"
#include "Noeud.h"
#include "RDV.h"

#include <iostream>
using namespace std;

Agenda::Agenda(){
    pointeur = NULL;
}

void Agenda::add(RDV rdv){
    /*
    Noeud new_Noeud = Noeud(rdv, pointeur);
    pointeur = &new_Noeud;
    */
    pointeur = new Noeud(rdv, pointeur);
}

void Agenda::suppr(){
    if (pointeur != NULL)
        pointeur = (*pointeur).get_next(); // pointeur = pointeur->get_next();
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
            cout << "RDV number " << i << ":" << endl;
            p->Print();
            p = p->get_next();
            i++;
        }
    }
    else
        cout << "There are no scheduled appointments" << endl;

}

Agenda::Agenda(const Agenda &a){
    Noeud* p = pointeur;
    Noeud* new_p = NULL;
    while (p != NULL){
        Noeud* last_Noeud = new Noeud(p->get_RDV());
        if (new_p == NULL){
            new_p = last_Noeud;
        }
        else{
            new_p->set_next(last_Noeud);
            new_p = last_Noeud;
        }
        p = p->get_next();
    }
}






