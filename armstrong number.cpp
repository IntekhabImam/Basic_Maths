#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,t,sum = 0,r;
	cin>>n;
	
	t = n;
	
	while(n!=0){
		r = n%10;
		sum = sum + (r*r*r);
		n = n/10;
	}
	if(t == sum ){
		cout<<"num is armstrong"<<endl;
	}
	else{
		cout<<"num is not armstrong"<<endl;
	}
	return 0;
}
