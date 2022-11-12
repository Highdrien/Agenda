#ifndef SORTED_Sorted_Noeud_H
#define SORTED_Sorted_Noeud_H

#include "RDV.h"

// Sorted_Noeud représente un maillon de la liste chaînée ordonnée de Sorted_Agenda pour lequel
// l’information (rdv) sera un RDV, un pointeur (next) qui pointera sur le prochain maillon d'Agenda
// et un pointeur (previous) qui pointera vers le maillot précédant.


class Sorted_Noeud
{
    public:
        Sorted_Noeud(RDV rdv);  //  creation d'un Noeud avec un rdv
        Sorted_Noeud(RDV rdv, Sorted_Noeud* next);  // creation d'un Noeud avec un rdv et un pointeur next
        Sorted_Noeud(RDV rdv, Sorted_Noeud* next, Sorted_Noeud* previous); // creation d'un Noeud complet
        void Print();   // affiche le rdv du noeud

        // Getteur
        RDV get_RDV(){return rdv;};
        Sorted_Noeud* get_next(){return next;};
        Sorted_Noeud* get_previous(){return previous;};

        // Setteur
        void set_RDV(RDV new_rdv){rdv = new_rdv;};
        void set_next(Sorted_Noeud* new_next){next = new_next;};
        void set_previous(Sorted_Noeud* new_previous){previous = new_previous;};

    private:
        RDV rdv;
        Sorted_Noeud* next;
        Sorted_Noeud* previous;
};

#endif // Sorted_Noeud_H
