#include <iostream>
using namespace std;

int angka[5];
int first = 0;
int last = -1;
int jumlah = 0;

void enqueue(int x){
    if (jumlah == 5){
        cout << "Queue Overflow!" << endl;
    } else {
        last = (last + 1) % 5;
        angka[last] = x;
        jumlah++;
    }
}

void dequeue(){
    if(jumlah == 0){
          cout << "Queue Underflow!" << endl;
    } else {
        first = (first + 1) % 5;
        jumlah--;
    }
}

void display(){
    if(jumlah == 0){
      cout << "Queue is empty!" << endl;
    } else {
        cout << "Queue: ";
        for(int i = 0; i < jumlah; i++){
            cout << angka[(first + i) % 5] << " ";
        }
        cout << endl;
    }
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    dequeue();
    dequeue();
    enqueue(60);
    enqueue(70);
    display();
    return 0;
}









