#include<iostream>
#include<vector>
using namespace std;
int selectionSort(int n, vector<int>& arr)
{
for(int i=n-1;i>0;i--)
{
	int index = 0;
	for(int j=1;j<=i;j++)
	{
		if(arr[j]>arr[index])
		{
			index = j;
		}
	}
	swap(arr[index],arr[i]);
	}
}
int main()
{
	int n;
	cout<<"enter size of array ";
	cin>>n;
	
	vector<int>arr(1000);
	cout<<"enter element in array ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	selectionSort(n,arr);
	cout<<"sorted array by using selection sort increasing order ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
