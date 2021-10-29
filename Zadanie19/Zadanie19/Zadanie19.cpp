#include <iostream>

using namespace std;

int main()
{
	int x, suma = 0;
	cout << "Aby zatrzymac podawanie liczb, podaj dowolny tekst zamiast liczby" << "\n\n";

	while (cin.good())
	{
		cout << "Podaj liczbe: ";
		cin >> x;

		if (cin.good() && x % 7 == 0)
			suma += x;
	}

	cout << "Suma podanych liczb podzielnych przez 7: " << suma << endl;
	return 0;
}