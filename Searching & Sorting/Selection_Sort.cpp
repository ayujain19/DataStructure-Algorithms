#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    int min,temp;
    cout<<"Enter 5 elements in an Array"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<4;i++)
    {
        min = i;
        for(int j=i+1;j<5;j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }
        }
            if(min!=i)
            {
                temp=arr[min];
                arr[min] = arr[i];
                arr[i] = temp;
            }
    }
    cout<<"The Sorted Array is : ";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}