#include<iostream>
using namespace std;

//function to reverse the array
int reverse(int arr[],int n){
	int start=0;
	int end=n-1;
while(start<=end){
	//Swap the start and end element
	int temp=arr[start];
	arr[start]=arr[end];
	arr[end]=temp;
	start++;
	end--;	
	}
}
//function to print the array
int printArray(int arr[],int n){
	cout<<"Reverse array : "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<< " ";
	
	}
	cout<<endl;
}
//main function
int main(){
	int n;
	cout<<"Enter the size of array "<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the element in array "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	reverse(arr,n);
	printArray(arr,n);
	return 0;
}
