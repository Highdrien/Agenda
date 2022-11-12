#include <iostream>
#include "Date.h"
#include "Time.h"
#include "RDV.h"
#include "Noeud.h"
#include "Agenda.h"
#include "Sorted_Noeud.h"
#include "Sorted_Agenda.h"

using namespace std;

int main()
{
    cout << "--- Date ---" << endl;
    Date d = Date(15, 2, 1932);         // création d'une date
    d.Print();                          // affichage de la date
    cout << " " << endl;


    cout << "--- Time ---" << endl;
    Time t = Time(16, 29);              // création d'une heure
    t.Print();                          // affichage de l'heure
    cout << " " << endl;


    cout << "--- RDV ---" << endl;
    RDV rdv = RDV();                    // création d'un rdv
    rdv.set_Date(15, 11, 2022);         // on change la date du rdv pour le 15 novembre 2022
    rdv.set_Time(14, 00);               // on change l'heure du rdv pour 14h
    rdv.add_contributor("Assane");      // on ajoute Assane comme participant au rdv
    rdv.add_contributor("Valentin");    // on ajoute Valentin comme participant au rdv
    rdv.add_contributor("Adrien");      // on ajoute Adrien comme participant au rdv
    rdv.set_place("info 1");            // on change le lieu du rdv pour la salle info 1
    rdv.Print();                        // on affiche le rdv

    //
    RDV rdv2 = RDV();                   // on crée un 2eme rdv
    rdv2.set_Date(16, 11, 2022);
    rdv2.set_Time(10, 15);
    rdv2.add_contributor("Adrien");
    rdv2.set_place("local GInfo");
    // on compare les 2 rdv (rdv & rdv2):
    // -1 si le 'rdv2' est avant 'rdv', 1 si le 'rdv2' est après 'rdv', 0 s'ils sont en même temps
    cout << "on compare rdv avec rdv2 " << rdv.compare(rdv2) << endl;

    // on crée un 3eme rdv qui lui sera avant le 1er
    RDV rdv3 = RDV();
    rdv3.set_Date(15, 11, 2022);
    rdv3.set_Time(13, 30);
    cout << "on compare rdv avec rdv3 " << rdv.compare(rdv3) << endl;
    cout << " " << endl;

    cout << "--- Noeud ---" << endl;
    Noeud n1 = Noeud(rdv);              // on crée un noeud contenant le 1er rdv
    Noeud n2 = Noeud(rdv2, &n1);        // on crée un autre noeud contenant le 2eme rdv et pointant sur le 1er noeud
    cout << "Noeud 1" << endl;
    n1.Print();                         // on affiche le 1er noeud
    cout << "Noeud 2" << endl;
    n2.Print();                         // on affiche le 2eme noeud
    cout << " " << endl;


    cout << "--- Agenda ---" << endl;
    Agenda agenda = Agenda();           // on crée un agenda
    agenda.add(rdv);                    // on lui ajoute 'rdv'
    agenda.add(rdv2);                   // on lui ajoute 'rdv2'
    agenda.add(rdv3);                   // on lui ajoute 'rdv3'
    agenda.Print();                     // on affiche l'agenda
    agenda.suppr();                     // on supprime le derinier rdv ajouté
    cout << " " << endl;
    cout << "le dernier rdv ajoute vient d'etre supprimer" << endl;
    agenda.Print();                     // on affiche l'agenda
    agenda.clear();                     // on supprimer tous les rdv
    cout << " " << endl;
    cout << "Tout les rdv viennent d'etre supprimer" << endl;
    agenda.Print();                     // on affiche l'agenda
    cout << " " << endl;

    cout << "--- Sorted_Agenda ---" << endl;
    Sorted_Agenda s_agenda = Sorted_Agenda();
    s_agenda.add(rdv);                    // on lui ajoute 'rdv'
    cout << "---agenda avec le 1er rdv---" << endl;
    s_agenda.Print();                     // on affiche l'agenda
    s_agenda.add(rdv2);                   // on lui ajoute 'rdv2'
    cout << "---agenda avec les 2 premiers rdvs---" << endl;
    s_agenda.Print();                     // on affiche l'agenda
    s_agenda.add(rdv3);                   // on lui ajoute 'rdv3'
    cout << "---agenda avec les 3 premiers rdvs---" << endl;
    s_agenda.Print();                     // on affiche l'agenda

    return 0;
}
