//fibonacci series
#include<iostream>
#include<vector>
using namespace std;
int fibonacciSeries(int n, vector<int>& arr)
{
	arr[0] = 0;
	arr[1] = 1;
	for(int i=2;i<n;i++)
	{
		arr[i] = arr[i-1]+arr[i-2];
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int n;
	cout<<"enter size of array : ";
	cin>>n;
	
	vector<int>arr(10000);
	
	fibonacciSeries(n,arr);
}
