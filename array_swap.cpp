/*use to exchange the contents of two arrays but the size and type of both the arrays
must be same ,else it will throw exception.
*/

#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,5>first_array ={10,20,30,40,50};
    array<int ,5>second_array ={1,2,3,4,5};
    int i;
    cout<<"The original contents of array are: \n";
    cout<<"First Array: " <<"\t";
    for(i =0;i<5;i++)
    {
        cout<<first_array.at(i) <<" ";
    }
    cout<<"\n";
    cout<<"Second Array: "<<"\t";
    for(i =0;i<5;i++)
    {
        cout<<second_array.at(i)<<" ";
    }
    cout<<"\n";
    first_array.swap(second_array);
    cout<<"The swapped Arrays are: \n";
    cout<<"First Array: "<<"\t";
    for(int &x:first_array)
    {
        cout<<x <<" ";
    }
    cout<<"\n";
    cout<<"Second Array: "<<"\t";
    for(int &y:second_array)
    {
        cout<<y<<" ";
    }
    return(0);
}