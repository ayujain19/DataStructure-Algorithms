#include<iostream>
using namespace std;

void linearSearch(int arr[],int n)
{
    int temp = -1;
    for(int i=0;i<10;i++)
    {
        if(arr[i]==n)
        cout<<"Element Found at Index Location : "<<i;
        temp = 0;
    }
    if(temp==-1)
    cout<<"Element Not Found";
}
int main()
{
    int arr[10];
    int num;
    cout<<"Enter 10 Elements in an Array"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the Element you want to Search : ";
    cin>>num;
    linearSearch(arr,num);

    return 0;
}