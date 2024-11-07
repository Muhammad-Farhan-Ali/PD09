#include<iostream>
using namespace std;

int findIndex(string arr[],string movieName);
float calculatePrice(string arr[],string movieName);

int main()
{
    string movies[5]={"Gladiator","StarWars","Terminator","TakingLives","TombRider"};
    string movie;

    cout<<"Enter name of movie (Gladiator,StarWars,Terminator,TakingLives,TombRider): ";
    cin>>movie;

    cout<<"Price of ticket of movie "<<movie<<" is Rs."<<calculatePrice(movies,movie)<<"!"<<endl;

    return 0;
}
int findIndex(string arr[],string movieName)
{
    for(int i=0;i<5;i++)
    {
        if(movieName==arr[i])
        {
            return i;
        }
    }
    return -1;
}
float calculatePrice(string arr[],string movieName)
{
    float disc=0,total=500;
    int x=findIndex(arr,movieName);

    if(x<0)
    {
        return 0;
    }

    if(x%2==0)
    {
        disc=10;
    }
    else
    {
        disc=5;
    }
    total=total-(500*(disc/100.0));
    return total;    
}