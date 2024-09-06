#include <iostream>
#include<vector>
using namespace std;
int findMax(int n, const vector<int>& arr)
{
	int max = INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
	}
	cout<<"max element in array : "<<max<<endl;
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
	findMax(n,arr);
	return 0;
	
}

