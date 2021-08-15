#include<iostream>

using namespace std;

class time{
    int hours;
    int minutes;

    public:
        void get_time(int _hours,int _minutes){
            hours = _hours;
            minutes = _minutes;
        }
        void put_time(){
            cout <<  hours << "Hours"<< " and " << minutes << "minutes" << endl;
        }
        void Sum(time T1,time T2){
            minutes = T1.minutes + T2.minutes;
            hours = minutes / 60;
            minutes = minutes % 60;
            hours = T1.hours + T2.hours + hours;
        }
};
int main(){
    time T1, T2, T3;
    T1.get_time(2,45);
    T2.get_time(3,30);

    T3.Sum(T1,T2);

    cout << "T1 = ";
    T1.put_time();
    cout << "T2 = ";
    T2.put_time();
    cout << "T3 = ";
    T3.put_time();
    
    return 0;
}