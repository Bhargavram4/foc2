#include <stdio.h>
int main()
 {
    int i,limit;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    for ( i = 1; i <= limit; i++) 
	{
        if (i % 2 == 1)
		 {
            int square = i * i;
            printf("%d^2 = %d\n", i, square);
        }
    }

    return 0;
}
