#include<iostream>
using namespace std;
int main()
{
    int a[5];
    int i, j, temp;
    cout<<"Enter 5 elements in an Array"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    cout<<"The Sorted Array is : ";
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}