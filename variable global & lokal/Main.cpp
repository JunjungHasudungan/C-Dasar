#include<iostream>

using namespace std;

	string myVar = "Variable global ";

	void globalVar()
	{
		// masukkan variable global kedalam method agar nilai variable global 
		// tetap dieksekusi meskipun memiliki nama variable yang sama
		
		cout <<"Status: " << myVar <<endl;
	}

	int main(int argc, char args[])
	{
	string myVar = "Variable lokal";
	
	cout << "Status: " << myVar << endl;
	globalVar();
	}