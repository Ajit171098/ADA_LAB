#include <iostream>
#include <math.h>

using namespace std;

	int squareroot(int a)
	{
		int first=0,last=a,middle;
		int ans;
		
		while(first<=last)
		{
			middle=(first+last)/2;
			if((middle*middle)==a)
			{
				return middle;
			}
			else if((middle*middle)<a)
			{
				first=middle+1;
				ans=middle;
			}
				
			else
				last=middle-1;
		}
		return ans;
}
int main()
{
	int x;
	cout<<"enter the no no";
	cin>>x;
	int s=squareroot(x);
	cout<<"number :"<<x<<endl;
	cout<<"square root:"<<s<<"\n";
	return 0;
}
