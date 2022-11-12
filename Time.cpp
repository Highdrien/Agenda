#include <iostream>
#include "Time.h"

using namespace std;

Time::Time(){
    hour = 0;
    minute = 0;
}

Time::Time(int h, int m){
    if (h >= 0 && h < 24 && m >= 0 && m < 60){
        hour = h;
        minute = m;
    }
    else{
        cout << "Warning: l'heure est invalide" << endl;
        hour = 0;
        minute = 0;
    }
}

void Time::Print(){
    cout << "Time: " << hour <<":" << minute << endl;
}

int Time::compare(Time t){
    if (hour < t.hour) return 1;
    if (hour > t.hour) return -1;
    if (minute < t.minute) return 1;
    if (minute > t.minute) return -1;
    return 0;
}

//Getter
int Time::get_hour(){
    return hour;
}
int Time::get_minute(){
    return minute;
}
int* Time::get_Time(){
    int* time = new int[2];
    time[0] = hour;
    time[1] = minute;
    return time;
}
//Setter
void Time::set_hour(int new_hour){
    if (new_hour >= 0 && new_hour < 24)
    hour = new_hour;
}
void Time::set_minute(int new_minute){
    if (new_minute >= 0 && new_minute < 60)
    minute = new_minute;
}
void Time::set_Time(int new_hour, int new_minute){
    if (new_hour >= 0 && new_hour < 24 && new_minute >= 0 && new_minute < 60){
        hour = new_hour;
        minute = new_minute;
    }
}

