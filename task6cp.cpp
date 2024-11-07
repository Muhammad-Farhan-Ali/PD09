#include<iostream>
using namespace std;

void transform(int arr[],int size,int numOfTimes);
void printArray(int arr[],int size);

int main()
{
    int n,x;

    cout<<"Enter size of array:";
    cin>>n;
    const int N=n;

    int array[N];

    cout<<"Enter elements of array (one in each line) :"<<endl;
    for(int i=0;i<N;i++)
    {
        cin>>array[i];
    }

    cout<<"Enter number of times to transform array:";
    cin>>x;

    transform(array,N,x);

    return 0;
}
void transform(int arr[],int size,int numOfTimes)
{
    int x=1;
    while(x<=numOfTimes)
    {
        for(int i=0;i<size;i++)
        {
            if(i%2==0)
            {
                arr[i]=arr[i]+2;
            }
            else
            {
                arr[i]=arr[i]-2;
            }
        }
        x++;
    }
    printArray(arr,size);
}
void printArray(int arr[],int size)
{
    cout<<"{";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<"}";
}