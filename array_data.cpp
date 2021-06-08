/*
Since array are stored in contiguos memory form, that's why it
returns the pointer to the first element of the array.
*/

#include<iostream>
#include<cstring>
#include<array>
using namespace std;
int main()
{
    const char *cstr= "Test_String";
    array<char,12>my_array ;
    memcpy(my_array.data(),cstr,8);    
    /*
    memcpy() is used to copy a block of memory from a location to another. It is declared in <string>
    */
    cout<<my_array.data()<<"\n";
    memcpy(my_array.data(),cstr,12);
    cout<<my_array.data()<<"\n";
    return(0);

}


