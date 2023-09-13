#include <iostream>
#include<string>

class Date{
public:
    Date(int m, int d, int y):
        month(m), day (d), year(y){
    }
    void setMonth(int m){
        if (m>12 && m<1){
            month=1;
        }
    }
    void setDay(int d){
        d=day;
    }
    void setYear(int y){
        y=year;
    }
    int getMonth()const{
        return month;
    }
    int getDay()const{
        return day;
    }
    int getYear()const{
        return year;
    }
    void displayDate()const{
        std::cout<<month<<"/"<<day<<"/"<<year<<std::endl;
    }
private: 
int month;
int day;
int year;
};