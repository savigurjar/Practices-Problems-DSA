
#include<iostream>
#include<vector>
using namespace std;
void binarySearch(int n, vector<int>& arr,int v)
{
	int start = 0, end = n-1;
	int mid ,index = -1 ;
	 int target = v;
	 
	 while(start<=end)
	 {
	 	mid = start + (end-start)/2;
	 	if(arr[mid]==target)
	 	{
	 		index = mid;
	 		break;
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
	 
	 cout<<"element found at index  "<<index<<endl;
	
	
}
int main()
{
	int n;
	cout<<"enter size of array ";
	cin>>n;
	
	vector<int>arr(10000);
	cout<<"enter elements increasing order in array";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int v;
	cout<<"enter element you want to find ";
	cin>>v;
	
	binarySearch(n,arr,v);
    
	return 0;
}

