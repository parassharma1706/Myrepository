#include<bits/stdc++.h>
using namespace std;
void pattern13(int n){
		int value=1;
	for(int i=1;i<=n;i++){
	
		for(int j=1;j<=i;j++,value++){
		
		 cout<<value<<" ";
	}
		 cout<<endl;
	}
	
}
int main(){
	int n;
	cin>>n;
	pattern13(n);
	
	/* output for n=5
	1 
	2 3
	4 5 6
	7 8 9 10
	11 12 13 14 15
	         */
	return 0;
}
