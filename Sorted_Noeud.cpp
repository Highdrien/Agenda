#include "Sorted_Noeud.h"
#include <iostream>

using namespace std;

Sorted_Noeud::Sorted_Noeud(RDV rdv){
    this->rdv = rdv;
    next = NULL;
}

Sorted_Noeud::Sorted_Noeud(RDV rdv, Sorted_Noeud* next){
    this->rdv = rdv;
    this->next = next;
    previous = NULL;
}

Sorted_Noeud::Sorted_Noeud(RDV rdv, Sorted_Noeud* next, Sorted_Noeud* previous){
    this->rdv = rdv;
    this->next = next;
    this->previous = previous;
}

void Sorted_Noeud::Print(){
    rdv.Print();
}
