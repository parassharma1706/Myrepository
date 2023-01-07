#include<bits/stdc++.h>
using namespace std;
void pattern16(int n){
	for(int i=0;i<n;i++){
		char ch='A'+i;
		for(int j=0;j<=i;j++){
			cout<<ch;
			
		}
		cout<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	pattern16(n);
	/* output for n=5
	A
	BB
	CCC
	DDDD
	EEEEE
	  */
	
	return 0;
}
