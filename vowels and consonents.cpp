#include<iostream>
using namespace std;

int main(){
	char ani[50];
	int vowels=0, consonents=0;
	cout<<"Enter a line of string : "<<endl;
	gets(ani);
	for(int i=0;i<ani[i];i++){
		if(ani[i]=='a' || ani[i]=='e' || ani[i]=='i' || ani[i]=='o' || ani[i]=='u' || ani[i]=='A' || ani[i]=='E' || ani[i]=='I' || ani[i]=='O' || ani[i]=='U'){
			++vowels;
		}
		else
		++consonents;
	}
	cout<<"The Total number of vowels is : "<<vowels<<endl;
	cout<<"The Total number of consonents is : "<<consonents<<endl;
	return 0;
	
}
