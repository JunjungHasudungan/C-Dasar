#include<iostream>

using namespace std;

void loopingFor()
{
	string kata;
	int jumlah;
	
	cout << "jumlah looping : ";
	cin >> jumlah;

	cout << "kata yang ingin dilooping : ";
	cin >> kata;
	for(int i = 0; i < jumlah; i++)
	{
		cout << "[" << (i+1) << "]. " << kata << endl;	
	}
}

int main(int argc, char args[])
{
	loopingFor();
	
	return 0;
	
}