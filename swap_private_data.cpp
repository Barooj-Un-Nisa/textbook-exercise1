#include<iostream>

using namespace std;
class class_2;
class class_1{
    int value_1;

    public :
        void set_value(int i){
            value_1 = i;
        }
        void display(){
            cout << value_1 << endl;
        }
        friend void Swap(class_1 &,class_2 &);
};
class class_2{
    int value_2;

    public :
        void set_value(int i){
            value_2 = i;
        }
        void display(){
            cout << value_2 << endl;
        }
        friend void Swap(class_1 &,class_2 &);
};

void Swap(class_1 & a,class_2 & b){
    int temp = a.value_1;
    a.value_1 = b.value_2;
    b.value_2 = temp;
}
   
int main(){
    class_1 C1;
    class_2 C2;

    C1.set_value(100);
    C2.set_value(200);

    cout << "Values before swapping : " << endl;
    C1.display();
    C2.display();

    cout << "Values after swapping : " << endl;
    Swap(C1,C2);
    C1.display();
    C2.display();

    return 1;
}