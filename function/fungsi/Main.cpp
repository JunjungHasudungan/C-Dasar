#include <iostream>

using namespace std;

// fungsi dengan parameter dan dengan nilai return
int perkalian(int numb_a, int numb_b)
{
	int hasil;
	
	hasil = numb_a * numb_b;
	
	return hasil;
}
// fungsi tanpa parameter dan tanpa nilai return
void judul()
{
	cout << "\t === memperkenalkan jenis function ==== " << endl;  
}

// fungsi dengan parameter tanpa nilai return
void tampilkan(int input_nilai)
{
	cout << input_nilai << endl;	
}

int main(int argc, char args[])
{
	judul();
	int numb_a, numb_b;
	
	cout << "nilai pertama \t: ";
	cin >> numb_a;
	
	cout << "nilai kedua \t: ";
	cin >> numb_b;
	
	int hasil = perkalian(numb_a, numb_b);
	tampilkan(hasil);
	return 0;
}