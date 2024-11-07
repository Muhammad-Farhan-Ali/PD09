#include<iostream>
using namespace std;

bool Boom(int arr[],int size);

int main()
{
    int size;

    cout<<"Enter size of array:";
    cin>>size;

    const int SIZE=size;

    int num[SIZE];

    cout<<"Enter elements of array (line by line):"<<endl;
    for(int i=0;i<SIZE;i++)
    {
        cin>>num[i];
    }
    
    if(Boom(num,SIZE))
    {
        cout<<"BOOM!"<<endl;
    }
    else
    {
        cout<<"There is no 7 in the array!"<<endl;
    }

    return 0;
}
bool Boom(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==7)
        {
            return 1;
        }
    }
    return 0;
}