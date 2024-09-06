#include<iostream>
#include<vector>
using namespace std;
int numberOfOcc(int n,vector<int>& arr, int v)
{
	int start=0,end=n-1;
    int first = -1,last = -1;
	int mid , target = v;
	
	//first
	while(start<=end)
	{
		mid = start+(end-start)/2;
		
		if(arr[mid]==target)
		{
		first = mid;
		end = mid -1;
		}
		
		else if(arr[mid]<target)
		{
			start = mid+1;
		}
		else
		{
			end = mid-1;
		}
	}
	
	//last
	start=0,end=n-1;
	while(start<=end)
	{
		mid = start+(end-start)/2;
		
		if(arr[mid]==target)
		{
		last = mid;
	    start = mid+1;
		}
		
		else if(arr[mid]<target)
		{
			start = mid+1;
		}
		else
		{
			end = mid-1;
		}
	}
	
//	number of occurance
if(first == -1 || last == -1)
{
	cout<<"element not found"<<endl;
	return 0;
}
else
{
	int occrance = last - first + 1;
	cout<<"number of occrance of target element in array "<<occrance<<endl;
}
}
int main()
{
	int n;
	cout<<"enter size of array ";
	cin>>n;
	
	vector<int>arr(10000);
	cout<<"enter elements in array";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int v;
	cout<<"enter element you want to number of occrance in sorted array";
	cin>>v;
	
	numberOfOcc(n,arr,v);
	
	return 0;
}
