#include<iostream>
#include<vector>
using namespace std;
void insertionSort(int n, vector<char>& arr)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i;j>0;j--)
		{
			if(arr[j]<arr[j-1])
			{
				swap(arr[j],arr[j-1]);
			}
		}
	}
}

int main()
{
	int n;
	cout<<"enter size of array ";
	cin>>n;
	
	vector<char>arr(10000);
	cout<<"enter elements in array ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	insertionSort(n,arr);
	cout<<"sorted array by using insertion sort increasing order of characters ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}

