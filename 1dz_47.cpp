#include<iostream>
#include<cstring>
using namespace std;

bool isRepeatDigit(int);

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;
	int * arr = new int[n];
	cout << "Enter array: ";
	int amt = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (isRepeatDigit(arr[i])) amt++;
	}
	int * newArr = new int[amt];
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (isRepeatDigit(arr[i]))
		{
			newArr[j] = arr[i];
			j++;
		}
	}
	for (int i = 0; i < amt; i++)
	{
		cout << newArr[i] << " ";
	}
	//cout << isRepeatDigit(n) << endl;
	return 0;
}

bool isRepeatDigit(int n)
{
	char * str = new char[20];
	itoa(n, str, 10);
	int l = strlen(str);
	for (int i = 0; i < l; i++)
	{
		if (strchr(str + i + 1, str[i])) return false;
	}
	//cout << str << endl;
	delete[] str;
	return true;
}