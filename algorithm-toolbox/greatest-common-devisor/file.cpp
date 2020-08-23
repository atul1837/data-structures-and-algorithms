#include <iostream>
using namespace std;

int gcd(int i, int j)
{
    if (i == 0)
    {
        return j;
    }

    if (j == 0)
    {
        return i;
    }

    return i > j ? gcd(i % j, j) : gcd(i, j % i);
}

int main()
{
    int i, j;
    cout << "Enter two space separated integers" << endl;
    cin >> i >> j;
    cout << gcd(i, j) << endl;
    return 0;
}