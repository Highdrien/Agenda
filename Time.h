#ifndef TIME_H
#define TIME_H


class Time
{
    public:
        Time();
        Time(int, int);
        void Print();
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
