//find the index of a specific element in an array.if element is not present return -1
#include<iostream>
#include<vector>
using namespace std;
int indexOfElement(int n,const vector<int>& arr)
{
	int index = -1;
	int ele ;
	cout<<"enter element wanna find ";
	cin>>ele;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==ele)
		{
			index = i;
		}
	}
	cout<<"element found at index : "<< index <<endl;
}
int main()
{
	int n;
	cout<<"enter size of array : ";
	cin>>n;
	
	vector<int>arr(10000);
	cout<<"enter elements in array : ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	indexOfElement(n,arr);
}
