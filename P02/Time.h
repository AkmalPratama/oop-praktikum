#ifndef TIME_H
#define TIME_H
#include <iostream>
using namespace std;

class Time {
    public:
        //ctor tanpa parameter
        Time();

        //ctor dengan parameter
        Time(int, int, int);

        //cctor
        Time(const Time&);

        //dtor
        ~Time();

        //Setter & Getter
        void setHour(int);
        void setMinute(int);
        void setSecond(int);
        int getHour() const;
        int getMinute() const;
        int getSecond() const;

        //Static function
        static int countTimeInstance();

        //Konversi ke detik
        int convertToSecond() const;

        //Menuliskan waktu ke layar (format: hh:mm:ss)
        void printTime();

        //Time Operation
        void addTime(const Time&);
        void decreaseTime(const Time&);
        bool earlierThan(const Time&);
        bool laterThan(const Time&);

    private:
        static int n_time;
        int hour;
        int minute;
        int second;
};

#endif //TIME_H
