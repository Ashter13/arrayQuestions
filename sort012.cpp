#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    
   int n = 6; 
   int arr[n]={1,1,0,2,0,2};

   int zero = 0;
   int one =0 ;
   int two = 0;

   for(int i =0; i<n; i++){

       if(arr[i]==0){
           zero++;
       }
       if(arr[i]==1){
           one++;
       }
       if(arr[i]==2){
           two++;
       }
   }

   int i = 0;
   while(zero--){
       arr[i]=0;
       i++;
   }
   while(one--){
       arr[i]=1;
       i++;
   }
   while(two--){
       arr[i]=2;
       i++;
   }

   printArray(arr,n);



}
    
