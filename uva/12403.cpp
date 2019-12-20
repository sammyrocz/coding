#include<bits/stdc++.h>
using namespace std;

int main(){

    int tc;
    cin>>tc;

    long long int bal = 0;

    while(tc--){
        string inp;
        int amnt;
        cin>>inp;
         if(inp[0] == 'd'){
            cin>>amnt;
            bal+=amnt;
        } else {
            cout<<bal<<"\n";
        }
    }


}