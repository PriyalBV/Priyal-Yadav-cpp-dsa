//BINARY SEARCH ON AN AGNOSTIC ARRAY MEANS THAT WE DO NOT KNOW WHEATHER THE ELEMENTS 
//ARE IN ASCENDING OR DESENDING ORDER ALL THAT IS KNOWN IS THAT ARRAY IS SORTED
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter the size:";
    cin>>size;
    int arr[size];
    cout<<"enter the elements"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int l=0;
    int u=size-1;
//checking if in decreasing order
    if (arr[l]>arr[u]){
        int key,mid;
        cout<<"enter the element to search:";
        cin>>key;
    
    
        for(int i=0;i<size;i++){
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
        }//for loop ends

        //condition for element not found
        if(l>u){
            cout<<"element not found";
        }

    }// decreasing condition checker if ends
//condition gor increasing 
    else if (arr[l]<arr[u]){
        cout<<"enter element to search";
        int key;
        cin>>key;
        int l= 0;
        int u= size-1;
        int i=0;
    
        while(i<size){
            //cout<<"hello";
            int mid = (l+u)/2;
            if(arr[mid]>key){
                u=arr[mid-1];
             }
            else if (arr[mid]<key){
                l=arr[mid+1];
             }
            else if (arr[mid]==key ){
                cout<<"element found at"<<mid+1<<"th position";
                break;
            }
            /**else if (mid==0||mid==1&&arr[mid]!=key){
                 cout<<"element does not exist";//error for this
              }**/
            i++;

        }
        if (i>=size){
            cout<<"element doesnt exist";
        }
    }
}