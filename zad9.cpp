#include <iostream>
using namespace std;
bool ISprime(int, int = 2);
int HowManyPrime(int);
int main()
{
	int n;
	cin >> n;
	cout << HowManyPrime(n) << "\n";
	return 0;
}
int HowManyPrime(int n) 
{
	if (n == 0) return 0;
	int a;
	cin >> a;
	while (a < 0) cin >> a;
	if (ISprime(a)) return 1 + HowManyPrime(n - 1);
	else return HowManyPrime(n - 1);
}
bool ISprime(int a, int i)
{
	if (i >= a) return true;
	if (a%i == 0) return false;
	ISprime(a, i + 1);
}
