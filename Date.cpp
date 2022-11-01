#include <iostream>
#include "Date.h"

using namespace std;

Date::Date(){
    day = 1;
    month = 1;
    year = 1915;
}

Date::Date(int d, int m, int y){
    if (Check_Date(d, m, y)){
        cout << "Warning: invalid date" << endl;
        day = 1;
        month = 1;
        year = 1915;
    }
    else{
        day = d;
        month = m;
        year = y;
    }
}

void Date::Print(){
    cout << "Day: " << day <<"/" << month << "/" << year << endl;
}

bool Date::Check_Date(int day, int month, int year){
    if ((day < 1 || day > 31) || (month < 1 || month > 12) || (year < 1915 || year > 2050))
        return true;
    return false;
}

//Getter
int Date::get_day(){
    return day;
}

int Date::get_month(){
    return month;
}

int Date::get_year(){
    return year;
}

int* Date::get_Date(){
    int* date = new int[3];
    date[0] = day;
    date[1] = month;
    date[2] = year;
    return date;
}

//Setter
void Date::set_day(int new_day){
    if (new_day >= 0 && new_day < 32)
    day = new_day;
}

void Date::set_month(int new_month){
    if (new_month >= 0 && new_month < 12)
    month = new_month;
}

void Date::set_year(int new_year){
    if (new_year >= 1915 && new_year < 2050)
    year = new_year;
}

void Date::set_Date(int new_day, int new_month, int new_year){
    if (Check_Date(new_day, new_month, new_year)){
        cout << "Warning: invalid date" << endl;
        day = 1;
        month = 1;
        year = 1915;
    }
    else{
        day = new_day;
        month = new_month;
        year = new_year;
    }

}
