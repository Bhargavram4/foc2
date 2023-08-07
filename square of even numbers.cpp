#include <stdio.h>
int main()
 {
    int i, n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Even square numbers up to %d:\n", n);
    for ( i = 2; i*i <= n; i += 2) 
	{
        printf("%d ", i*i);
    }

    printf("\n");
    return 0;
}````````
