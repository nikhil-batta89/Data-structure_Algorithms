// STRING SELECTION SORT IN ASCENDING ORDER:-

#include<iostream>
using namespace std;

int main()
{
	int temp=0,min,len;
	string a="anisha";
	len=a.length();
	
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
		cout<<"The Ascending order of selection sorting string is : "<<a[i]<<endl;
	}
}
