#include<bits/stdc++.h>
using namespace std;

void countval( int &l,string &inp, char ch){
	l = 0;
	for(int i =0 ; i < inp.length();i++){
		if(inp[i] == ch)
			l++;
	}
}


int main(){

	int tc;
	int l,r,u,d;
	cin>>tc;
	while(tc--){
		string inp;
		cin>>inp;
		countval(l,inp,'L');
		countval(r,inp,'R');
		countval(u,inp,'U');
		countval(d,inp,'D');

		int left = min(l,r);
		int up = min(u,d);
		//cout<<"question: "<<inp<<"\n";

		if(left == 0 && up == 0){
			cout<<"0\n";
			continue;
		}

		if(up == 0){
			cout<<"2\n";
			cout<<"LR\n";
			continue;
		} 

		if(left == 0){
			cout<<"2\n";
			cout<<"UD\n";
			continue;
		}

		int move = 2*left + 2*up;
		cout<<move<<"\n";
		
		for(int i =0; i < left; i++){
			cout<<"L";
		}

		for(int i = 0 ; i < up; i++){
			cout<<"U";
		}

		for(int i =0; i < left; i++){
			cout<<"R";
		}

		for(int i = 0 ; i < up; i++){
			cout<<"D";
		}
		cout<<"\n";

	}

}