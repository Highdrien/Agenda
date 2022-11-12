#ifndef DATE_H
#define DATE_H

// Date est une classe repr�sent� par un jour (day), un mois (month) et une ann�e (year)

class Date
{
    public:
        Date();                     // cr�e la date du 01/01/1915
        Date(int d, int m, int y);  // cr�e la date du d/m/y
        void Print();               // affiche la date
        int compare(Date d);        // compare la date avec 'd'. Renvoie -1 si d est avant, 0 si c'est la m�me date, et 1 si d est apr�s

        // Getter
        int get_day();
        int get_month();
        int get_year();
        int* get_Date();

        // Setter
        void set_day(int);
        void set_month(int);
        void set_year(int);
        void set_Date(int, int, int);

    private:
        int day;
        int month;
        int year;
        bool Check_Date(int, int, int); // v�rifie si la date est correcte (ou non)

};

#endif // DATE_H
