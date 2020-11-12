#include <iostream>
using namespace std;
void Swap(int, int);
int main()
{
	int x, y;
	cin >> x >> y;
	Swap(x, y);
	return 0;
}
void Swap(int a, int b)
{
	int c = a;
	a = b;
	b = c;
	cout << a << " " << b << "\n";
}
