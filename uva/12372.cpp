#include<bits/stdc++.h>
using namespace std;

int main(){


    int tc;
    cin>>tc;
    int x,y,z;
    int c = 1;
    while(tc--){
        cin>>x>>y>>z;
        cout<<"Case "<<c<<": ";
        if(x > 20 || y > 20 || z > 20){
            cout<<"bad\n";
        }
        else cout<<"good\n";
        c++;
    }
}