#include <iostream>
#include<vector>
using namespace std;
int secondLarge(int n, const vector<int>& arr)
{
	int maxF = INT_MIN;
	int secondmax = INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>maxF)
		{
			maxF = arr[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		if(maxF!=arr[i])
		{
			secondmax = max(secondmax,arr[i]);
		}
	}
	return secondmax;
}
int main()
{
	int n;
	cout<<"enetr size : ";
	cin>>n;
	vector<int>arr(10000);
	cout<<"enter element of array : ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int secondmax = secondLarge(n,arr);
	if(secondmax)
	{
		cout<<"second large elements : "<<secondmax<<endl;
	}
    else 
    {
    	cout<<"second large is not present";
	}
	return 0;
}
