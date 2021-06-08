/*
The following are the important stack functions
push()   : To push into stack
pop()    : To pop the topmost element of stack
empty()  : To check wheather the stack is empty or not?
top()    : To find the top most element of stack
emplace(): To insert at top;
*/

#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> mystack;
    int sum =0;
    int i;
    for(i=0;i<10;i++)
    {
        mystack.push(i);
    }
    cout<<"The elements of stack are : \n";
    while(!mystack.empty())
    {   cout<<mystack.top()<<" ";
        sum =sum+mystack.top();
        mystack.pop();
    }

    cout<<"\nThe sum of elements present in stack is:  "<<sum;
    return(0);
}