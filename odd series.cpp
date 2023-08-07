#include <stdio.h>
int main()
 {
    int i,n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    int sum = 0;
    for (i = 1; i <= n; i += 2) 
	{
        sum += i;
    }

    printf("the sum of the series is %d\n", sum);

    return 0;
}
