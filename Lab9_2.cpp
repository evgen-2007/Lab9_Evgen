#include <iostream>

int main()
{


	float a, b, A, B, C, D;
	printf("vv chislo odin\n");
	scanf_s("%f", &a);
	printf("vv chislo dva\n");
	scanf_s("%f", &b);
	A = a + b;
	B = a - b;
	C = a * b;
	D = a / b;
	printf("Suma = %f\n", A);
	printf("Riznica = %f\n", B);
	printf("Mnozhena = %f\n", C);
	printf("Dilenna = %f\n", D);


	return 0;
}