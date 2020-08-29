#include <iostream>

int get_fibonacci_last_digit_naive(int n)
{
    if (n <= 1)
        return n;

    int previous = 0;
    int current = 1;

    for (int i = 0; i < n - 1; ++i)
    {
        int tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % 10;
}

int get_fibonacci_last_digit_fast(int n)
{
    // it is noticed that the last digit of fibonacci numbers in the fibonacci series tend to repeat itself after the 60th element
    n %= 60;
    unsigned long long first_previous = 0;
    unsigned long long second_previous = 1;
    unsigned long long current;
    if (n <= 1)
    {
        return n;
    }
    for (int i = 2; i <= n; i++)
    {
        current = (first_previous + second_previous);
        first_previous = second_previous;
        second_previous = current;
    }
    return current % 10;
}

int main()
{
    int n;
    std::cin >> n;
    std::cout << get_fibonacci_last_digit_fast(n) << '\n';
}
