#include<bits/stdc++.h>
using namespace std;

int main(){

    string inp;
    cin>>inp;

    while(inp!="*"){
        if(inp == "Hajj"){
            cout<<"Hajj-e-Akbar\n";
        } else {
            cout<<"Hajj-e-Asghar\n";
        }
        cin>>inp;
    }
}