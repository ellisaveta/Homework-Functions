#include <iostream>
using namespace std;
int Sum(int, int);
int main()
{
	int x, y;
	cin >> x >> y;
	cout << Sum(x, y) << "\n";
	return 0;
}
int Sum(int a, int b)
{
	return a + b;
}