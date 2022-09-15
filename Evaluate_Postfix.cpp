#include <iostream>
#include <bits/stdc++.h>
#include <stack>
#include <string>
#include <cmath>
using namespace std;

int evaluatePostfix(string str){
    stack <char> st;
    int result;
    for(int i=0;i<str.length();i++){
        char c = str[i];
        
        if(c>='0' && c<='9'){
            int x = int(c) - 48;
            st.push(x);
        }
        
       else if(c == '^'){
            int a = st.top();
            st.pop();
            result = pow(a,st.top());
            st.pop();
            st.push(result);
        }
        
       else if(c == '/'){
            int a = st.top();
            st.pop();
            result =  a / st.top();
            st.pop();
            st.push(result);
        }
        
       else if(c == '*'){
            int a = st.top();
            st.pop();
            result = a * st.top();
            st.pop();
            st.push(result);
        }
        
       else if(c == '+'){
            int a = st.top();
            st.pop();
            result = a + st.top();
            st.pop();
            st.push(result);
        }
        
       else if(c == '-'){
            int a = st.top();
            st.pop();
            result = a - st.top();
            st.pop();
            st.push(result);
        }
        
        else{
            break;
        }
    }
    return result;
}

int main()
{
    string expr = "823^/23*+51*-";
    int ans = evaluatePostfix(expr);
    cout<<ans;
    return 0;
}