#include <iostream>

using namespace std;

bool liczbaPierwsza(int a, int b = 2)
{
	return a != 1 && a != 0 ? b == a ? true : a % b == 0 ? false : liczbaPierwsza(a, b + 1) : false;
}

int main()
{
	cout << liczbaPierwsza(4);
	return 0;
}