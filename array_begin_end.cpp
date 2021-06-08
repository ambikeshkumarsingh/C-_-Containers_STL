/*
Using begin() and end() to get the refernce of array starting index and last index.
*/

#include<iostream>
#include<array>
using namespace std;
int main()
{
    auto i;
    array<int,5>my_array={10,20,30,40,50};
    cout<<"The array contains: \t";
    for(i = my_array.begin(); i! = my_array.end();++1)
    {
        cout<<*i << "\t";
    }
        return(0);
}