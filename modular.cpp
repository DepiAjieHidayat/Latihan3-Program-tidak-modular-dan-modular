#include <iostream>
using namespace std;

//prototype
void prosesbaca();
void prosestukar();
void prosestampil();

//variabel global
		int a,b, temp;
		
//program utama
	int main () {
		prosesbaca();
		prosestukar();
		prosestampil();
		return 0;
	}
	
//proses membaca
void prosesbaca(){
	cout << "masukkan nilai a : ";
	cin >> a;
	cout << "masukkan nilai b : ";
	cin >> b;
}

//prosestukar
void prosestukar (){
temp = b;
b = a;
a = temp;
}

//proses tampil
void prosestampil (){
	cout << "==============" <<endl;
	cout << "nilai a sekarang : "<<a<<endl;
	cout << "nilai b sekarang : "<<b;
}