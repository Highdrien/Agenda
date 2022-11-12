#ifndef TIME_H
#define TIME_H

// Time est une classe représenté par une heure (hour) et des minutes (minute)

class Time
{
    public:
        Time();                 // crée l'heure 00:00
        Time(int, int);         // crée une heure précise (le premier arguments correspond à l'heure et l'autre aux minutes)
        void Print();           // affiche l'heure
        int compare(Time t);    // compare l'heure avec 't'. renvoie -1 si t est avant, 0 si c'est la même heure, et 1 si t est après

        // Getter
        int get_hour();
        int get_minute();
        int* get_Time();

        // Setter
        void set_hour(int);
        void set_minute(int);
        void set_Time(int, int);

    private:
        int hour;
        int minute;
};

#endif // TIME_H
