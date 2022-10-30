#include<iostream>
#include<utility>

using namespace std;

float cp(pair<float, float> a, pair<float, float> b, pair<float, float> c)
{
    return (b.first - a.first)*(c.second - b.second) - (c.first - b.first)*(b.second - a.second);
}

int main()
{
    pair<float, float> p1, q1, p2, q2;

    printf("enter the points of P1\n");
    scanf("%f %f", &p1.first, &p1.second);
    printf("enter the points of Q1\n");
    scanf("%f %f", &q1.first, &q1.second);
    printf("enter the points of P2\n");
    scanf("%f %f", &p2.first, &p2.second);
    printf("enter the points of Q2\n");
    scanf("%f %f", &q2.first, &q2.second);

    float p1q1p2 = cp(p1, q1, p2), p1q1q2 = cp(p1, q1, q2), p2q2p1 = cp(p2, q2, p1), p2q2q1 = cp(p2, q2, q1);

    if((p1q1p2*p1q1q2 == 0) && (p2q2p1*p2q2q1 == 0))
    {
        if(((p2.first - p1.first)*(p2.first - q1.first) < 0)||((p2.second - p1.second)*(p2.second - q1.second) < 0)||((q2.first - p1.first)*(q2.first - q1.first) < 0)||((q2.second - p1.second)*(q2.second - q1.second) < 0)||((p1.first - p2.first)*(p1.first - q2.first) < 0)||((p1.second - p2.second)*(p1.second - q2.second) < 0)||((q1.first - p2.first)*(q1.first - q2.first) < 0)||((q1.second - p2.second)*(q1.second - q2.second) < 0)) printf("Yes");
        else printf("No");
    }
    else if((p1q1p2*p1q1q2 < 0 || p1q1p2*p1q1q2 == 0)&&(p2q2p1*p2q2q1 < 0 || p2q2p1*p2q2q1 == 0)) printf("Yes");
    else printf("No");

    return 0;
}