#include<bits/stdc++.h>
using namespace std;
void pattern12(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++)
		cout<<j;
		
		//Space 
		for(int j=1;j<=(2*n)-(2*i);j++)
		cout<<" ";
		
		for(int j=i;j>=1;j--)
		cout<<j;
		
		
		cout<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	pattern12(n);
	/*output for n=4
	1      1
	12    21
	123  321
	12344321
	
	*/
	return 0;
}
