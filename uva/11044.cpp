#include<bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    cin>>cases;

    while(cases--){

        long n,m;
        cin>>n>>m;

        n = n - 2;
        m = m - 2;

        long x = ceil((float)n/(float)3);
        long y = ceil((float)m/(float)3);

        long res = x * y;
        cout<<res<<"\n";
    }
}