#include <iostream>

using namespace std;

int nwd(int a, int b) // funkcja wykonana na podstawie https://www.matemaks.pl/algorytm-euklidesa.html
{
	return a % b == 0 ? b : nwd(b, a % b);
}

int nww(int a, int b) // funkcja wykonana na podstawie http://www.algorytm.edu.pl/algorytmy-maturalne/nww.html
{
	return (a * b) / nwd(a, b);
}

int* skrocUlamek(int licznik, int mianownik) // wskaŸnik, ¿eby mo¿na by³o zwróciæ tabele
{
	return new int[2]{ nww(licznik, mianownik) / mianownik, nww(licznik, mianownik) / licznik };
}

int main()
{
	int liczby[2]{};

	cout << "Podaj liczbe A: ";
	cin >> liczby[0];
	cout << "Podaj liczbe B: ";
	cin >> liczby[1];

	cout << "NWD(" << liczby[0] << ", " << liczby[1] << ") = " << nwd(liczby[0], liczby[1]) << "\n"
		<< "NWW(" << liczby[0] << ", " << liczby[1] << ") = " << nww(liczby[0], liczby[1]) << "\n" << endl;

	int licznik, mianownik;
	cout << "Podaj licznik ulamka: ";
	cin >> licznik;
	cout << "Podaj mianownik ulamka: ";
	cin >> mianownik;

	int* skroconyUlamek = skrocUlamek(licznik, mianownik); // tutaj te¿ wskaŸnik, ¿eby mo¿na by³o odebraæ tabele od funkcji skrocUlamek

	cout << "Ulamek w postaci skroconej:\nLicznik: " << skroconyUlamek[0] << "\nMianownik: " << skroconyUlamek[1] << endl;

	return 0;
}