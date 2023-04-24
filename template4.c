#include <stdio.h>
main()
{
    int n, sum=0, fd, ld;
    printf("Enter number to find sum of first and last digit = ");
    scanf("%d", &n);
  
    ld= n%10;
   
    while(n >= 10)
    {
        n = n / 10;
    }
    fd=n;
    sum = fd+ld;
    printf("Sum of first and last digit = %d", sum);
}
