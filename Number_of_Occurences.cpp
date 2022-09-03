#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int T;
    cin>>T;
    while(T>0){
      int N;
      cin>>N;
      char arr[N];
      for(int i=0;i<N;i++){
        cin>>arr[i];
      }
      int count=0;
      for(int i=0;i<N;i++){
        if(arr[i]=='x'){
          count++;
        }
      }
      cout<<count;
      cout<<endl;
      T--;
    }
    return 0;
  }