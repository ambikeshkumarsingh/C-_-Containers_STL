/*
To insert same value in an array using fill().
*/

#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,6> my_array;
    my_array.fill(100);
    cout<<"Now the array contains \n";
    for(int &x:my_array)
    {
        cout<<x<<" ";
    }
    return(0);
}