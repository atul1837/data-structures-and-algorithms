#include <iostream>
using namespace std;

void printArray(int arr[],int size) {
    for(int i=0;i<size;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swap(int arr[],int fi,int si,int d) {
    for(int i=0;i<d;i++) {
        int temp = arr[fi+i];
        arr[fi+i] = arr[si+i];
        arr[si+i] = temp;
    }
}

void leftRotate(int arr[],int d,int n) {
    if(d==0||d==n) {
        return;
    }
    if(n-d==d) {
        swap(arr,0,n-d,d);
    }
    if(d<n-d) {
        swap(arr,0,n-d,d);
        leftRotate(arr,d,n-d);
    }else {
        swap(arr,0,d,n-d);
        leftRotate(arr+n-d,2*d-n,d);
    }
}

int main() {
    int n;
    cin >> n;
    int d;
    cin >> d;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >>arr[i];
    }
    leftRotate(arr,d,n);
    printArray(arr,n);
    return 0;
}