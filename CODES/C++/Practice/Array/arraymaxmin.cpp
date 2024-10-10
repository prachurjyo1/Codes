#include<iostream>
using namespace std;

int getMax(int arr[],int n);

int getMin(int arr[],int n);


int main(){
    cout<<"hello"<<endl;
    int arr [100],n;
    cout<<"Enter the num of digits :"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int maxi= getMax(arr,n);
    cout<<"Maximum value :"<<maxi<<endl;
    cout<<"minimum value :"<<getMin(arr,n) <<endl;
    
}
int getMax(int arr[],int n){

    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
       if(arr[i]>INT_MIN){
        max = arr[i];
       }
    }
    
    return max;
}

int getMin(int arr[],int n){

    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
       if(arr[i]<min){
        min= arr[i];
       }
    }
    return min;
}