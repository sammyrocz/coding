#include<bits/stdc++.h>
using namespace std;


int solve(vector<pair<int,int>> src, vector<pair<int,int>> A, vector<pair<int,int>> B, vector<pair<int,int>> C){


	for(int )


}

int main(){
	

	int tc;
	cin>>tc;

	int x,y;
	int n,m,k;
	
	while(tc--){
		
		cin>>x>>y;
		cin>>n>>m>>k;
		pair<int,int> src;
		src.first = x;
		src.second = y;
		vector<pair<int,int>> A(n);
		vector<pair<int,int>> B(m);
		vector<pair<int,int>> C(k);
		
		for(int i = 0 ; i < n ; i=i+2){
			pair<int,int> inp;
			cin>>inp.first;
			cin>>inp.second;
			A.push_back(inp);
		}

		for(int i = 0 ; i < m ; i=i+2){
			pair<int,int> inp;
			cin>>inp.first;
			cin>>inp.second;
			B.push_back(inp);
		}

		for(int i = 0 ; i < k ; i=i+2){
			pair<int,int> inp;
			cin>>inp.first;
			cin>>inp.second;
			C.push_back(inp);
		}

		solve(src,A,B,C);
	}
}