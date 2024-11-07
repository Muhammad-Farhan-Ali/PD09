#include<iostream>
using namespace std;

int calculateTime(string arr[],int size);

int main()
{
    int n;

    cout<<"Enter number of paint sequence:";
    cin>>n;
    const int N=n;

    cout<<"Enter paint sequence (one on each line):"<<endl;
    string paint[N];
    for(int i=0;i<N;i++)
    {
        cin>>paint[i];
    }

    cout<<"Time required to paint the sequence: "<<calculateTime(paint,N)<<" sec!"<<endl;

    return 0;
}
int calculateTime(string arr[],int size)
{
    int time=2;

    for(int i=1;i<size;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            time=time+3;
        }
        else
        {
            time=time+2;
        }
    }
    return time;
}