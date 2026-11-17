#include <iostream>
using namespace std;

char huruf[100];
int top = -1;

void push(char x){
    if(top == 99){
        cout << "Stack Overflow!" << endl;
    } else {
        top++;
    huruf[top] = x;
    }
}

char pop(){
     if(top == -1){
         cout << "Stack Underflow!" << endl;
        return '\0';
    } else {
        char x = huruf[top];
        top--;
        return x;
    }
}

int main(){
    char kata[100];
    int panjang = 0;
    cout << "Enter word: ";
    cin.width(100);
    if(!(cin >> kata)) return 0;
    while(kata[panjang] != '\0'){
        panjang++;
    }
    for(int i = 0; i < panjang; i++){
        push(kata[i]);
    }
    cout << "Original: " << kata << endl;
    cout << "Reversed: ";
    for(int i = 0; i < panjang; i++){
        cout << pop();
    }
    cout << endl;
    return 0;
}
























