#ifndef RDV_H
#define RDV_H
#include <string>
#include <iostream>
#include "Date.h"
#include "Time.h"

using namespace std;

// RDV est une classe contenant une date (d), une heure (t), un lieu (place),
//   une liste de participants (contributors), et le nombre de participant (nb_contributors)

class RDV
{
    public:
        RDV();                                  // crée un rdv (d=01/01/1915, t=00:00, palce='Nowhere', nb_contributors=0)
        void Print();                           // affiche le rdv
        void add_contributor(string);           // ajoute un participant au rdv
        int compare(RDV r);                     // compare le RDV avec 'r'. Renvoie -1 si r est avant, 0 si c'est la même date et la même heure, et 1 si r est après

        // Getter
        int* get_Date(){return d.get_Date();};
        int* get_Time(){return t.get_Time();};
        int get_nb_contributors(){return nb_contributors;};

        //Setter
        void set_Date(int new_day, int new_month, int new_year){d.set_Date(new_day, new_month, new_year);};
        void set_Time(int new_hour, int new_minute){t.set_Time(new_hour, new_minute);};
        void set_contributor(int, string);      // change le participant numéro i
        void set_place(string new_place){place = new_place;};

    private:
        Date d;
        Time t;
        string place;
        int nb_contributors;
        string* contributors;
};

#endif // RDV_H
