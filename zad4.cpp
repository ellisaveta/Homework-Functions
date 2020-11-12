#include <iostream>
using namespace std;
int Reversed(int, int=0);
int main()
{
	int a;
	cin >> a;
	if (a == Reversed(a)) cout << "yes\n";
	else cout << "no\n";
	return 0;
}
int Reversed(int k, int reversed)
{
	if (k == 0) return reversed;
	reversed *= 10;
	reversed += k % 10;
	Reversed(k / 10, reversed);
}
