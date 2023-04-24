#include <stdio.h>

main()
{
  int n, rev = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    while (n != 0) {
        remainder = n % 10;
        rev = rev*10+remainder;
        n /= 10;
       
    }
     printf("your reversed num is:%d\n",rev);

    
    if (original == rev)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome number", original);
}

  
