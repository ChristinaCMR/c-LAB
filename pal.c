#include<stdio.h>
int main()
{
	int n,rem,org;
	int rev=0;
	printf("enter an integer");
	scanf("%d",&n);
	org=n;
	//reversed integer is stored in reversed variable
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	//palindrome if original and reversed are equal
	if(org==rev)
	printf("%d is a palindrome",org);
	else
	printf("%d is not a palindrome",org);
	return 0;
	}
