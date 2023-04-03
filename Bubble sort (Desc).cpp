// BUBBLE SORT IN DESCENDING ORDER:-

#include<iostream>
using namespace std;

int main()
{
	int temp;
	int a[]={39,15,29,12,5};
	int len=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<len;i++)
	{	 
		for(int j=1;j<len;j++)
		{
			if(a[j]>a[j-1])
			{
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;	
			}
		}	
	}
	for(int i=0;i<len;i++)
	{
		cout<<"The Descending Number is : "<<a[i]<<endl;
	}
	return 0;
}
