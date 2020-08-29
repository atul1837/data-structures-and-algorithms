#include <iostream>

long long get_fibonacci_huge_naive(long long n, long long m)
{
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current = 1;

    for (long long i = 0; i < n - 1; ++i)
    {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % m;
}

long long get_fibonacci_huge_fast(long long n, long long m)
{
    if (n < 1)
    {
        return n;
    }
    long long first = 0;
    long long second = 1;
    long long period = 0;
    for (long long i = 2; i <= n; i++)
    {
        long long current = (first + second) % m;
        first = second;
        second = current;

        if (i >= 3 && second == 1 && first == 0)
        {
            period = i - 1;
            break;
        }
    }

    if (!period)
    {
        return second;
    }

    n %= period;
    if (!n)
    {
        return 0;
    }

    first = 0;
    second = 1;
    for (int i = 2; i <= n; i++)
    {
        long long current = (first + second) % m;
        first = second;
        second = current;
    }
    return second;
}

int main()
{
    long long n, m;
    std::cin >> n >> m;
    std::cout << get_fibonacci_huge_fast(n, m) << '\n';
}
