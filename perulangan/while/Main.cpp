#include<iostream>

using namespace std;

void loopingWhile()
{
	string arr[10];
	int jumlah;
	int i = 0;
	int j = 0;
	
	cout << "jumlah looping : ";
	cin >> jumlah;
	
	while(i < jumlah)
	{
		cout << "[" << (i+1) <<"]: " ;
		cin >> arr[i];
		i++;
	}
	
	cout << endl;
	
	while(j < jumlah)
	{
		cout << "[" << arr[j] <<"]" endl; 
		j++;
	}
}

int main(int argc, char args[])
{
	int jumlah;
	int index = 0;
	string kata;

//	loopingWhile();	

	cout << "jumlah looping : ";
	cin >> jumlah;
	
	cout << "kata yang akan dilooping : ";
	cin >> kata;
	
	while(index < jumlah)
	{
		cout << "[" << (index+1) <<"]." << kata << endl;
		index++;
	}
	
	return 0;
}