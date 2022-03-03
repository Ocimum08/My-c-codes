#include <iostream>
using namespace std;

bool check_prime(int n);

int main()
{

    int n, i;
    bool flag = false;
    cout << "Enter the positive integer: ";
    cin >> n;
    for (i = 2; i <= n / 2; ++i)
    {
        if (check_prime(i))
        {
            if (check_prime(n - i))
            {
                cout << n << "=" << i << "+" << n - i << endl;
                flag = true;
            }
        }
    }
    if (!flag)
    {
        cout << n << "can't be expressed as sum of two prime numbers.";
    }

    return 0;
}
bool check_prime(int n)
{
    int i;
    bool isPrime = true;
    if (n == 0 || n == 1)
    {
        isPrime = false;
    }
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}