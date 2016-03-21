#include<iostream>
using namespace std;

void enterArray(int *, int);
void showArray(int *, int);
void shift(int *, int, int);
void mySort(int *, int);

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;
    if (a<0) a=0;
    int last = n-1;
    int * arr = new int[n];
    enterArray(arr, n);
    for(int i=0; i<=last; i++)
    {
        //cout << arr[i] << " > " << a << " " << (arr[i]>a) << " ";
        //cout << arr[i] << " < " << b << " " << (arr[i]<b) << endl;
        if(arr[i]>a && arr[i]<b)
        {
            shift(arr, n, i);
            last--;
            i--;
        }
    }
    mySort(arr+last+1, n-last-1);
    showArray(arr, n);
    return 0;
}

void enterArray(int * arr, int n)
{
    while(n)
    {
        cin >> *arr;
        arr++;
        n--;
    }
}

void showArray(int * arr, int n)
{
    while(n)
    {
        cout << *arr << " ";
        arr++;
        n--;
    }
    cout << endl;
}

void shift(int * arr, int n, int p)
{
    //cout << last;
    for(int i=p; i<n-1; i++)
    {
        swap(arr[i], arr[i+1]);
    }
}

void mySort(int * arr, int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
            if(arr[i]<arr[j]) swap(arr[i], arr[j]);
    }
}

