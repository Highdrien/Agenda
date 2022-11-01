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
    cout << "place of the RDV: " << place << endl;
    if (nb_contributors == 0)
        cout << "There are no contributors to this RDV." << endl;
    else{
        cout << "Contributors are: ";
        for (int i = 0; i < nb_contributors-1; i++)
            cout << contributors[i] << ", ";
        cout << contributors[nb_contributors-1] << "." << endl;
    }

}

void RDV::add_contributor(string name){
    contributors[nb_contributors] = name;
    nb_contributors = nb_contributors + 1;
}

void RDV::set_contributor(int i, string name){
    contributors[i] = name;
}

bool RDV::is_compatible_with(RDV r){
    bool same_date = (d.get_day() == r.d.get_day()) && (d.get_month() == r.d.get_month()) && (d.get_year() == r.d.get_year());
    bool same_time = (t.get_hour() == r.t.get_hour()) && (t.get_minute() == r.t.get_minute());
    return same_date && same_time;
}
