#include<iostream>
using namespace std;

//function to find the unique element
int Unique(int *arr, int size)
{
  cout<<"The unique element in your array is : "<<endl;
   int ans=0;
   for(int i=0; i<size; i++) 
   {
      ans = ans^arr[i];
   }
   return ans ;
}
//function to print the array
int printArray(int arr[],int n){
	cout<<"Enter the element in array : "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	
	}
	cout<<endl;
}
//main function
int main(){
	int n;
	cout<<"Enter the size of array :"<<endl;
	cin>>n;
	int arr[n];
	printArray(arr,n);	
    cout<<Unique(arr,n);
	return 0;
}
