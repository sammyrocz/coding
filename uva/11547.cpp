#include<bits/stdc++.h>
using namespace std;

int main(){

	int tc;

	cin>>tc;
	long n;

	while(tc--){
		cin>>n;
		n = n * 567;
		n = n / 9;
		n = n + 7492;
		n = n  * 235;
		n = n / 47;
		n = n - 498;
		//cout<<n<<"\n";
		if( n >=0 && n<=9){
			cout<<"0\n";
		} 

		else if(n <=0 && n >= -9){
			cout<<"0\n";
		}
		else {
			string s = to_string(n);
			int len = s.length();
			cout<<s[len-2]<<"\n";
		}
	}

}