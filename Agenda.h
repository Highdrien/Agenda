#ifndef AGENDA_H
#define AGENDA_H
#include "Noeud.h"
#include "RDV.h"

// Agenda est une une liste cha�n�e de Noeud

class Agenda
{
    public:
        Agenda();                   // cr�e un agenda vide
        Agenda(const Agenda&);      // copie l'agneda
        void add(RDV rdv);          // ajoute un rdv � l'agenda
        void suppr();               // supprime le rdv de t�te (= le deriner rdv ajout�)
        void clear();               // supprimer tous les rdv de l'agenda
        void Print();               // affiche l'agenda

    private:
        Noeud* pointeur;

};

#endif // AGENDA_H
