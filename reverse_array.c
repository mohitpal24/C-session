#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i , j;


    scanf("%d\n", &n);
    int *a = (int *)malloc(n * sizeof(int));
    int *b = (int*) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &a[i]);
    }

    /* Write the logic to reverse the array. */

    
    for (i = n - 1; j = 0; i >= 0, i--, j++)
    {
        b[j] = a[i];
    }
    for (i = 0; i < n; i++)
    {
        a[i] = b[i];
    }

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;

}
