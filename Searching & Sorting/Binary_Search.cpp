#include<iostream>
using namespace std;

void binarySearch(int arr[], int n)
{
    int left=0,right=9,mid,temp = -1;
    while(left<=right)
    {
        mid = left + (right-left)/2;
        if(arr[mid]==n)
        {
            temp = 0;
            cout<<"Element Found at index location : "<<mid;
            break;
            
        }
        else if(arr[mid]<n)
        left = mid + 1;
        else
        right = mid - 1;
        
    }
    if(temp == -1)
    cout<<"Element Not Found";
}


int main()
{
    int arr[10];
    int num;
    cout<<"Enter 10 Elements in an Array in Sorted Form"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the Element you want to Search : ";
    cin>>num;
    binarySearch(arr,num);

    return 0;
}