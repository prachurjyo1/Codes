#include<iostream>
using namespace std;


int main(){
    cout<<"hello"<<endl;
    int arr [100],n;
    cout<<"Enter the num of digits :"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int sum =0;
    for (int i = 0; i < n; i++)
    {
        sum= sum+ arr[i];
    }
    
    cout<<"Sum Of the elements of the array : "<<sum<<endl;
    
}
