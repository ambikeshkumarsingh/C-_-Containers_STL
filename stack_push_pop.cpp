/*use of push() and pop() in stack*/

#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> mystack;
    int i;
    for(i =0;i<5;i++)
    {
        mystack.push(i);
    }
    while(!mystack.empty())
    {
        cout<<mystack.top()<<" ";
        mystack.pop();   //Don't remove this line else there will be infinite loop . 
    }
    return(0);
}