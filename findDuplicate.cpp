#include<bits/stdc++.h>
using namespace std;
int findDuplicate(int arr[],int n){
	int ans=0;
	for(int i=0;i<n;i++){
		ans=ans^arr[i];
		
	}
		for(int i=0;i<n;i++){
		ans=ans^i;
		
	}
	return ans;
}
int main(){
	int arr[5];
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
cout<<	findDuplicate(arr,5);
	
	return 0;
}
