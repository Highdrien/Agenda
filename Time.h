#ifndef TIME_H
#define TIME_H

// Time est une classe repr�sent� par une heure (hour) et des minutes (minute)

class Time
{
    public:
        Time();                 // cr�e l'heure 00:00
        Time(int, int);         // cr�e une heure pr�cise (le premier arguments correspond � l'heure et l'autre aux minutes)
        void Print();           // affiche l'heure
        int compare(Time t);    // compare l'heure avec 't'. renvoie -1 si t est avant, 0 si c'est la m�me heure, et 1 si t est apr�s

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
