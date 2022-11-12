#ifndef AGENDA_H
#define AGENDA_H
#include "Noeud.h"
#include "RDV.h"

// Agenda est une une liste chaînée de Noeud

class Agenda
{
    public:
        Agenda();                   // crée un agenda vide
        Agenda(const Agenda&);      // copie l'agneda
        void add(RDV rdv);          // ajoute un rdv à l'agenda
        void suppr();               // supprime le rdv de tête (= le deriner rdv ajouté)
        void clear();               // supprimer tous les rdv de l'agenda
        void Print();               // affiche l'agenda

    private:
        Noeud* pointeur;

};

#endif // AGENDA_H
