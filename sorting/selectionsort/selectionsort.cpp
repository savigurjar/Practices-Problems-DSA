#include<iostream>
#include<vector>
using namespace std;
int selectionSort(int n,vector<int>& arr)
{

for(int i=0;i<n-1;i++)
{
	int index = i;
	for(int j=i+1;j<n;j++)
	{
		if(arr[j]<arr[index])
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
	
	vector<int>arr(10000);
	cout<<"enter element in array ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	selectionSort(n,arr);
	cout<<"sorted array by using selection sort in increasing order ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}


	return 0;
	
}

