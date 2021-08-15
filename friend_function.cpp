#include<iostream>

using namespace std;
class sample{
    int a;
    int b;
    public :
    void set_data(){
        a = 25;
        b = 40;
    }
    friend float mean(sample S);
};
float mean(sample S){
        return ((25.0 + 40.0) / 2.0); 
    }
int main(){
    sample X;
    X.set_data();

    cout << "Mean value = " << mean(X) << endl;
    return 0;
}