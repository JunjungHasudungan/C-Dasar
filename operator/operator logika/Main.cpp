#include<iostream>

using namespace std;
	
	// operator logika : and(&&), or(||), not(!)
	
int main(int argc, char args[])
{
	int numb_a, numb_b;
	bool hasil;
	
	cout << "nilai pertama : ";
	cin >> numb_a;
	
	cout << "nilai kedua : ";
	cin >> numb_b;
	cout << endl;
	// 1. and (&&)
	// kedua variable bernilai benar, maka true	
	cout <<"menggunakan operator and(&&)" << endl;
	cout << numb_a  << " == 3 && " << numb_b << " == 10 = "<< (numb_a == 3 and numb_b == 10) << endl<< endl;
	
	// 2. or (||)
	// salah satu variable benar, maka hasil true
	cout <<"menggunakan operator or(||)" << endl;
	cout << numb_a  << " == 3 && " << numb_b << " == 10 = "<< (numb_a == 3 or numb_b == 10) << endl << endl;
	
	// 3 not(!)
	// kebalikan dari nilai variable
	cout <<"menggunakan operator not(!)" << endl;	
	cout << "!(" << numb_a  << " == 3) = " << !(numb_a == 3 ) << endl << endl;
}