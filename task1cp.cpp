#include<iostream>
using namespace std;

float calculatePrice(string arr1[],int arr2[],string fruit,int kilos);
int findInArray(string arr1[],string fruit);

int main()
{

    string fruits[4]={"peach","apple","guava","watermelon"};
    int price[4]={60,70,40,30};

    float kg;
    string fruit;

    cout<<"Enter fruit name (peach,apple,guava,watermelon): ";
    cin>>fruit;
    cout<<"Enter kilograms of fruit: ";
    cin>>kg;

    cout<<"Total price of "<<kg<<" kilograms of "<<fruit<<" is Rs."<<calculatePrice(fruits,price,fruit,kg)<<"!"<<endl;

    return 0;
}
float calculatePrice(string arr1[],int arr2[],string fruit,int kilos)
{
    float total=0;

    int x=findInArray(arr1,fruit);

    if(x>=0)
    {
    total=arr2[x]*kilos;
    }
    else
    {
        return 0;
    }

    return total;  
}

int findInArray(string arr1[],string fruit)
{
    for(int i=0;i<4;i++)
    {
        if(fruit==arr1[i])
        {
            return i;
        }
    }
    return -1;
}