/*New element is inserted at the end of the queue and deleted from front side*/

#include<iostream>
#include<queue>
using namespace std;
int main()
{
queue<int>my_queue;
int mynum;
cout<<"Enter some integers in queue from o to end :";
do{
    cin>>mynum;
    my_queue.push(mynum);
}while(mynum);    //if this condition fails it comes out of loop.
cout<<"\nmy_queue contains the following values:\n";
while(!my_queue.empty())
{
    cout<<my_queue.front() <<" ";
    my_queue.pop();
    
}
return(0);
}

