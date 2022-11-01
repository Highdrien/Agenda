#include "Noeud.h"
#include <iostream>

using namespace std;

Noeud::Noeud(RDV rdv){
    this->rdv = rdv;
    next = NULL;
}

Noeud::Noeud(RDV rdv, Noeud* next){
    this->rdv = rdv;
    this->next = next;
}

void Noeud::Print(){
    rdv.Print();
}
