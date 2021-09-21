#include <iostream>
using namespace std;
int main(){
    string password = "AhmadHabibi";
    string inputpassword = " ";
    
    cout << "Enter Password: ";
    cin >> inputpassword;
    
    if(inputpassword == password){
    cout << "Access Granted. Welcome Sir!" << endl;
        char operatormatematika;
        int bilangan1;
        int bilangan2;
        
        cout << "Enter number: ";
        cin >> bilangan1;
        cout << "Enter number: ";
        cin >> bilangan2;
        cout << "Enter operator(+, -, *, /): ";
        cin >> operatormatematika;
        switch(operatormatematika){
            case '+':
            cout << bilangan1 << "+" << bilangan2 << "=" << bilangan1 + bilangan2 << endl; break;
            case '-':
            cout << bilangan1 << "-" << bilangan2 << "=" << bilangan1 - bilangan2 << endl; break;
            case '*':
            cout << bilangan1 << "*" << bilangan2 << "=" << bilangan1 * bilangan2 << endl; break;
            case '/':
            cout << bilangan1 << "/" << bilangan2 << "=" << bilangan1 / bilangan2 << endl; break;
        }
}else{
        cout << "Wrong Password. Try again?" << endl;
        cout << "Enter Password: ";
        cin >> inputpassword;
      if(inputpassword == password){
            cout << "Access Granted. Welcome Sir!" << endl;
        char operatormatematika;
        int bilangan1;
        int bilangan2;
        
        cout << "Enter number: ";
        cin >> bilangan1;
        cout << "Enter number: ";
        cin >> bilangan2;
        cout << "Enter operator(+, -, *, /): ";
        cin >> operatormatematika;
        switch(operatormatematika){
            case '+':
            cout << bilangan1 << "+" << bilangan2 << "=" << bilangan1 + bilangan2 << endl; break;
            case '-':
            cout << bilangan1 << "-" << bilangan2 << "=" << bilangan1 - bilangan2 << endl; break;
            case '*':
            cout << bilangan1 << "*" << bilangan2 << "=" << bilangan1 * bilangan2 << endl; break;
            case '/':
            cout << bilangan1 << "/" << bilangan2 << "=" << bilangan1 / bilangan2 << endl; break;
        }
    }
else{
        cout << "Wrong Password. Try again?" << endl;  
        cout << "Enter Password: ";
        cin >> inputpassword;
    if (inputpassword == password){
    cout << "Access Granted. Welcome Sir!" << endl;
        char operatormatematika;
        int bilangan1;
        int bilangan2;
        
        cout << "Enter number: ";
        cin >> bilangan1;
        cout << "Enter number: ";
        cin >> bilangan2;
        cout << "Enter operator(+, -, *, /): ";
        cin >> operatormatematika;
        switch(operatormatematika){
            case '+':
            cout << bilangan1 << "+" << bilangan2 << "=" << bilangan1 + bilangan2 << endl; break;
            case '-':
            cout << bilangan1 << "-" << bilangan2 << "=" << bilangan1 - bilangan2 << endl; break;
            case '*':
            cout << bilangan1 << "*" << bilangan2 << "=" << bilangan1 * bilangan2 << endl; break;
            case '/':
            cout << bilangan1 << "/" << bilangan2 << "=" << bilangan1 / bilangan2 << endl; break;
        }
                }
            
else{
        cout << "Access Denied. Go Away!" << endl;
    }
       }
}        
    return 0;
}