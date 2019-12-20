#include<bits/stdc++.h>
using namespace std;

int main(){

	int tc;
	cin>>tc;

	int i = 1;
	while(tc--){
		vector<int> A(3);
		cin>>A[0]>>A[1]>>A[2];
		sort(A.begin(),A.end());

		cout<<"Case "<<i++<<":"<<" "<<A[1]<<"\n";
	}

}