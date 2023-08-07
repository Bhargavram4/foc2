#include <stdio.h>
int main()
 {
    int n, i, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
	 {
        sum += i*i*i;
    }

    printf("The sum of cubes of first %d numbers is: %d\n", n, sum);

    return 0;
}
