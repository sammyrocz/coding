#include<bits/stdc++.h>
using namespace std;

int main(){

    int tc;
    cin>>tc;

    while(tc--){
        string s;
        cin>>s;

        if(s.length() == 5){
            cout<<3<<"\n";
        } else

        if( (s[0] == 'o' && s[1]=='n') || (s[0] == 'o' && s[2] == 'e') || (s[1] == 'n' && s[2] == 'e')){
            cout<<1<<"\n";
        }

        else cout<<2<<"\n";


    }


}