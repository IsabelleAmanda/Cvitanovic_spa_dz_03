#include <iostream>
#include <chrono>
#include <thread>
#include <Windows.h>
using namespace std;

const int REDAK = 20;
const int STUPAC = 40;

struct Tocka
{
	int x, y;
};

int main()
{
	bool krivi_unos = true;

	Tocka A;
	Tocka B;

	do
	{
		cout << "A redaka: ";
		cin >> A.y;
		cout << "A stupaca: ";
		cin >> A.x;
		cout << "B redaka: ";
		cin >> B.y;
		cout << "B stupaca: ";
		cin >> B.x;
		if (A.y > 20 || A.y < 1 || A.x>40 || A.x < 1 || B.y>20 || B.y < 1 || B.x>40 || B.x < 1)
		{
			cout << "Greska, pogresan unos!" << endl;
			krivi_unos = true;
		}
		else
		{
			krivi_unos = false;
		}
	} while (krivi_unos);

	//char x = 'x';

	Tocka D;
	D.x = A.x;
	D.y = A.y;

	
	while ((D.x != B.x) || (D.y != B.y))
	{
		for (int i = 1; i <= REDAK; i++)
		{
			for (int j = 1; j <= STUPAC; j++)
			{
				if (i == A.y && j == A.x) {
					cout << 'A';
				}
				else if (i == B.y && j == B.x) {
					cout << 'B';
				}
				//______
				else if (i==D.y&&j==D.x)
				{
					cout << 'x';
				}
				//______
				else{
					cout << '-';
				}
			}
			cout << endl;
		}
		
		if (D.x != B.x) {
			if (D.x > B.x) D.x--;
			else D.x++;			
		}
		else {
			if (D.y > B.y) D.y--;
			else D.y++;
		}

		Sleep(100);
		system("cls");
	}

	return 0;
}