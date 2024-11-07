#include<iostream>
using namespace std;

bool sameElements(string arr[]);

int main()
{
    string elements[4];

    cout<<"Enter elements of array:"<<endl;
    for(int i=0;i<4;i++)
    {
        cin>>elements[i];
    }

    cout<<sameElements(elements)<<endl;

    return 0;
}
bool sameElements(string arr[])
{
    for(int i=0;i<4;i++)
    {
        if(arr[0]!=arr[i])
        {
            return false;
        }
    }
    return true;
}