#include <iostream>
using namespace std;
bool prime(int, int = 2);
int main()
{
	cout<<prime(31);
	return 0;
}
bool prime(int a, int i)
{	
	if (i == a) return true;
	if (a%i == 0) return false;
	prime(a, i + 1);
}

