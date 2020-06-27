#include<iostream>
using namespace std;

#include<cstring>
#include<stack>
void Reverse(char *exp,int n)
{
    stack<char> s;
    for(int i=0;i<n;i++)
    {
       s.push(exp[i]);
    }
    for(int i=0;i<n;i++)
    {
        exp[i]=s.top();
        cout<<exp[i];
        s.pop();
    }
};
int main()
{
    char exp[50];
    char a;

    cout<<"Enter A String :"<<endl;
    cin>>exp;
    Reverse(exp,strlen(exp));
    return 0;
}
