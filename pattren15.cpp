#include<bits/stdc++.h>
using namespace std;
void pattern15(int n){
	for(int i=0;i<n;i++){
		char ch='A';
		for(int j=0;j<(n-i);j++){
			cout<<ch;
			ch++;
		}
		cout<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	pattern15(n);
	/* output for n=5
	ABCDE
	ABCD
	ABC
	AB
	A
	    */
	
	return 0;
}
