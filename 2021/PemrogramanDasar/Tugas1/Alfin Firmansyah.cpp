#include<iostream>
using namespace std;

int main(){

       
    string password = "mamamialezatos";
    string inputpassword = " ";
    
    cout << "selamat datang di kalkulatorku" << endl;
    
   cout << "masukkan password:";
    cin >> inputpassword;
    
    if(inputpassword == password){
        cout << "selamat datang Bosque" << endl;
    
  
        char operatorMatematika;
    int bilangan1 = 0;
    int bilangan2 = 0;

    cout << "Masukan bilangan pertama: ";
    cin >> bilangan1;
    cout << "Masukan bilangan kedua: ";
    cin >> bilangan2;
    cout << "Masukan Operator (+, -, *, /): ";
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
            cout << "Operator tidak ditemukan" << endl;
            break;   
   }
             } else {
            cout << "Lu Cupu Gatau passwordnya" << endl;
           }
             cout << "terimakasih telah menggunakan kalkulatorku" << endl;
    
    return 0; 
}