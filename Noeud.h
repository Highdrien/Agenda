#ifndef NOEUD_H
#define NOEUD_H
#include "RDV.h"


class Noeud
{
    public:
        Noeud(RDV);
        Noeud(RDV, Noeud*);
        RDV get_RDV(){return rdv;};
        Noeud* get_next(){return next;};
        void set_RDV(RDV new_rdv){rdv = new_rdv;};
        void set_next(Noeud* new_next){next = new_next;};
        void Print();

    private:
        RDV rdv;
        Noeud* next;
};

#endif // NOEUD_H
