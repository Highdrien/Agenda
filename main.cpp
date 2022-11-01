#include <iostream>
#include "Date.h"
#include "Time.h"
#include "RDV.h"
#include "Noeud.h"
#include "Agenda.h"

using namespace std;

int main()
{
    cout << "--- Date ---" << endl;
    Date d = Date(15, 2, 1932);
    d.Print();
    cout << " " << endl;


    cout << "--- Time ---" << endl;
    Time t = Time(16, 29);
    t.Print();
    cout << " " << endl;


    cout << "--- RDV ---" << endl;
    RDV rdv = RDV();
    rdv.set_Date(15, 11, 2022);
    rdv.set_Time(14, 00);
    rdv.add_contributor("Assane");
    rdv.add_contributor("Valentin");
    rdv.add_contributor("Adrien");
    rdv.set_place("info 1");
    rdv.Print();

    RDV rdv2 = RDV();
    rdv2.set_Date(16, 11, 2022);
    rdv2.set_Time(10, 15);
    rdv2.add_contributor("Adrien");
    rdv2.set_place("local GInfo");
    cout << "rdv is compatible with rdv2? " << rdv.is_compatible_with(rdv2) << endl;

    RDV rdv3 = RDV();
    rdv3.set_Date(15, 11, 2022);
    rdv3.set_Time(14, 00);
    cout << "rdv is compatible with rdv3? " << rdv.is_compatible_with(rdv3) << endl;
    cout << " " << endl;


    cout << "--- Noeud ---" << endl;
    Noeud n1 = Noeud(rdv);
    Noeud n2 = Noeud(rdv2, &n1);
    cout << "Noeud 1" << endl;
    n1.Print();
    cout << "Noeud 2" << endl;
    n2.Print();


    cout << "--- Agenda ---" << endl;
    Agenda agenda = Agenda();
    agenda.add(rdv);
    agenda.add(rdv2);
    agenda.add(rdv3);
    agenda.Print();
    agenda.suppr();
    cout << " " << endl;
    cout << "the first RDV has been cancelled" << endl;
    agenda.Print();
    agenda.clear();
    cout << " " << endl;
    cout << "All of RDV has been cancelled" << endl;
    agenda.Print();

    return 0;
}
