
#include<iostream>
#include<vector>
using namespace std;
void insertionSort(int n, vector<int>& arr)
{
	for(int i=n-1;i>=0;i--)
	{
		for(int j=0;j<i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
		}
	}
}
int main()
{
	int n;
	cout<<"enter size of array ";
	cin>>n;
	
	vector<int>arr(10000);
	cout<<"enter elements in array ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	insertionSort(n,arr);
	cout<<"sorted array by using insertion sort ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}

