#include<iostream>
#include<vector>
using namespace std;
void rotateArraybyOne(int n, vector<int>& arr)
{
	int last = arr[n-1];
	for(int i=n-2;i>=0;i--)
	{
		arr[i+1]=arr[i];
	}
	 arr[0] = last;			
}
int main()
{
		int n;
	cout<<"enter size of array ";
	cin>>n;
	
	vector<int>arr(10000);
	cout<<"enter element in array ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	rotateArraybyOne(n,arr);
	cout<<"rotate array by last element ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
	
}
