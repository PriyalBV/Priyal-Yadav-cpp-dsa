#include<iostream>
using namespace std;
int second_max(int arr[],int size){
    int max=arr[0];
    int second;
    for (int i=0;i<size;i++){
        if (arr[i]>max){
            // mistake made first give value to second as if you first 
            //give value to max value of max will be rewritten
            //max=arr[i];
            second=max;
            max=arr[i];
        }
    }
    return second;

}
int main()
{
    int size;
    cout<<"enter size of array";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cout<<"enter element of array";
        cin>>arr[i];
    }
    int ans=second_max(arr,size);
    cout<<"second maximum of array is"<<ans;

}