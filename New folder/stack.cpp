#include<iostream>
#include<vector>
using namespace std;
void push(int stack,int top,int d)
{
    if(stack.length==top)
    {
        cout<<"Stack overflow"<<endl;

    }
    else{
        top++;
        stack stack overflow.

        
}
void pop(int stack,int top,int d)
{
    if(top=-1)
    {
        cout<<"Stack Underflow"<<endl;

    }
    else{
        top--;
    }
    return top;
    
}

int main()
{
    int stack[20],top=-1;
    top=push(stack,int top,25);
    top=push(stack,int top,25);
    top=tpush(stack,int top,25);
    top=push(stack,int top,25);
    top=push(stack,int top,25);
    cout<<stack[top]<<"at index"<<top<<endl;
    top=pop(stack)
    top=pop(stack)
    top=pop(stack)
    cout<<stack[top]<<"at index"<<top<<endl;
    return 0;
}