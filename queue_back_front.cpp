#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> my_queue;
    int temp;
    my_queue.push(10);
    my_queue.push(12);
    my_queue.push(19);
    
    cout<<my_queue.back()<<"\n";     
    cout<<my_queue.front()<<"\n";
    my_queue.pop();
   
    cout<<my_queue.front()<<"\n";
    cout<<my_queue.back();
    return(0);
}