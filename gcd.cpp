#include<iostream>
using namespace std;
int gcd(int x, int y)
{
    if (x == 0)
        return y;
    return gcd(y % x, x);
}
int main()
{
    int a = 10, b = 100;
    cout << "GCD = " << gcd(a, b);
return 0;
}