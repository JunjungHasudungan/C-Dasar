#include<iostream>

using namespace std;
// static variable & method
class User
{
	public:
		static string nama;	

	 static void perkenalan(string nama)
	{
		User::nama = nama;
	}

	string great()
	{
		return User::nama;
	}
	// static juga dapat digunakan pada method
	 static void greeting()
	 {	 	
	 	User user;
 		cout << "nama :" << user.great()<< endl;
	 }
};
// inisilasisai static variable diluar class dan beri nilai
string User::nama = "Test static variable & method";

int main(int argc, char args[])
{	
	User::perkenalan("Junjung Hasudungan Sitorus");
	User::greeting();
}