#include<bits/stdc++.h>
using namespace std;


void solve(int cx, int cy, int x, int y){

	if(cx == x){
		cout<<"divisa\n";
		return;
	}

	if(cy == y){
		cout<<"divisa\n";
		return;
	}

	if( cx < x){
		// eastern
		if(cy < y){
			cout<<"NE\n";
		} else {
			cout<<"SE\n";
		}

	} else {
		if(cy < y){
			cout<<"NO\n";
		} else {
			cout<<"SO\n";
		}
	}
}


int main(){

	int tc;
	
	int qs;
	int cx;
	int cy;
	int x;
	int y;

	while(true){
		cin>>qs;

		if(qs == 0)
			break;
		
		cin>>cx>>cy;
		while(qs--){
			cin>>x;
			cin>>y;
			//cout<<cx<<" "<<cy<<" "<<x<<" "<<y<<"\n";
			solve(cx,cy,x,y);
		} 
	}

}