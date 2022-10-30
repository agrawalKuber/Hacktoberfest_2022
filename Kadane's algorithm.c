#include<stdio.h>
int main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d", &n);
    printf("\nEnter elements : ");
    int a[n], current_best, overall_best, i;
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    current_best = 0; overall_best = 0;
    for(i=0;i<n;i++)
    {
        if(current_best + a[i] > a[i])
        {
            current_best+=a[i];
        }
        else 
        {
            current_best = a[i];
        }
        if(current_best > overall_best) 
        {
            overall_best = current_best;
        }
    }
    printf("%d", overall_best);

    return 0;
}

//https://www.youtube.com/watch?v=VMtyGnNcdPw&ab_channel=Pepcoding