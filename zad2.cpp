#include <iostream>
using namespace std;
void mnoj(int, int = 2);
bool prime(int, int = 2);
int main()
{
	int m;
	cin >> m;
	mnoj(m);
	return 0;
}
void mnoj(int a, int i)
{
	if (i == a+1) return;
	if (a%i == 0 && prime(i)) cout << i << "\n";
	mnoj(a, i + 1);
}
bool prime(int a, int k)
{
	if (k == a) return true;
	if (a%k == 0) return false;
	prime(a, k + 1);
}

