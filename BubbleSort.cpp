#include<iostream>
 using namespace std;

 int main(){
     
     int arr[6] = {7, 11, 9, 2, 17, 4};
     int counter = 1;
     while(counter<6){
         for(int i = 0; i<6-counter; i++){
             if(arr[i]>arr[i+1]){
                 int temp = arr[i];
                 arr[i] = arr[i+1];
                 arr[i+1] = temp;
             }
         }
         counter++;
     }

     for(int i = 0; i<6; i++){
         cout<<arr[i]<<" ";
     }
}


