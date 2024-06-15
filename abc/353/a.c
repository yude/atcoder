#include <stdio.h>

int
main()
{
	int n;
	int h[100];

	scanf("%d", &n);
	
	for (int i = 0; i < 100; i++)
	{
		int a;
		scanf("%d", &a);
		
		if (a > n)
		{
			printf("%d", i + 1);
			return 0;
		}
	}
	
	printf("-1");
}




