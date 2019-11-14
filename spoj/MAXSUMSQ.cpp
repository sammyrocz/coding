#include<bits/stdc++.h>
using namespace std;



void solve(int A[], int n){

	int res  = A[0];
	
	int dp[n];
	int count[n];
	
	dp[0] = A[0];
	count[0] = 1;
	
	for(int i = 1 ; i < n ; i++){
		
		int temp = dp[i-1] + A[i];

		if(temp == A[i]){
			dp[i] = temp;
			count[i] = count[i-1] + 1;
			
		} else {

			if(A[i] > temp){
				dp[i] = A[i];
				count[i] = 1;
			} else {
				dp[i] = temp;
				count[i] = count[i-1];
			}
		}

		res = max(res,dp[i]);

	}

	
	long long ans = 0;
	for(int i = 0 ; i < n; i++){
		if(dp[i] == res){
			ans += count[i];
		}
	}

	

	printf("%d %lld\n",res,ans);
}

int main(){


	   int t,n;
   scanf("%d",&t);
   while(t--)
   {
      scanf("%d",&n);
      int A[n];
      for(int i=0;i<n ; ++i)
         scanf("%d",&A[i]);
      solve(A,n);
   }
   return 0;
	


}