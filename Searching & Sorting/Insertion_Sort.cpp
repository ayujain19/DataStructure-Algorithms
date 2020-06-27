#include<iostream>
using namespace std;

int main()
{
    int a[5];
    int key, i, j;
    cout<<"Enter 5 elements in an Array"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }

    for(i=1;i<5;i++)
    {
        key = a[i];
        j = i-1;
        while((j>=0) && (a[j]>key))
        {
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = key;
    }
    cout<<"The Sorted Array is : ";
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}