#ifndef RDV_H
#define RDV_H
#include <string>
#include <iostream>
#include "Date.h"
#include "Time.h"

using namespace std;

class RDV
{
    public:
        RDV();
        void Print();
        void add_contributor(string);
        bool is_compatible_with(RDV r);
        // Getter
        int* get_Date(){return d.get_Date();};
        int* get_Time(){return t.get_Time();};
        int get_nb_contributors(){return nb_contributors;};
        //Setter
        void set_Date(int new_day, int new_month, int new_year){d.set_Date(new_day, new_month, new_year);};
        void set_Time(int new_hour, int new_minute){t.set_Time(new_hour, new_minute);};
        void set_contributor(int, string);
        void set_place(string new_place){place = new_place;};

    private:
        Date d;
        Time t;
        string place;
        int nb_contributors;
        string* contributors;
};

#endif // RDV_H
