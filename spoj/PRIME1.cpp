#include<bits/stdc++.h>
using namespace std;


bool isPrime(long no){

	if(no == 1)
		return false;

	for(long i = 2; i <=sqrt(no);i++){
		if(no % i == 0)
			return false;
	}

	return true;
}


int main(){

	int tc;
	cin>>tc;
	long m,n;
	while(tc-->0){

		cin>>m>>n;
		for(long i = m ; i <=n ; i++){
			if(isPrime(i)){
				cout<<i<<"\n";
			
			}
		}

		cout<<"\n";

	}

}