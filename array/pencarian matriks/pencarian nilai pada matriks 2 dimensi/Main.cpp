#include<iostream>

using namespace std;

void cariNilaiMatriks()
{
	int baris, kolom, nilaiYangDicari;
	bool pencarian = false;
	int arr[10][10];
	
	cout << "\t === Mencari nilai dalam matriks 2 dimensi ===" <<endl<<endl;
	
	cout << "jumlah baris : ";
	cin >> baris;
	
	cout << "jumlah kolom : ";
	cin >> kolom;
	
	cout << endl;
	for(int i = 0; i < baris; i++)
	{
		for(int j = 0; j < kolom; j++)
		{
			cout << "Baris ke["<< (i+1)<< "] Kolom ke[" << (j+1) <<"] : ";
			cin >> arr [i][j];
		}
		cout << endl;
	}
	
	for(int i = 0; i < baris; i++)
	{
		for(int j = 0; j < kolom; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	cout << "nilai yang dicari : ";
	cin >> nilaiYangDicari; 
	
	for(int k = 0; k < baris; k++)
	{
		for(int l = 0; l < kolom; l++)
		{
			if(nilaiYangDicari == arr[k][l])
			{
				cout << "[" << nilaiYangDicari <<"] di baris ke[" << (k+1) << "] kolom ke["<< (l+1) << "] "<<endl;
				pencarian = true;
			}
		}
	}
	if(pencarian == false)
	{
		cout << "[" << nilaiYangDicari << "] tidak ada dalam arr " << endl;
	}
	
}

int main(int argc, char args[])
{
	cariNilaiMatriks();	
}