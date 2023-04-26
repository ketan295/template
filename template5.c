#include <stdio.h>

main()
{
    int n, rev = 0, remainder, original;
    
    
     
    
    
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    printf("\noriginal number is :%d\n ",n);
    original=n;
   

    while (n != 0) {
        remainder = n % 10;
        rev = rev*10+remainder;
        n /= 10;
       
    }
    printf("\nyour reversed num is:%d\n",rev);

    
    if (original == rev)
        printf("\n%d is a palindrome number.\n", rev);
    else
        printf("\n%d is not a palindrome number\n", rev);
}

  
