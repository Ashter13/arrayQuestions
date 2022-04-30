#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    
   int n = 6; 
   int arr[n]={6,8,10,15,20,30};
   
   for(int i = 0; i<n; i+=2){
       swap(arr[i],arr[i+1]);
   }

   printArray(arr,n);

}
