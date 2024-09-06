#include<iostream>
#include<vector>
using namespace std;
//square root of x
int squareRootOfx( int v)
{
	if(v<2)
	{
		return v;
	}
	int start = 0 , end = v;
	long long ans,mid;
	while(start<=end)
	{
		mid = start+(end-start)/2;
		if(mid*mid == v)
		{
			ans = mid;
			break;
		}
		else if(mid*mid<v)
		{
			ans = mid;
			start = mid+1;
		}
		else 
		{
			end = mid-1;
		}
	}
return ans;
}
int main()
{
	
	
	int v;
	cout<<"enter element you want to find square root in sorted array";
	cin>>v;
	
 int result = squareRootOfx(v);
    if (result == -1) {
        cout << "Square root of negative numbers is not defined in real numbers." << endl;
    } else {
        cout << "Square root of the given element (floor value if not a perfect square) is: " << result << endl;
    }
	
	return 0;
	
	
}
