#include<iostream>
#include<vector>
using namespace std;
int searchInsertPosition(int n, vector<int>& arr,int v)
{
	int start = 0, end = n-1;
	int index = n;
	int target = v, mid;
	while(start<=end)
	{
		mid = start+(end-start)/2;
		if(arr[mid]==target)
		{
//			return mid;
          index = mid;
		  break;        
		}
		else if(arr[mid]<target)
		{
			start = mid+1;
		}
		else
		{
			index = mid;
			end = mid-1;
		}
	}
	
	cout<<"position of given target in array if whether it is present or not "<<index<<endl;
}
int main()
{
	int n;
	cout<<"enter size of sorted array";
	cin>>n;
	
	vector<int>arr(10000);
	cout<<"enter element in array ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int v;
	cout<<"enter element you want to find ";
	cin>>v;
	
	searchInsertPosition(n,arr,v);
	
	return 0;
}
