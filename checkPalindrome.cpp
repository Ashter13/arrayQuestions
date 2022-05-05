#include<iostream>
using namespace std;

bool checkPalindrome(int arr[] , int n){
    int i = 0;
    int j = n-1;

   while(i<j){

       if(arr[i]==arr[j]){
           i++;
           j--;
       }
       else{
           return false;
       }

   }
   return true;
}
int main(){
   int n = 5;
   int arr[n]={1,6,4,6,1};

   checkPalindrome(arr , n);

   cout<<checkPalindrome<<endl;

}
