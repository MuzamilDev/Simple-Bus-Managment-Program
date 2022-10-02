#include<iostream>
using namespace std;
int main()
{
    int waiting =0;
    int seats =26;

    cout<<"Enter number of waiting passenger "<<endl;
    cin>>waiting;
    waiting = waiting-seats;
    cout<<"The Number of waiting person are: "<<waiting<<endl;
    if(waiting > 15)
        cout<<"Send New Bus "<<endl;

     return 0;
}
