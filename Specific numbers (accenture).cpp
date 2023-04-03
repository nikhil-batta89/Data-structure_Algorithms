// ACCENTURE EXAM:-

#include<iostream>
using namespace std;
int main()
{
	int m,n,count=0,num,a=0;
	cin>>m>>n;
	for(int i=m; i<=n;i++)
	{
		int temp=i;
	int	x= to_string(i).length();
	//	for(int temp=i; temp>0;)
		while(temp)
		{
			num= temp%10;
			if((num==1) || (num==4) || (num==9))
			{
				a++;
			}
			temp=temp/10;
		}
		if(a==x)
		{
			count++;
		}
		a=0;
	}
	cout<<count;
}
