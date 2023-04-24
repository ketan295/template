#include<stdio.h>

main()

{
	int i=1,n=10,num,mul;
	
	printf("enter which number table do you want :");
	scanf("%d",&num);
	
	for (i=1;i<=n;i++)
	{
		mul=i*num;
		printf("%d*%d=%d\n",num,i,mul);
	}
}
