#include<iostream>

using namespace std;

bool getkey (int arr[],int size, int key);

int main (){

    cout<<"Enter sixe between 1-10 :";
    int n, arr[10];
    cin>>n;
    cout<<"enter the elements"<<endl;
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    cout<<"Enter the key :"<<endl;
    int key;
    cin>>key;
    bool final= getkey(arr,n,key);
    if (final)
    {
        cout<<" Key Present "<<endl;
    } else {
        cout<<" key not present "<<endl;
    }
}

bool getkey (int arr[],int size, int key){

    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
            return 1;
        }
        
    }
    return 0;

}