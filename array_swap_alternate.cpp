#include<iostream>
using namespace std;
int main()
{
    int array_1[]=[1,2,3,4,5];
    int size = sizeof(array_1)/sizeof(int);
    for (int i=0;i<size;i++){
        if (i%2==0)
        {
            int a=array_1[i];
            int b=array_1[i+1];
            int temp=a;
            a=array_1[i+1];
            b=temp;

        }
    }
    cout<<"swapped array";
    for (int i=0;i<size;i++){
        cout<<array_1[i];
    
    }


}