#include<iostream>

using namespace std;

class item{
    private : 
        int number;
        float cost;
    public :
        void get_data(int a,float b);
        void put_data(){
            cout << "Number : " << number <<endl;
            cout << "Cost : " << cost <<endl;
        }
};

inline void item :: get_data(int a,float b){
    number = a;
    cost = b;
}

int main(){
    item x;
    cout << "Object x" << endl;
    x.get_data(100,299.95);
    x.put_data();


    item y;
    cout << "\nObject y" << endl;
    y.get_data(200,175.5);
    y.put_data();


    return 0;
}