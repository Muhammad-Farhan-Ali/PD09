#include<iostream>
using namespace std;

bool checkEvenOdd(string word);

int main()
{
    string word;

    cout<<"Enter a word:";
    cin>>word;

    cout<<checkEvenOdd(word)<<endl;

    return 0;
}
bool checkEvenOdd(string word)
{
    int i=0,x=0;
    while(word[i]!='\0')
    {
        x++;
        i++;
    }
    if(x%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}