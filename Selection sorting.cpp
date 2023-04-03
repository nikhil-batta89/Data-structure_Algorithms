// SELECTION SORT IN ASCENDING ORDER:-

#include<iostream>
using namespace std;

int main()
{
	int temp=0,min;
	int a[]={38,52,9,18,6,62,13};
	int len=sizeof(a)/sizeof(a[0]);
	
	for(int i=0;i<len;i++)
	{
		min=i;
		for(int j=i+1;j<len;j++)
		{
			if(a[j]<a[min])
			{
				min=j;	
			}
		
      	}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	
    }
	for(int i=0;i<len;i++)
	{
		cout<<"The Ascending order of selection sorting is : "<<a[i]<<endl;
	}
}
