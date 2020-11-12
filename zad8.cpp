#include <iostream>
using namespace std;
double ArithmeticMean(int, int = 0);
int main()
{
	int n;
	cin >> n;
	cout << ArithmeticMean(n) << "\n";
	return 0;
}
double ArithmeticMean(int n, int i)
{
	if (i == n) return 0;
	double k;
	cin >> k;
	return (k / n)+ArithmeticMean(n, i + 1);
}
