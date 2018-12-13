#include <stdio.h>
int mp();
int main()
{
	//if(mp()) return 0;
	int n1, n2, n3;
	scanf("%d %d %d", &n1, &n2, &n3);

	if (n1 == n2 && n2 == n3)
		printf("%d->%d->%d", n1, n2, n3);

	if (n1 < n2 && n1 < n3)
		printf("%d->", n1);
	if (n2 < n1 && n2 < n3)
		printf("%d->", n2);
	if (n3 < n1 && n3 < n2)
		printf("%d->", n3);

	if ((n1 < n2 && n1 > n3) || (n1 > n2 && n1 < n3))
		printf("%d->", n1);
	if ((n2 < n1 && n2 > n3) || (n2 > n1 && n2 < n3))
		printf("%d->", n2);
	if ((n3 < n1 && n3 > n2) || (n3 > n1 && n3 < n2))
		printf("%d->", n3);

	if (n1 > n2 && n1 > n3)
		printf("%d", n1);
	if (n2 > n1 && n2 > n3)
		printf("%d", n2);
	if (n3 > n1 && n3 > n2)
		printf("%d", n3);
}

int main0()
{
	int n[3];
	scanf("%d %d %d", &n[0], &n[1], &n[2]);
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (n[j] > n[j + 1])
			{
				int tmp = n[j];
				n[j] = n[j + 1];
				n[j + 1] = tmp;
			}
		}
	}
	printf("%d->%d->%d", n[0], n[1], n[2]);
}
