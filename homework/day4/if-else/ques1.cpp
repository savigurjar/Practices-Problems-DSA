#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter value of a and b";
	cin>>a>>b;
	
	if(a>b)
	{
		cout<<"a is greater";
	}
	else if(a == b)
	{
		return -1;
	}
	else
	{
		cout<<"b is greater";
	}
	return 0;
}
