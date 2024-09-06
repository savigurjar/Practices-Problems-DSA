#include<iostream>
using namespace std;
int main()
{
	
	int n;
	cout<<"enter any number 1 to n or you can write 10 ";
	cin>>n;
    int sum = 0;
	cout<<"print sum of cube of first n natural number"<<endl;
	for(int i=1;i<=n;i++)
	{
		
		sum += i*i*i;
	}
		cout<<sum<<" ";
	return 0;
}
