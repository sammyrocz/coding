#include<bits/stdc++.h>
using namespace std;

void solve(string A, string B){


	int n = A.length();
	int m = B.length();


	if( A < B){
		cout<<A<<"\n";
		return;
	}

	
	for(int i = 0, j = 0; i < n && j < m ; ){

		if(A[i] < B[j]){
			cout<<A<<"\n";
			return;
		}

		if(A[i] >= B[j]){
			
			int equal = -1;
			int less = -1;
			
			for(int k = i +1; k < n ; k++){
				
				if(B[j] == A[k]){
					equal = k;
				} 

				else if(A[k] < B[j]){
					if(less !=-1){
						if(A[k] < A[less]){
							less = k;
						}
					} else{
						less = k;
					}
				}
			}

			if(less !=-1){
				swap(A[i],A[less]);
				if(A < B){
					cout<<A<<"\n";
					return;
				} else {
					cout<<"---\n";
					return;
				}
			}

			if(A[i] == B[j]){
				i++;
				j++;
				continue;
			}

			if(equal!=-1){
				swap(A[i],A[equal]);
				if(A < B){
					cout<<A<<"\n";
					return;
				} else {
					cout<<"---\n";
					return;
				}
			}

			
		}

	}

	cout<<"---\n";

}


int main(){

	int tc;
	cin>>tc;
	string A,B;
	while(tc--){
		cin>>A>>B;
		//cout<<A<<"\n";
		solve(A,B);

	}


}