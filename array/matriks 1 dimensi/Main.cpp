#include <iostream>
using namespace std;

// matriks 1 dimensi dengan user input

void matriks()
{
	int jumlah;
	int nilai[10];
	
	cout << "\t memahami matriks 1 dimensi dengan user input" << endl;
	cout << "jumlah matriks : ";
	cin >> jumlah;
	
	for(int i = 0; i < jumlah; i++)
	{
		cout << "nilai [" << (i+1) <<"] = ";
		cin >> nilai[i];
	}	
	
	cout << "nilai pada matriks 1 dimensi " <<endl;
	
	for(int j = 0; j < jumlah; j++)
	{
 		cout << "nilai [" << (j+1) <<"] = " << nilai[j] <<endl;		
	}
}

int main()
{
//    int bilangan[3][4]={ {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
//   for (int a=0;a<3;a++ ){
//      for (int b=0;b<4;b++){
//        cout << "Pada index ke-" << a << "," << b << " adalah " << bilangan[a][b] << endl;
//    }
//}
    matriks();
    
	return 0;
}
 
 
