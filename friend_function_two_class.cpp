#include<iostream>

using namespace std;
class ABC;
class XYZ{
    int x;
    public :
        void set_data(int i){
            x = i;
        }
        friend int max(XYZ,ABC);
};
class ABC{
    int a;
    public :
        void set_data(int i){
            a = i;
        }
        friend int max(XYZ,ABC);
};

int max(XYZ m,ABC n){
   if(m.x > n.a)
        return m.x;
   else 
        return n.a;
}
   
int main(){
    ABC abc;
    abc.set_data(10);

    XYZ xyz;
    xyz.set_data(20);

    int m = max(xyz,abc);
        cout << m << endl;
    return 0;
}