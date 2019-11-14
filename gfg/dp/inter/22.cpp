#include<bits/stdc++.h>
using namespace std;


bool solve(vector<int> A){


	int n = A.size();
		if(n <=1)
		return false;
	

	int sum = 0;
	for(int i = 0 ; i < A.size(); i++){
		sum += A[i];
	}

	if(sum % 2 !=0)
		return false;


	vector<vector<bool>> dp(n+1,vector<bool>(sum+1,false));

	for(int i = 0; i <=n; i++){
		dp[i][0] = true;
	}


	for(int i = 1 ; i <=n ; i++){
		for(int j = 1; j <= sum ; j++){

			if(A[i-1] > j){
				dp[i][j]=dp[i-1][j];
			} else {
				dp[i][j] = dp[i-1][j] || dp[i-1][j-A[i-1]];
			}

		
		}
	}

	

	return dp[n][sum/2];
	
}


int main(){

	int n;
	cin>>n;
	vector<int> A(n);

	for(int i = 0 ; i < n ; i++){
		cin>>A[i];
	}
	
	cout<<solve(A)<<"\n";
	
	return 0;
}