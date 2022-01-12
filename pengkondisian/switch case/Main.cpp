#include<iostream>

using namespace std;

void checkHari()
{ 
	int angka;
	bool pilihan;
	char pilih;
	 
	cout << "Masukkan perhitungan hari berdasarkan angka : ";
	cin >> angka;
	
	switch(angka)
	{
		case 1:
			cout << "Hari minggu " <<endl;
		break;
		case 2:
			cout << "Hari senin" << endl;
		break;
		case 3:
			cout << "Hari senin" << endl;
		break;
		case 4:
			cout << "Hari senin" << endl;
		break;
		case 5:
			cout << "Hari senin" << endl;
		break;
		case 6:
			cout << "Hari senin" << endl;
		break;
		case 7:
			cout << "Hari senin" << endl;
		break;
		default:
			cout << "Tidak ada dalam kalender" << endl;
	}		
	cout << "ingin lanjut atau berhenti [1|0]: ";
	cin >> pilihan;
	if(pilihan == 1)
	{
		
	}
}

int main(int argc, char args[])
{
	cout << "\t === memperkenalkan menggunakan switch case ===" << endl;
	checkHari();
	return 0;
}