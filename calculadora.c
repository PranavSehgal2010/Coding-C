#include<stdio.h>

int main()
{
	float num1, num2;
	char op;
    printf("quers fazer que (+,-,*,/):\n");
	scanf_s("%c", &op);
	printf("diz o primario numero:\n");
	scanf_s("%f", &num1);
	printf("diz o segundo numero:\n");
	scanf_s("%f", &num2);

	switch (op)
	{
	case '+':
		printf("resultado: %.2f\n", num1 + num2);
		break;
	case '-':
		printf("resultado: %.2f\n", num1 - num2);
		break;
	case '*':
		printf("resultado: %.2f\n", num1 * num2);
		break;
	case '/':
		printf("resultado: %.2f\n", num1 / num2);
		break;
	default:
		printf("invalid op");

	}

	return 0;
	

}