#include <iostream>
using namespace std;

int angka[5];
int top = -1;

void push(){
    if(top == 4){
        cout << "Stack Overflow!" << endl;
    } else {
        int x;
        cout << "Enter value: ";
        cin >> x;
        top++;
        angka[top] = x;
        cout << "Value added: " << x << endl;
    }
}

void pop(){
    if(top == -1){
        cout << "Stack Underflow!" << endl;
    } else {
        cout << "Removed value: " << angka[top] << endl;
        top--;
    }
}

void peek(){
    if(top == -1){
        cout << "Stack is empty!" << endl;
    } else {
        cout << "Top value: " << angka[top] << endl;
    }
}

void display(){
    if(top == -1){
        cout << "Stack is empty!" << endl;
    } else {
        cout << "Stack: ";
        for(int i = top; i >= 0; i--){
            cout << angka[i] << " ";
        }
        cout << endl;
    }
}

int main(){
    int pilih;
    do {
        cout << endl;
        cout << "===== STACK MENU =====" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Choose menu: ";

        if(!(cin >> pilih)){
            cout << "Invalid input!" << endl;
            return 0;
        }

        switch(pilih){
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: cout << "Program ended." << endl; break;
            default: cout << "Invalid menu!" << endl;
        }
        if(!cin) return 0;
    } while(pilih != 5);
    return 0;
}
