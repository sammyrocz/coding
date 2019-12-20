#include <bits/stdc++.h>
using namespace std;

long reverse(long no){
	long rev = 0;

	while(no!=0){
		rev = rev * 10 + no%10;
		no = no / 10;
	}

	return rev;
}


int main(){
	int tc;
	cin>>tc;
	long a,b,c;
	while(tc--){
		cin>>a>>b;
		cout<<reverse(reverse(a) + reverse(b))<<"\n";
	}
	return 0;
}