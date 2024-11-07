#include<iostream>
#include<string>
using namespace std;

void makePin(string arr[],string pin);

int main()
{
    string input;
    string moves[10]={"Shimmy","Shake","Piroutte","Slide","Boxstep","Headspin","Dosado","Pop","Lock","Arabesque"};

    cout<<"Enter your Pin (four digits pin):";
    cin>>input;

    for(int i=0;input[i]!='\0';i++)
    {
        if(((input[i]!='0') || (input[i]!='1') || (input[i]!='2') || (input[i]!='3') || (input[i]!='4')
        ||  (input[i]!='5') || (input[i]!='6') || (input[i]!='7') || (input[i]!='8') || (input[i]!='9')) && (input.size()!=4))
        {
            cout<<"Invalid input!"<<endl;
            return 0;
        }
    }

    makePin(moves,input);

    return 0;
}
void makePin(string arr[],string pin)
{
    int x=0;
    int position=0;
    int index=0;

    for(int i=0;pin[i]!='\0';i++)
    {
        x=pin[i] - '0';                 //for converting character to integer
        
        index=position+x;

        if(index>9)
        {
            index=index%10;
        }

        cout<<arr[index]<<"  ";
        position++;
    }
}