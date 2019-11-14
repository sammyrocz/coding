#include<bits/stdc++.h>
using namespace std;

int main(){

    int tc;
    cin>>tc;

    while(tc--){

        int n;
        cin>>n;

        vector<int> A(n);

        for(int i = 0 ; i < n ;i++){
            cin>>A[i];
        }

        if(n<=1){
            cout<<0<<"\n";
        } else {

          sort(A.begin(),A.end());

          int mid = A.size()/2;

          long cost = 2*(A[n-1]-A[mid]) + 2*(A[mid] - A[0]);
          cout<<cost<<"\n";
        }
    }
}