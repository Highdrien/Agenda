#ifndef Sorted_Agenda_H
#define Sorted_Agenda_H
#include "Sorted_Noeud.h"
#include "RDV.h"

// Sorted_Agenda est une une liste cha�n�e ordonn�e de Sorted_Noeud

class Sorted_Agenda
{
    public:
        Sorted_Agenda();                            // cr�e un Sorted_Agenda vide
        Sorted_Agenda(const Sorted_Agenda&);        // copie de l'Agneda
        void add(RDV rdv);                          // ajoute un rdv � l'Agenda
        void suppr();                               // supprime le rdv de t�te (= le deriner rdv ajout�)
        void clear();                               // supprimer tous les rdv de l'Agenda
        void Print();                               // affiche l'Agenda

    private:
        Sorted_Noeud* pointeur;

};

#endif // Sorted_Agenda_H
