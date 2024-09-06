#include <iostream>
#include<vector>
using namespace std;
int thirdLarge(int n, const vector<int>& arr)
{
	int fLarge = INT_MIN, sLarge = INT_MIN , tLarge = INT_MIN;
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]>fLarge)
		{
			tLarge = sLarge;
			sLarge = fLarge;
			fLarge = arr[i]; 
		}
		else if(arr[i]>sLarge && arr[i] != fLarge)
		{
			tLarge = sLarge;
			sLarge = arr[i];
		}
		else if(arr[i]>tLarge && arr[i] != fLarge && arr[i] != sLarge)
		{
			tLarge = arr[i];
		}
	}
	return tLarge;
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
	if(thirdLarge(n,arr))
	{
		cout<<"third max element in array : "<<thirdLarge(n,arr)<<endl;
	}
	else
	{
		cout<<"third max is not present";
	}
	return 0;
}
