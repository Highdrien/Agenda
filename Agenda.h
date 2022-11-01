#ifndef AGENDA_H
#define AGENDA_H
#include "Noeud.h"
#include "RDV.h"

class Agenda
{
    public:
        Agenda();
        Agenda(const Agenda&);
        void add(RDV rdv);
        void suppr();
        void clear();
        void Print();

    private:
        Noeud* pointeur;

};

#endif // AGENDA_H
