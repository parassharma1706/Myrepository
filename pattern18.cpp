#include<bits/stdc++.h>
using namespace std;
void pattern18(int n){
	for(int i=0;i<n;i++){
		char ch='A'+(n-i-1);
		for(int j=0;j<=i;j++){
			cout<<ch<<" ";
			ch++;
		}
		cout<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	pattern18(n);
	/* output for n=5
	E
	D E
	C D E
	B C D E
	A B C D E
	  */
	  return 0;
}
