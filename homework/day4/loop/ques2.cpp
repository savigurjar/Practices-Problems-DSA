#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter any number 1 to .. n to print odd numbers ";
	cin>>n;
	
	for(int i=1;i<n;i++)
	{
	if(i%2 != 0)
	{
		cout<<i<<" ";
	    	 
	}
   }
   	return 0;
}
