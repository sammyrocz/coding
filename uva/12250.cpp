#include<bits/stdc++.h>
using namespace std;
int main(){

	string inp;
	cin>>inp;
	int i = 1;
	while(inp!="#"){
		string res="";
		

			if(inp ==  "HELLO")
				res="ENGLISH";
				
			else if(inp == "HOLA")
				res = "SPANISH";
				
			else if(inp == "HALLO")
				res = "GERMAN";
		    
		    else if(inp == "CIAO")
				res = "ITALIAN";
			else if(inp == "BONJOUR")
				res = "FRENCH";
			else if(inp == "ZDRAVSTVUJTE")
				res = "RUSSIAN";
			else res = "UNKNOWN";
				

		

		cout<<"Case "<<i++<<":"<<" "<<res<<"\n";
		cin>>inp;
	}


}