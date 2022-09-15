#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;

int prec(char c){                                      //function to check the precedence of operators
    
    if(c == '^'){
        return 3;
    }
    
    else if(c == '/' || c == '*'){
        return 2;
    }
    
    else if(c == '+' || c == '-'){
        return 1;
    }
    
    else{
        return -1;
    }
}

void infixToPostfix(string s){
    
    stack <char> st;
    string result;                                   //this string will store the output
    
    for(int i=0;i<s.length();i++){
        
        char c = s[i];
        
        //if scanned character is an operand, add it into the result string
        if((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9')){
            result += c;
        }
        
        //if scanned character is '(' , push it to the stack
        else if(c == '('){
            st.push('(');
        }
        
        //if scanned character is ')' , pop it until next '(' is encountered
        else if(c == ')'){
            while(st.top() != '('){
                result += st.top();
                st.pop();
            }
            st.pop();
        }
        
        //if scanned character is an operator
        else{
            while(!st.empty() && prec(s[i]) <= prec(st.top())){
                if(c == '^' && st.top() != '^'){
                    break;
                }else{
                    result += st.top();
                    st.pop();
                }
            }
            st.push(c);
        }
    }
    
    //popping remaining elements from stack
    while(!st.empty()){
       result += st.top();
       st.pop();
    }
    
    cout<<result<<endl;
}
int main()
{
    string expr = "a+b*(c^d-e)^(f+g*h)-i";
    infixToPostfix(expr);
    return 0;
}
