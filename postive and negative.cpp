#include <stdio.h>
int main()
 {
   int number;
   printf("Enter an integer: ");
   scanf("%d", &number);
   if (number > 0) 
   {
      printf("%d is a positive number.\n", number);
   } 
   else if (number < 0) 
   {
      printf("%d is a negative number.\n", number);
   }
    else 
	{
      printf("you entered zero.\n");
   }

   return 0;
}
