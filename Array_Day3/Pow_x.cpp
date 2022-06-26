#include <bits/stdc++.h>
using namespace std;
double myPow(double x, int n)
{
    int ans;
    if (n == 0)
    {
        return 1;
    }
    if (n < 0)
    {
        n = abs(n);
        x = 1 / x;
    }
    if (n % 2 == 0)
    {
        return myPow(x * x, n / 2);
    }
    else
    {
        return x * myPow(x * x, n / 2);
    }
}
int main()
{
    double x = 2.0000;
    int n = 10;
    cout<<myPow(x, n);
    return 0;
}