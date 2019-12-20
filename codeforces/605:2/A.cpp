#include<bits/stdc++.h>
using namespace std;

int main(){

	int tc;
	cin>>tc;
	string inp;
	while(tc--){
		cin>>inp;
		int n = inp.length();
		string s;
		s = inp.substr(n-2,2);
		if(s == "po"){
			cout<<"FILIPINO\n";
			continue;
		}

		s = inp.substr(n-4,4);

		if(s == "desu" || s == "masu"){
			cout<<"JAPANESE\n";
			continue;
		}

		s = inp.substr(n-5,5);

		if(s == "mnida"){
			cout<<"KOREAN\n";
		}

	}
}