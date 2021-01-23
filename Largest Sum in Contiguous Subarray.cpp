#include<iostream>
using namespace std;
int main()
{
	int a[]={-2,-3,4,-1,-2,1,5,-3};
	int n=sizeof(a)/sizeof(a[0]);
	int large=0,sum;
	for(int i=0;i<n;i++)
	{
		sum=0;
		for(int j=i+1;j<n;j++)
		{
			sum+=a[j];
			if(sum+a[i]>large)
			{
				large=sum+a[i];
			}
		}
	}
	cout<<"largest sum  in the array="<<large;
}
