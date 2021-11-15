#include <iostream>
#include <cmath>
#include <map>

using namespace std;

bool pierwsza(int n) {

	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0) return false;

	return true;
}

int main()
{
	int n;
	cout << "Podaj liczbe n: ";
	cin >> n;

	for (int i = 0; i <= n; i++)
	{
		if (pierwsza(i) && pierwsza(i + 2))
			cout << i << ", " << i + 2 << "\n";
	}

	return 0;
}