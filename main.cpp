#include <iostream>

using namespace std;

int main()
{
    cout<<"welcome to the memory game"<<endl;
string game="afgabwcmbdlgwlefecdm",no="12345678901234567890", s=no;
    int no1,no2,i=0,k=0;
    cout<<no<<endl;

    for ( int j=0; j>=0; j++)
    {
        if(j%2==0)
        {
            cout<<"player 1 : it's your turn"<<endl;
        }
        else
        {
            cout<<"player 2 : it's your turn"<<endl;
        }
        cout<<"choose 2 numbers from (1:20)"<<endl;
        cin>>no1>>no2;
        while(no1==no2||no1<1||no2<1||no1>20||no2>20||s[no1-1]=='*'||s[no2-1]=='*'){
            cout<<"choose another 2 numbers"<<endl;
            cin>>no1>>no2;
        }
        if(game[no1-1]==game[no2-1]&&s[no1-1]!='*'&&s[no2-1]!='*')
        {
            s[no1-1]=game[no1-1];
            s[no2-1]=game[no2-1];
            cout<<s<<endl;
            s[no1-1]='*';
            s[no2-1]='*';
            no=s;
            cout<<s<<endl;
            if(j%2==0)
            {
                i=i+1;
            }
            else
            {
                k=k+1;

            }
            if(s=="********************")
            {
                if(i>k)
                {
                    cout<<"the winner is player 1"<<endl;
                    cout<<"highest score is :"<<i<<endl;
                    break;
                }
                else
                {
                    cout<<"the winner is player 2 "<<endl;
                    cout<<"the highest score is "<<k<<endl;
                    break;
                }
            }
        }
        else
        {
            s[no1-1]=game[no1-1];
            s[no2-1]=game[no2-1];
            cout<<s<<endl;
            cout<<no<<endl;
            s=no;
        }
    }
    return 0;
}
