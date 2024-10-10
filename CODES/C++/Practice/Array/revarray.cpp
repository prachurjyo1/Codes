#include<iostream>
using namespace std;

void revarray(int arr[],int n,int newarr[]){

    for (int i = 0; i < 5; i++)
    {
        newarr[i]=arr[4-i];
    }
}

int main (){
    cout<<"      hello    "<<endl<<endl<<"Entering  :"<<endl<<endl;
    int arr [5] ={1,2,3,4,5};
    int newarr[5];
    revarray(arr,5,newarr);

    for (int i = 0; i < 5; i++)
    {
        cout<<" In Rev Order :"<<endl<<newarr[i]<<endl;
    }
    
}