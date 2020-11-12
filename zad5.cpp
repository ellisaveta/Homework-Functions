#include <iostream>
using namespace std;
int Reversed(int, int = 0);
int main()
{
	int a, b;
	cin >> a >> b;
	while (a <= b)
	{
		if(a == Reversed(a)) cout << a << "\n";
		a++;
	}
	return 0;
}
int Reversed(int k, int reversed)
{
	if (k == 0) return reversed;
	reversed *= 10;
	reversed += k % 10;
	Reversed(k / 10, reversed);
}