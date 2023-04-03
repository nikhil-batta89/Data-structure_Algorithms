#include<iostream>
using namespace std;

int main(){
	int a,m,rs;
	cout<<"Enter quantity of apples : "<<endl;
	cin>>a;
	cout<<"Enter quantity of mangoes : "<<endl;
	cin>>m;
	cout<<"Enter amount of rupees : "<<endl;
	cin>>rs;
	
	if(a==m)
	cout<<"Total rupees is : "<<rs;
	
	else if(a>m)
	cout<<"Remaining rupees is : "<<(rs-(a-m))<<endl;
	
	else if(a>m)
	cout<<"Remaining rupees is : "<<(rs+(a-m))<<endl;
	
	return 0;
}
