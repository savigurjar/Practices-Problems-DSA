#include <iostream>
#include<vector>
using namespace std;
int findMin(int n, const vector<int>& arr)
{
	int min = INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<min)
		{
			min = arr[i];
		}
	}
	cout<<"min element in array : "<<min<<endl;
}
int main()
{
	int n;
	cout<<"enter size of array : ";
	cin>>n;
	
	vector<int>arr(10000);
	cout<<"enter element in array : ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	findMin(n,arr);
	return 0;
	
}
