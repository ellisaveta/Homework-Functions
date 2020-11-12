#include <iostream>
using namespace std;
int Factoriel(int, int = 1);
int main()
{
	int a;
	cin >> a;
	cout << Factoriel(a)<<"\n";
	return 0;
}
int Factoriel(int k, int total)
{
	if (k == 1) return total;
	total *= k;
	Factoriel(k - 1, total);
}
