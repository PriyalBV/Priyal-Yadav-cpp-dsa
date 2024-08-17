//first and last occurence of a repeted element in binary search
//this time first we have to sort the array and then we search the element 
#include<iostream>
using namespace std;
void sort(int *arr,int size){
    for (int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if (*(arr+j)<*(arr+i)){
                int temp=*(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=temp;
            }
        }
    }
    //return arr[];

}
void first_occurence(int arr[],int size){
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
            
            i++;

        }//end of while
        if (i>=size){
            cout<<"element doesnt exist";
        }
}//end of func
void last_occurence(int arr[],int size){
    cout<<"enter element to search";
    int key;
    cin>>key;
    int l= 0;
    int u= size-1;
    int i=0;
    int pos=0;
    
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
                pos=mid+1;//storing the position each time element is found
                
            }
            
            i++;

        }//end of while
        if(pos!=0){
            cout<<"element found at"<<pos<<"th position";
        }
        if (i>=size){
            cout<<"element doesnt exist";
        }
}//end of func


int main(){
    int size;
    cout<<"enter the size of the array";
    cin>>size;
    int arr[size];
    cout<<"enter the elements";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    
    }
    sort(arr,size);
    first_occurence(arr,size);

}