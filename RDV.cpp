#include "RDV.h"

RDV::RDV(){
    d = Date();
    t = Time();
    place = "Nowhere";
    nb_contributors = 0;
    contributors = new string[10];
}

void RDV::Print(){
    d.Print();
    t.Print();
    cout << "lieu du RDV: " << place << endl;
    if (nb_contributors == 0)
        cout << "Il n'y a pas de contributeur pour ce RDV." << endl;
    else{
        cout << "Les contributeurs sont: ";
        for (int i = 0; i < nb_contributors-1; i++)
            cout << contributors[i] << ", ";
        cout << contributors[nb_contributors-1] << "." << endl;
    }

}

void RDV::add_contributor(string name){
    contributors[nb_contributors] = name;
    nb_contributors = nb_contributors + 1;
}

int RDV::compare(RDV r){
    int date_compare = d.compare(r.d);  // compare les dates
    if (date_compare != 0)              // si ce n'est pas les mêmes alors on renvoie la comparaison de date
        return date_compare;
    return t.compare(r.t);              // sinon on renvoie la comparaison des heures
}

// Setteur
void RDV::set_contributor(int i, string name){
    contributors[i] = name;
}
