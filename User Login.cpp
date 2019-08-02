#include<iostream>
#include<string>
using namespace std;
int main()
{
	char num;
	string name;
	int pass;
	string name2;
	int pass2;
	do
	{
		cout << "__________________________________" << endl;
		cout << "///////////////Menu///////////////" << endl;
		cout << "1. Register" << endl;
		cout << "2. login" << endl;
		cout << "Q. Exit Program" << endl;
		cout << "__________________________________" << endl;
		cout << "Enter Menu : ";
		cin >> num;
		if (num == '1')
		{
			cout << "***************Register***************" << endl;
			cout << "Input Username : ";
			cin >> name;
			cout << "Input Password : ";
			cin >> pass;
		}
		else if (num == '2')
		{
			cout << "***************Login***************" << endl;
			cout << "Input Username : ";
			cin >> name2;
			cout << "Input Password : ";
			cin >> pass2;
			if (name != name2 || pass != pass2)
			{
				do
				{
					cout << "Username or Password incorrect. Please try again!!!" << endl;
					cout << "***************Login***************" << endl;
					cout << "Input Username : ";
					cin >> name;
					cout << "Input Password : ";
					cin >> pass;
				} 
				while (name == name2 || pass == pass2);
				
			}
			else
			{
				cout << "User or Password correct ^___^" << endl;
			}
		}
		else if (num == 'Q')
		{
			cout << "Exit Program........" << endl;
		}
	} while (num != 'Q');
}