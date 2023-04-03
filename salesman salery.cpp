#include<iostream>
using namespace std;

int main(){
	string org,name;
	float sale,totalsale;
	cout<<"Enter the name of Organisation : ";
	cin>>org;
	cout<<"Enter your name : ";
	cin>>name;
	cout<<"Enter your salery : ";
	if(sale>=1 && sale<=2000){
		totalsale=(sale*0.05)+45000;
		cout<<totalsale;
	}
	else if(sale>=2001 && sale<=5000){
		totalsale=(sale*0.07)+45000;
		cout<<totalsale;
	}
	else if(sale<=5001 && sale>=10000){
		totalsale=(sale*0.1)+45000;
		cout<<totalsale;
	}
	else if(sale<=10001 && sale>=15000){
		totalsale=(sale*0.12)+45000;
		cout<<totalsale;
	}
	else if(sale>=15000){
		totalsale=(sale*0.15)+45000;
		cout<<totalsale;	
	}	
}
