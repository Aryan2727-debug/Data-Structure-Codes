#include <iostream>
using namespace std;
int binary_search(int arr[],int left,int right,int ele){
    int mid;
    while(left<=right){
        mid=(left+right)/2;
        if(arr[mid]==ele)
        return mid;
        if(arr[mid]<ele)
        left=mid+1;
        else
        right=mid-1;
    }
    return -1;
}
int main()
{
    int arr[]={23,45,67,89};
    int n;
    cout<<"Enter the element you want to search"<<endl;
    cin>>n;
    int index=binary_search(arr,0,4,n);
    cout<<"The index of the element is "<<index;
    return 0;
}

