#include <iostream>

using namespace std;

int main()
{
   int target = 20; 
   int arr[]={6,8,10,15,20,30};

   for(int i =0; i<=6; i++){
       if(arr[i]==target){
           return true;
       }
   }

   return false;

}
