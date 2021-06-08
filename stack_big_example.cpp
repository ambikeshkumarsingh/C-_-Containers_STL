#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int max_size,number;
    stack<int> mystack;
    cout<<"Enter the maximum size of stack:\t";
    cin>>max_size;
    cout<<"Enter the elements of stack:\n";
    do
    {
        
        cin>> number;
        max_size = max_size-1;
        mystack.push(number);
        
   } while ( max_size >0);    // Do untill this is true.
   
   while(!mystack.empty())
    {
        cout<<mystack.top() <<" ";
        mystack.pop();
    }
    return(0);
}