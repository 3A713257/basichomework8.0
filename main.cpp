#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int i,prm,n;
	printf ("Show all the prime numbers of 1-n.\n");
	for (;;)
	{
		printf ("n= ");
		scanf ("%d",&n);
	
		if (n<=1)
		printf ("There is no prime number in this range, please enter again.\n");
		else
		{
			printf ("The prime number(s) of 1-%d is(are):\n",n);
			for (prm=1; prm<=n; prm++)
			{
				for (i=2; i<=n; i++)
				{
					if (prm%i==0)
					break;
				}
				if (prm==i)
				printf("%d\n",prm);
			}
			break;
		}
	}
	
	system ("pause");
	return 0;
}
