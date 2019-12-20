#include<bits/stdc++.h>
using namespace std;

int main(){

	int tc;
	cin>>tc;

	vector<long> inp(3);
	vector<long> temp(3);
	while(tc--){
		cin>>inp[0]>>inp[1]>>inp[2];
		sort(inp.begin(),inp.end());

		temp[0] = inp[0];
		temp[1] = inp[1];
		temp[2] = inp[2];

		if(inp[0] == inp[1] && inp[1] == inp[2]){
			cout<<0<<"\n";
			continue;
		}

		if(((inp[0] + 1) == inp[1]) && ((inp[1] + 1) == inp[2])){
			cout<<0<<"\n";
			continue;
		}



		if(inp[0] != inp[1]){
			inp[0]++;
		} 

		if(inp[1]!=inp[0]){
			inp[1]--;
		}

		if(inp[2]!=inp[1]){
			inp[2]--;
		}

		if(temp[1]!=temp[2]){
			temp[1]++;
		}

		if(temp[2]!=temp[1]){
			temp[2]--;
		}

		if(temp[0]!=temp[1]){
			temp[0]++;
		}

		long res1 = abs(inp[0] - inp[1]) + abs(inp[1] - inp[2]) + abs(inp[0] - inp[2]);
		long res2 = abs(temp[0] - temp[1]) + abs(temp[1] - temp[2]) + abs(temp[0] - temp[2]);
		cout<<min(res1,res2)<<"\n";
	}


}