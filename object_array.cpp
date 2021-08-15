#include<iostream>

using namespace std;

class Employee{
    string name;
    int age;

    public :
        void get_data();
        void put_data();
};

inline void Employee :: get_data(){
    cout << "Enter name :";
    cin >> name;
    cout << "Enter age : ";
    cin >> age;
    cout << endl;
}

inline void Employee :: put_data(){
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
}
int main(){
    Employee manager[3];

    for(int i = 0; i < 3; i++){
        cout << "Details of manager " << i+1 << endl;
            manager[i].get_data();
    }
     for(int i = 0; i < 3; i++){
        cout << endl;
        cout << "Manager " << i+1 << endl;
            manager[i].put_data();
        cout << endl;
    }
    return 0;
}