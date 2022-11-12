#ifndef NOEUD_H
#define NOEUD_H
#include "RDV.h"

// Noeud représente un maillon de la liste chaînée d'Agenda pour lequel l’information (rdv)
//   sera un RDV et qui pointera (next) sur un autre maillon.

class Noeud
{
    public:
        Noeud(RDV);             // crée un noeud avec un rdv (qui pointe vers rien)
        Noeud(RDV, Noeud*);     // crée un noeud avec un rdv qui pointe vers un autre noeud
        void Print();           // affiche le rdv contenue dans le Noeud

        // Getteur
        RDV get_RDV(){return rdv;};
        Noeud* get_next(){return next;};

        // Setteur
        void set_RDV(RDV new_rdv){rdv = new_rdv;};
        void set_next(Noeud* new_next){next = new_next;};

    private:
        RDV rdv;
        Noeud* next;
};

#endif // NOEUD_H
