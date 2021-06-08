/*
maxsize() is used to know what number of elements can be inseretd in an array.
sizeof() is used to know size.
*/


#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,10> my_array;
    cout<<"The number of elements that can be stored in my_array is: "<<my_array.max_size()<<"\n";
    cout<<"The size of my_array is: " <<my_array.size()<<"\n";
    cout<<"The size of my_array is: "<<sizeof(my_array)<<"\n";
    return(0);
}