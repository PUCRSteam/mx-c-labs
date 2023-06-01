#include <stdio.h>

void linha_branco(void)
{
	printf("\n");
}

int main(void)
{
	int i;

	for (i = 0; i < 25; i++) {
		linha_branco();
	}

	return 0;
}
