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
   
   printArray(arr,n);
   cout<<endl;

   int i = 0;
   int j = n-1;
   while(i<j){
       swap(arr[i],arr[j]);
       i++;
       j--;
   }

   printArray(arr,n);

}
    
