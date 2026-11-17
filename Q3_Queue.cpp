#include <iostream>
using namespace std;

int angka[5];
int first = -1;
int last = -1;

void enqueue(){
    if(last == 4){
        cout << "Queue Overflow!" << endl;
    } else {
        int x;
        cout << "Enter value: ";
        if(!(cin >> x)) return;

        if(first == -1){
            first = 0;
        }
        last++;
        angka[last] = x;
        cout << "Value added: " << x << endl;
    }
}

void dequeue(){
    if(first == -1){
        cout << "Queue Underflow!" << endl;
    } else {
        cout << "Removed value: " << angka[first] << endl;
        if(first == last){
            first = -1;
            last = -1;
        } else {
            first++;
        }
    }
}

void front(){
    if(first == -1){
        cout << "Queue is empty!" << endl;
    } else {
        cout << "Front value: " << angka[first] << endl;
    }
}

void display(){
    if(first == -1){
        cout << "Queue is empty!" << endl;
    } else {
        cout << "Queue: ";
        for(int i = first; i <= last; i++){
            cout << angka[i] << " ";
        }
        cout << endl;
    }
}

int main(){
    int pilih;
    do {
        cout << endl;
        cout << "===== QUEUE MENU =====" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Front" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Choose menu: ";

        if(!(cin >> pilih)){
            cout << "Invalid input!" << endl;
            return 0;
        }

        switch(pilih){
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: front(); break;
            case 4: display(); break;
            case 5: cout << "Program ended." << endl; break;
            default: cout << "Invalid menu!" << endl;
        }
        if(!cin) return 0;
    } while(pilih != 5);
    return 0;
}
