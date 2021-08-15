#include<iostream>

using namespace std;

class complex{
    float x; //Real part
    float y; //Imaginary part

    public :
        void set_value(float i,float j){
            x = i;
            y = j;
        }

        friend complex Sum(complex,complex);

        void display(complex c){
            cout << c.x << " + j" << c.y <<endl;
        }
};

complex Sum(complex a,complex b){
    complex c3;
    c3.x = a.x + b.x;
    c3.y = a.y + b.y;
    return c3;
}

   
int main(){
    complex C1, C2 ,C;
    C1.set_value(3.1,5.65);
    C2.set_value(2.75,1.2);

    C = Sum(C1,C2);

    cout << "A = ";
    C1.display(C1);
    cout << "B = ";
    C2.display(C2);
    cout << "C = ";
    C.display(C);    
    return 1;
}