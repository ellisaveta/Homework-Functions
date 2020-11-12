#include <iostream>
using namespace std;
double Space(int, int, int, int);
int main()
{
	int x1, x2, y1, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << Space(x1, y1, x2, y2) << "\n";
	return 0;
}
double Space(int x1, int y1, int x2, int y2)
{
	return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
}