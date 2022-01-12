#include<iostream>

using namespace std;

// pencarian nilai dalam arr 

void cariNilaiArr()
{
	int jumlah, nilaiYangDicari;
	int arr[10];
	bool pencarian = false;
	
	cout << "\t === Mencari nilai dalam arr === " << endl;
	cout << "jumlah nilai arr : ";
	cin >> jumlah;
	
	for(int i = 0; i < jumlah; i++)
	{	
		cout << "[" <<(i+1) << "] = ";
		cin >> arr[i];
	}
	cout << endl;
	
	for(int i = 0; i < jumlah; i++)
	{	
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "nilai yang dicari dalam arr : ";
	cin >> nilaiYangDicari; 
	
	for(int j = 0; j < jumlah; j++)
	{
		if(nilaiYangDicari == arr[j])
		{
			cout << "[" << nilaiYangDicari <<"] terletak di indeks [" << j << "]"<<endl;
			
			pencarian = true;
		}
	}
	if(pencarian == false)
	{
		cout <<"["<< nilaiYangDicari<<"] tidak ada.." <<endl;
	}
}

int main(int argc, char args[])
{
	cariNilaiArr();
}