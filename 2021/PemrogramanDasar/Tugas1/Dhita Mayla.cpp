#include <iostream>
using namespace std;

int main () {
	string password = "siapaajala";
	string inputpassword = "apa!";
	
	cout << "masukkan password: ";
	cin >> inputpassword;
	
	if(inputpassword == password){
		cout << "selamat datang Doni!" << endl;
	}else{
		cout << "password yang dimasukkan salah! program tidak berjalan" << endl;
	}
	
	cout << " terimakasih sudah menggunakan aplikasi kami!" << endl;
	
	char operatormatematika;
	int bilangan1 = 6;
	int bilangan2 = 2;
	
	cout << "masukkan bilangan yang pertama: ";
	cin >> bilangan1;
	cout << "masukkan bilangan yang kedua: ";
	cin >> bilangan2;
	cout << "masukkan operator: ";
	cin >> operatormatematika;
	switch(operatormatematika){
		case '+':
			cout << bilangan1 << " + " << bilangan2 << " = " << bilangan1 + bilangan2 << endl;
			break;
		case '-':
			cout << bilangan1 << " - " << bilangan2 << " = " << bilangan1 - bilangan2 << endl;
			break;
		case '/':
			cout << bilangan1 << " / " << bilangan2 << " = " << bilangan1 / bilangan2 << endl;
			break;
		default:
			cout << "operator tidak ditemukan,terimakasih sudah mencobanya!" << endl;
			break;
	}
	
	return 0;
}
