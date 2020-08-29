#include <iostream>

unsigned long long gcd(int i, int j)
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

long long lcm_naive(int a, int b)
{
    for (long l = 1; l <= (long long)a * b; ++l)
        if (l % a == 0 && l % b == 0)
            return l;
    return (long long)a * b;
}

unsigned long long lcm_fast(unsigned long long a, unsigned long long b)
{
    return (unsigned long long)(a * b) / gcd(a, b);
}

int main()
{
    unsigned long long a, b;
    std::cin >> a >> b;
    std::cout << lcm_fast(a, b) << std::endl;
    return 0;
}
