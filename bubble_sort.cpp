//***************************** Bubble Sort ***********************************
//******************Repeateadly Swap Two Adjacent Element If They Are In The Wrong Order*********************
#include<bits/stdc++.h>
using namespace std;
void bubblesort(int *arr,int n){
	
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1])
			swap(arr[j],arr[j+1]);
		}
}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int &ele:arr){
		cin>>ele;
	}
	bubblesort(arr,n);
	for(int ele:arr){
		cout<<ele<<" ";
	}
	/* 
	Time complexity-O(n^2)
	Space Complexity-O(1)
	   */
	
	return 0;
}
