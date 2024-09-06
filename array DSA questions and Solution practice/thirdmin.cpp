#include <iostream>
#include<vector>
using namespace std;
int thirdMin(int n, const vector<int>& arr)
{
	int fMin = INT_MAX , sMin = INT_MAX , tMin = INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<fMin)
		{
			tMin = sMin;
			sMin = fMin;
			fMin = arr[i];
		}
		else if(arr[i]<sMin && arr[i] != fMin)
		{
			tMin = sMin;
			sMin = arr[i];
		}
		else if(arr[i] != fMin && arr[i] != sMin)
		{
			tMin = min(tMin,arr[i]);
		}
	
	}
	return tMin;
	
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
	if(thirdMin(n,arr))
	{
		cout<<"third min "<<thirdMin(n,arr)<<endl;
	}
	else
	{
		cout<<"third min is not present"<<endl;
	}
	return 0;
}
