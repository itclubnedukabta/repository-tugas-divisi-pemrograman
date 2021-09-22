#include<iostream>
using namespace std;

int main(){

       
    string password = "qwerty";
    string inputpassword = " ";
    
    cout << "welcome to my calculator" << endl;
    
   cout << "enter password :";
    cin >> inputpassword;
    
    if(inputpassword == password){
        cout << "welcome sir" << endl;
    
  
        char operatorMatematika;
    int bilangan1 = 0;
    int bilangan2 = 0;

    cout << "enter the first number : ";
    cin >> bilangan1;
    cout << "enter the second number : ";
    cin >> bilangan2;
    cout << "operator input (+, -, *, /): ";
    cin >> operatorMatematika;
    switch(operatorMatematika){
        case '+':
            cout << bilangan1 << " + " << bilangan2 << " = " << bilangan1 + bilangan2 << endl;
            break;
        case '-':
            cout << bilangan1 << " - " << bilangan2 << " = " << bilangan1 - bilangan2 << endl;
            break;
        case '*':
            cout << bilangan1 << " * " << bilangan2 << " = " << bilangan1 * bilangan2 << endl;
            break;
        case '/':
            cout << bilangan1 << " / " << bilangan2 << " = " << bilangan1 / bilangan2 << endl;
            break;
        default:
            cout << "operator not found" << endl;
            break;   
   }
             } else {
            cout << "the password is qwerty" << endl;
           }
             cout << "thanks for using my calculator" << endl;
    
    return 0; 
}
