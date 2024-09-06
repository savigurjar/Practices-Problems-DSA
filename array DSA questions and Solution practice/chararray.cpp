#include<iostream>
#include<vector>
using namespace std;
//create array of char types and store 'a' to 'z
int main()
{
	char arr[26];
	
	cout<<"a to z characters are : ";
	for(int i=0;i<26;i++)
	{
//		arr[i] = 'a'+i;
        arr[i] = 'A'+i;
        cout<<arr[i]<<" ";
	}
//	for(int i=0;i<26;i++)
//	{
//		cout<<arr[i]<<" ";
//	}
	return 0;
	
}
