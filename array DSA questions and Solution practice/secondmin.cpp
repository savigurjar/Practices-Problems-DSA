#include <iostream>
#include<vector>
using namespace std;
int secondMin(int n, vector<int>& arr)
{
	int firstMin = INT_MAX;
	int sMin = INT_MIN;
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]<firstMin)
		{
			sMin = firstMin;
			firstMin = arr[i];
		}
		else if(arr[i]<sMin && arr[i]!= firstMin)
		{
			sMin = arr[i];
		}
	}
	return sMin;
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
	if(secondMin(n,arr))
	{
		cout<<"second minimum element is : "<<secondMin(n,arr)<<endl;
	}
	else
	{
		cout<<"secondmin is not present";
	}
	return 0;
}
