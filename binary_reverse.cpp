#include<iostream>
using namespace std;
//int reverse_binary_search(int arr[],int size);



int reverse_binary_search(int arr[],int size){
    int i,l,u,mid,key;
    cout<<"enter the element to search:";
    cin>>key;
    l=0;
    u=size-1;
    
    for(i=0;i<size;i++){
        mid=(l+u)/2;
        if(key>arr[mid]){
            u=mid-1;
        }
        else if(key<arr[mid]){
            l=mid+1;
        }
        else if (key==arr[mid]){
            cout<<"element is found at"<<mid+1<<"position";
            break;
        }
    }
    //condition for element not found
    if(l>u){
        cout<<"element not found";
    }
    return 0;

}
int main(){
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the element:";
        cin>>arr[i];

    }
    
     reverse_binary_search(arr,n);

    return 0;

}
