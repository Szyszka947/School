#include <iostream>

using namespace std;

int main()
{
	int x;

	do
	{
		cout << "Podaj liczbe dodatnia: ";
		cin >> x;
	} while (x <= 0);

	return 0;
}