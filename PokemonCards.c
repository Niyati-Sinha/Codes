/* Read input from STDIN. Print your output to STDOUT*/
#include<stdio.h>
int main(int argc, char *a[])
{
	int no_of_test_case;
	scanf("%d",&no_of_test_case);
	for(int i=1; i<=no_of_test_case;i++)
	{
		int p,d,n;
		scanf("%d",&p);
		scanf("%d",&n);
		scanf("%d",&d);
		printf("%d\n",p+(n*(d-1)));
	}
	return 0;

}
