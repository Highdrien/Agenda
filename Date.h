#ifndef DATE_H
#define DATE_H


class Date
{
    public:
        Date();
        Date(int d, int m, int y);
        void Print();
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
        bool Check_Date(int, int, int);

};

#endif // DATE_H
