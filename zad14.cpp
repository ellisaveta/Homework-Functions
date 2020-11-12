#include <iostream>
using namespace std;
int HowManyEqual(int[], int);
int main()
{
	int n;
	cin >> n;
	int arr[50];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << HowManyEqual(arr, n) << "\n";
	return 0;
}
int HowManyEqual(int arr[], int n)
{
	int count = 0;
	bool flag = true;
	for (int i = 0; i < n-1 && flag; i++)
	{
		if (arr[i] == arr[i + 1]) count = 1;
		while (arr[i] == arr[i + 1])
		{
			count += 1;
			i++;
			if (arr[i] != arr[i + 1]) flag = false;
		}
	}
	return count;
}