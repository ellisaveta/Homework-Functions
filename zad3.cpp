#include <iostream>
#include <cmath>
using namespace std;
bool prime(int, int = 2);
void bliz(int, int);
int main()
{
	int a, b;
	cin >> a>> b;
	bliz(a, b);
	return 0;
}
void bliz(int x, int y)
{
	int a = x;
	int b = x + 2;
	if (a == y + 1 || b==y+1) return;
	if (prime(a) && prime(b) && (abs(a - b) == 2))
	{
		cout << a << " " << b;
		return;
	}
	bliz(x + 1, y);
}
bool prime(int a, int i)
{
	if (i == a) return true;
	if (a%i == 0) return false;
	prime(a, i + 1);
}
