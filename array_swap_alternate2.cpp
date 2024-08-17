#include<iostream>
using namespace std;
int main()
{
    int array_1[]={1,2,3,4,5};
    int size = sizeof(array_1)/sizeof(array_1[0]);
    int s=0;
    while(s<size-1)
        {
            //cout<<"hello";
            int a=array_1[s];
            int b=array_1[s+1];
            int temp=a;
            array_1[s] = b;
            array_1[s+1] = a;
            a=b;
            b=temp;
            s+=2;
        }
    

    //cout<<"swapped array";

    for (int i=0;i<size;i++){
        cout<<array_1[i]<<endl;
    }
}