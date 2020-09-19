#include <iostream>
using namespace std;

void rotateArray(int arr[], int d, int n)
{
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    int j = 0;
    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[j++];
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n, d;
        cin >> n;
        int arr[n];
        cin >> d;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        rotateArray(arr, d, n);
        printArray(arr, n);
    }
    return 0;
}