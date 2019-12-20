#include<bits/stdc++.h>
using namespace std;


void solve(string A, int n){

	int l = 1;
	int len = A.length();
	while(l < n){

		len = A.length();
		string temp = A.substr(l,len - l);
		A = A.substr(0,l);
		int times = A[l-1] - '0';
		int i = 0;
		while(i < times){
			A +=temp;
		   i++;
		}

		l++;
	}

	int ans = A.length();

	cout<<ans<<"\n";


}


int main(){


	int tc;
	cin>>tc;
	string inp;
	int n;
	while(tc--){
		cin>>n;
		cin>>inp;
		solve(inp,n);
	}


}