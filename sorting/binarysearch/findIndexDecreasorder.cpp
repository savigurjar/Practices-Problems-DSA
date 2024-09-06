#include<iostream>
#include<vector>
using namespace std;
int findIndex(int n,vector<int>&arr,int key)
{
	int start=0,end=n-1,mid,index=-1;
	while(start<=end)
	{
		mid = start+(end-start)/2;
		
		if(arr[mid]==key)
		{
	      index = mid;
	      break;
		}
		else if(arr[mid]<key)
		{
		end = mid-1; //adjust for decreasing order
			
		}
		else
		{
		start = mid+1;
		}
	}
	
	cout<<"key present at index "<<index<<endl;
}
int main()
{
	int n;
	cout<<"enter size of array";
	cin>>n;
	
	vector<int>arr(10000);
	cout<<"enter element in array in decreasing order";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int key;
	cout<<"enter element you want to find";
	cin>>key;
	
	findIndex(n,arr,key);
	
	return 0;
	
}
