// Test whether array is empty using empty().

#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int , 0> first_index ;
    array<int, 1> second_index;
    cout<<"first index " <<(first_index.empty() ? "IS EMPTY" :"IS NOT EMPTY") <<"\n";
    cout<<"second index " <<(second_index.empty()? "IS EMPTY" :"IS NOT EMPTY") <<"\n";
    return(0);

}