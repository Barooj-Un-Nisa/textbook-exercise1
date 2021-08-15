#include<iostream>

using namespace std;

class set{
    int m,n;

    public :
    void set_data();
    void diplay_data();
    int largest();
};

int set :: largest(){
    if(m >= n)
        return m;
    else 
    return n;
}

void set :: set_data(){
    cout << "Enter values of m and n" << endl;
    cin >> m >> n;
}
void set :: diplay_data(){
    cout << "Largest value = " << largest() << endl;
}
int main(){
    set a;
    a.set_data();
    a.diplay_data();

    return 0;
}
