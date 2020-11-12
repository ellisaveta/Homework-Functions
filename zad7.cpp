#include <iostream>
using namespace std;
int Power(int, int);
int main()
{
	int x, n;
	cin >> x >> n;
	cout << Power(x, n);
	return 0;
}
int Power(int a, int b)
{
	if (b == 1) return a;
	else return a * Power(a, b - 1);
}
