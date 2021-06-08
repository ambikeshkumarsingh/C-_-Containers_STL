/*
This emplace() adds a new element on the top of stack, above its current topmost element.
 */

#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
    stack<string> mystack;
    mystack.emplace("first sentence");
    cout<<mystack.top()<<"\n";
    cout<<"The sentence : "<<mystack.top()<<" was replaced with : ";
    mystack.emplace("Second sentence");
    
    cout<<mystack.top();
    
    return(0);

}
