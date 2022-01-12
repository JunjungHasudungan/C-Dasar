#include <iostream>

using namespace std;
// matriks 2 dimensi dengan input user

void matriks()
{
	int baris, kolom;
	bool ulang;
	
	int nilaiMatriks[10][10];
		cout << "\t === Matriks 2 dimensi ===" << endl;
		cout << "jumlah kolom: ";
		cin >> kolom;
	
		cout << "jumlah baris: ";
		cin >> baris;
	
		cout << endl;

		for(int i = 0; i < kolom; i++)
		{
			for(int j = 0; j < baris; j++)
			{
				cout << "kolom["<< (i+1) <<"] baris[" << (j+1) <<"] = ";
				cin >> nilaiMatriks[i][j];
			}	
			cout << endl;
		} 
	cout << endl;
	cout << "Nilai matriks :" <<endl;
	
	for(int k = 0; k < kolom; k++)
	{
		for(int l = 0; l < baris; l++)
		{
			cout << nilaiMatriks[k][l] << " ";	
		}
		cout << endl;
	}
}
int main(int argc, char args[])
{	
	matriks();
	
	return 0;
}