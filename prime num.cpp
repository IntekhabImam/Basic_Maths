#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	bool isprime = true;
	
	if(n<2){
		isprime = false;
	}
	else{
		for(int i = 2; i<n ; i++){
			if(n % i ==0){
				isprime = false;
				break;
			}
		}
	}
	string result = isprime?"prime": " not prime ";
	cout<<"The num "<<n <<"is "<<result;
	return 0;
}
