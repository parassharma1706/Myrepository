#include<bits/stdc++.h>
using namespace std;
void pattern19(int n){
	// for upper part
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			cout<<"*";
		}
		// Space
		for(int j=0;j<2*i;j++){
			cout<<" ";
		}
		
			for(int j=0;j<n-i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	// for lower part
		for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		// Space
		for(int j=1;j<=(2*n)-(2*i);j++){
			cout<<" ";
		}
		
			for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	pattern19(n);
	/* output for n=5
	**********
	****  ****
	***    ***
	**      **
	*        *
	*        *
	**      **
	***    ***
	****  ****
	**********
	
	    */
	return 0;
}
