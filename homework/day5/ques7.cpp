#include<iostream>
using namespace std;

int main()
{
	cout<<"fibonacci series"<<endl;
	int count = 0;
	int n;
	cout<<"enter any number";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		count += i;
		cout<<count<<" ";
	}
	return 0;
}
