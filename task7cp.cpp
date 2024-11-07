#include<iostream>
using namespace std;

int sameCharacters(string word1,string word2);

int main()
{
    string word1;
    string word2;

    cout<<"enter first word:";
    cin>>word1;
    cout<<"Enter second word:";
    cin>>word2;

    cout<<"The number of times characters are repeating are: "<<sameCharacters(word1,word2)<<" times!"<<endl;

    return 0;
}
int sameCharacters(string word1,string word2)
{
    int count=0;

    for(int i=0;word1[i]!='\0';i++)
    {
        for(int j=0;word2[j]!='\0';j++)
        {
            if(word2[j]==word1[i])
            {
                count++;
                word2[j]='0';
                break;
            }
        }
    }
    return count;
}