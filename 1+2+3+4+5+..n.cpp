#include <stdio.h>
#include <math.h>
int main()
 {
    int i, n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    int sum = 0;
    for (i = 1; i <= n; i++) 
	{
        int power = pow(i, i);
        sum += power;
    }
      printf("the sum is %d\n", sum);
      return 0;
}
