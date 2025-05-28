#include <iostream>
using namespace std;

int main(){

    string name;

    cout << "Hello! What is your name?" << endl;

    cin >> name;

    cout << "Hey " << name << "!";

    for(int i = 0; i <= 100; i+=2){

        cout << i << endl;

    }
}