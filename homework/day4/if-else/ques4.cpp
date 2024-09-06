#include<iostream>
using namespace std;

int main()
{
	int age;
	cout<<"enter age for check if they qualify for a discounted ticket price";
	cin>>age;
	
	if(age<12 || age>65)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
	return 0;
}
