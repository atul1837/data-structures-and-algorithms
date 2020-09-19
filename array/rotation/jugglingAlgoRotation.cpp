#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

void rotateArray(int arr[], int d, int n)
{
    d %= n;
    int g = gcd(d, n);
    for (int i = 0; i < g; i++)
    {
        int temp = arr[i];
        int j = i;
        while (true)
        {
            int k = j + d;
            if (k >= n)
                k = k - n;
            if (k == i)
                break;
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
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