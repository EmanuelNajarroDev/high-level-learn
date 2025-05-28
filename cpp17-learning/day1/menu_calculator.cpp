#include <iostream>
#include <iomanip>
#include <cstdlib> 
using namespace std;

int main(){

    int operation;
    int n1;
    int n2;

    cout << setfill('=') << setw(4) << "";

    cout << " Calculator Menu ";

    cout << setw(4) << "" << endl;

    cout << "1. Add" << endl;
    
    cout << "2. Subtract" << endl;
    
    cout << "3. Multiply" << endl;
    
    cout << "4. Divide" << endl;
    
    cout << "5. Exit" << endl;

    cout << "What operation would you like to perform? Choose from 1-5" << endl;

    cin >> operation;

    if(operation == 5){
        
        cout << "Exiting program..." << endl;
        exit(0);
    }

    cout << "Enter two numbers: " << endl;

    cin >> n1 >> n2;

    switch (operation)
    {
        case 1:

            cout << "Result: " << (n1 + n2) << endl;
            break;
    
        case 2:

            cout << "Result: " << (n1 - n2) << endl;
            break;
    
        case 3:

            cout << "Result: " << (n1 * n2) << endl;
            break;
    
        case 4:

            if(n2 != 0){
                cout << "Result: " << n1/n2 << endl;
            }
            else{
                cout << "Error! Division by zero!" << endl;
            }
            break;

        default:

            cout << "Invalid choice" << endl;
            break;
    }
}

