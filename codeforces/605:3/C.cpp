#include<bits/stdc++.h>
using namespace std;

int main(){


	int n;
	int a;
	string s;
	cin>>n>>a;
	vector<int> freq(26,0);

	cin>>s;
	char ch;
	
	for(int i = 0 ; i < a; i++){
		cin>>ch;
		int index = ch - 'a';
		freq[index] = 1;
	}

	int right = 0;
	int left = 0;
	unsigned long long int val,total;
	val = total = 0;
	while(right < s.length()){

		int index = s[right] - 'a';
		if(freq[index] == 1){
			right++;
			continue;
		} 
		val += ((right - left) +1) * (s.length() - right);
		right++;
		left = right; 
	}

	if(s.length() % 2 == 0){
		total = (s.length()/2);
		total = total * (s.length()+1);
	} else {
		total = s.length() + 1;
		total = total / 2;
		total = total * s.length();
	}

    val = total - val ;
	cout<<val<<"\n";


}