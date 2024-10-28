#include <iostream>

int main()
{


	float f, c, F, C;
	printf("vv temperatura v F\n");
	scanf_s("%f", &f);
	printf("vv temperatura v C\n");
	scanf_s("%f", &c);
	C = (f - 32) * (5./ 9);
    F = c * (9./ 5) + 32;
	printf("temperatura v C = %f\n", C);
	printf("temperatura v F = %f\n", F);


	return 0;
}
