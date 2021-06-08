#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,10> my_array;    
     /*Defining an array container of type int  and size 10 and 
     name of that container is my_array. */
    int i;
    for (i=0;i<10;i++)my_array.at(i)=i*2;   // Storing some values.

    // Printing the values.
    for(i=0;i<10;i++)
    {
        cout<<my_array.at(i);
        cout<<"  ";
    }

    return(0);

}