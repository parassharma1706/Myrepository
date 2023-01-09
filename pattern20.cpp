#include<bits/stdc++.h>
using namespace std;
void pattern20(int n){
	for(int i=1;i<=(2*n)-1;i++){
		int star,space;
		
		if(i<=n){
		star=i;
		space=(2*n)-(2*i);
		}
		
		else {
		star=(2*n)-i;
		space=(2*i)-(2*n);
		}
		
		//star
		for(int j=1;j<=star;j++){
			cout<<"*";
		}
	    //space
		for(int j=1;j<=space;j++){
			cout<<" ";
		}
		//star
			for(int j=1;j<=star;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	pattern20(n);
	/* output for n=5
	
	*        *
	**      **
	***    ***
	****  ****
	**********
	****  ****
	***    ***
	**      **
	*        *
	
	    */
	return 0;
}
