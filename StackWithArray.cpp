#include<iostream>
using namespace std;
#define n 100
class stack
{
    int* arr;
    int top;
    public:
    stack()
    {
        arr = new int[n];      //dynamically allocating memory for Array
        top=-1;
    }
    void pop()             //function to delete the topmost element
    {
        if(top==-1)        //Condition for empty Stack
        {
            cout<<"Stack is empty"<<endl;
            return;
        }
        top--;
    }
    void push(int x)       //function to add elements at the top
    {
        if(top==n-1)       //Condition for full Stack
        {
            cout<<"Stack overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }
    int Print()            //function to print the Stack
    {
        if(top==-1)
        {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty()
    {
        return top==-1;
    }
};
int main()
{
    cout<<"The Stack is"<<endl;
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(5);
    cout<<st.Print()<<endl;
    st.pop();
    cout<<st.Print()<<endl;
    st.pop();
    cout<<st.Print()<<endl;
    st.pop();
    cout<<st.Print()<<endl;
    st.pop();
    st.pop();
    return 0;
}





