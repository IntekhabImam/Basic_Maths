#include<iostream>
using namespace std;
int main(){
	int n,temp,digit,sum = 0;
	cin>>n;
	temp  = n;
	
	while(n>0){
		digit = n%10;
		sum = (sum *10 )+digit;
		n = n/10;
	}
	if(temp== sum ){
		cout<<"n is plaindrome"<<endl;
	}
	else{
		cout<<"n is not plaindrome"<<endl;
	}
	return 0;
}
