#include<iostream>
using namespace std;

int main(){
	int n,digit,reverse= 0 ;
	cin>>n;
	
	while(n!=0){
		digit = n % 10;
		
		//if n is highest or lower than n; then we use this
//		if((n>INT_MAX)||(n< INT_MIN)){
//			return 0;
//		}

		reverse = ( reverse*10) + digit;
		n = n/10 ;
		
	}
	cout<<reverse;
	return 0;
}
