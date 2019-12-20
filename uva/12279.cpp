#include<bits/stdc++.h>
using namespace std;

int main(){


    int inp,n;
    int z;
    int j = 0;
    
    

    cin>>n;
    while(n != 0){
    
        z = 0;

        for(int i = 0 ; i < n ; i++){
            cin>>inp;
            if(inp == 0)
            z++;
        }

        cout<<"Case "<<(j+1)<<": "<<(n-2*z)<<"\n";
        cin>>n;
        j++;
        
    }
    
    
}