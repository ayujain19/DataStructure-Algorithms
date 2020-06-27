#include<iostream>
using namespace std;
#include<cstring>
#include<stack>


void check(char s[])
{
    stack<char> S1;
    for(int i=0;i<strlen(s);i++)
    {
        
        if((s[i]=='{')||(s[i]=='(')||(s[i]=='['))
        {
            S1.push(s[i]);
     
        }
        else if((s[i]=='}')||(s[i]==')')||(s[i]==']'))
        {
            S1.pop();
        }
    }
    if(S1.empty())
    cout<<"Balanced";
    else
    {
        cout<<"Not Balanced";
    }
    
}
int main()
{
    char s[50];
    int a=0;
    cout<<"Enter A String :"<<endl;
    cin>>s;
    for(int i=0;i<strlen(s);i++)
    {
         if((s[i]==',')||(s[i]==' ')||(s[i]=='_')||(s[i]=='@')||(s[i]=='!'))
        {
            a+=1;
            break;
        }  
    }
    if(a==1)
    {
        cout<<"Invalid, Please enter valid string";
    }
    else
    {

        check(s);
    }
    
   
}