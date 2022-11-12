#ifndef Sorted_Agenda_H
#define Sorted_Agenda_H
#include "Sorted_Noeud.h"
#include "RDV.h"

// Sorted_Agenda est une une liste chaînée ordonnée de Sorted_Noeud

class Sorted_Agenda
{
    public:
        Sorted_Agenda();                            // crée un Sorted_Agenda vide
        Sorted_Agenda(const Sorted_Agenda&);        // copie de l'Agneda
        void add(RDV rdv);                          // ajoute un rdv à l'Agenda
        void suppr();                               // supprime le rdv de tête (= le deriner rdv ajouté)
        void clear();                               // supprimer tous les rdv de l'Agenda
        void Print();                               // affiche l'Agenda

    private:
        Sorted_Noeud* pointeur;

};

#endif // Sorted_Agenda_H
