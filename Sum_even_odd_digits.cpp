#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    
    int even_sum=0;
    int odd_sum=0;
    
    while(n>0){
        int r=n%10;
        n=n/10;
        if(r%2==0){
            even_sum+=r;
        }else{
            odd_sum+=r;
        }
    }
    cout<<"The sum of Even digits is = "<<even_sum<<endl;
    cout<<"The sum of Odd digits is = "<<odd_sum<<endl;
    return 0;
}
