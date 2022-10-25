#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    int i, j, n;
    int a[10][10] = {0},b[10][10] = {0};
    cout<<"Enter the order of matrix ";
    cin>>n;
    cout<<"Enter the elements\n";
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cin>>a[i][j];
        }
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    cout<<endl<<"Original Matrix\n";
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout<<a[i][j]<<"    ";
        }
        cout<<endl;
    }
    cout<<endl<<"Transpose Matrix\n";
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout<<b[i][j]<<"    ";
        }
        cout<<endl;
    }
    getch();
}
