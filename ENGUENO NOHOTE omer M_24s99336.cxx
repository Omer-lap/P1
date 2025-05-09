#include <stdio.h>
#define nmax 100
int main()
{
	int n, i, j, temp;
	scanf("%d", &n);
	int tab[n];
	for (i = 0; i < n; i++)
		scanf("%d", &tab[i]);
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[j];
				tab[i] = tab[j];
				tab[j] = temp;
			}
		}
		printf("%d", tab[i]);
	}
	printf("\n");
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (tab[i] < tab[j])
			{
				temp = tab[j];
				tab[i] = tab[j];
				tab[j] = temp;
			}
		}
		printf("%d", tab[n]);
	}
	printf("\n");
	return 0;
};
