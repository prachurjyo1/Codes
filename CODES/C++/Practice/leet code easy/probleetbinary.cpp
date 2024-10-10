#include<iostream>
using namespace std;


int main() {
    int N;
    cin >> N;  

    int arr[N];  
    for (int i = 0; i < N; i++) {
        cin >> arr[i];  
    }

    int maxN = arr[0];  
    for (int i = 1; i < N; i++) {
        if (arr[i] > maxN) {
            maxN = arr[i];  
        }
    }

    cout << maxN << endl;  

    return 0;
}

