#include <iostream>
#include <string>

using namespace std;

int suma(int liczba)
{
	int suma = 0;

	for (char item : to_string(liczba))
	{
		int cyfra = item - 48;
		if (cyfra % 2 != 0)
			suma += cyfra;
	}

	return suma;
}

int main()
{
	cout << suma(986713);
	return 0;
}