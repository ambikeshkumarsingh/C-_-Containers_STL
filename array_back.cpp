/*
It returns a dirct refernce to the last element of the array using back() and 
to the first elemnet using front()
*/

#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int ,10>my_array;
    int i;
    //Storing some values at array

    for(i=0;i<10;i++)my_array.at(i) = i*2;
    cout<<"The first element of array is \t" <<my_array.front()<<"\n";
    cout<<"The last element of array is \t" <<my_array.back()<<"\n";
    
    my_array.back() = 200;   // actual use of back().
    my_array.front()=100;   // actual use of front().
    cout<<" *****    The modified array is    ***** \n";
    for(i=0 ;i<10;i++)
    {
        cout<<my_array.at(i) <<"  ";

    }

    return(0);

}