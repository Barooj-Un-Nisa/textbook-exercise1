#include<iostream>

using namespace std;
#define m 50

class ITEMS{
    int item_code[m];
    float price[50];
    int count;
    public : 
        void CNT (void){
            count = 0;
        }
        void set_item();
        void diplay_Sum();
        void remove();
        void display_items();
};

void ITEMS :: set_item(){
    cout << "Enter item code : " << endl;
    cin >> item_code[count];

    cout << "Enter item code : " << endl;
    cin >> item_code[count];

    count++;
}

void ITEMS :: diplay_Sum(){
    float sum = 0;

    for(int i = 0; i < count; i++){
        sum += price[i];
    }
    cout << "Total value "<< sum << endl;
}
void ITEMS :: remove(){
    int a;
    cout << "Enter item code "<< endl;
    cin >> a;

    for(int i = 0; i < count; i++){
        if(item_code[i] == a){
            price[i] = 0;
        }
    }
}
void ITEMS :: display_items(){
    cout << "Code" << "     "<< "Price" << endl;
    for(int i = 0; i < count; i++){
        cout << item_code[i] << "       " << price[i] << endl;
    }
}

int main(){
    ITEMS order;
    order.CNT();

    int a;
    do{
        cout << "You can do the following; Enter appropriate number" << endl;
        cout << "1 : Add an item" << endl;
        cout << "2 : Display total value" << endl;
        cout << "3 : Delete an item" << endl;
        cout << "4 : Display all items" << endl;
        cout << "5 : Quit" << endl;

        cout << "What is your option?" << endl;
        cin >> a;

        switch(a){
            case 1 :
                order.set_item();
                break;
            case 2 :
                order.diplay_Sum();
                break;
            case 3 :
                order.remove();
                break;
            case 4 :
                order.display_items();
                break;
            case 5 :
                break;
            default :
                cout << "Error in input;try again" << endl;
        } 

    }while(a != 5);

    return 0;
}
