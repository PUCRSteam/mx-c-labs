#include <stdio.h>
#include <math.h>

int testa_lados(float l1, float l2, float l3)
{
	if (l1 >= (l2 + l3) || l2 >= (l1 + l3) || l3 >= (l1 + l2)) {
		return 0;
	} else {
		return 1;
	}
}

float area_triangulo(float l1, float l2, float l3)
{
	float sp, area;

	sp = (l1 + l2 + l3) / 2.0;
	area = sqrt(sp * (sp - l1) * (sp - l2) * (sp - l3));

	return area;
}

int main(void)
{
	float l1, l2, l3, area;
	int t;

	printf("lado 1:");
	scanf("%f", &l1);
	printf("lado 2:");
	scanf("%f", &l2);
	printf("lado 3:");
	scanf("%f", &l3);

	t = testa_lados(l1, l2, l3);

	if (t == 0) {
		printf("valores invalidos\n");
	} else {
		area = area_triangulo(l1, l2, l3);
		printf("area: %f\n", area);
	}

	return 0;
}
