
#include <stdio.h> //Підключення бібліотеки

int main() //Підключення головної функції
{
	float num1 = 0.0, num2 = 0.0; //Введення зміних
	printf("calculator\n\nvv two numbers:\n"); //Виведення тексту на екран
	scanf_s("%f", & num1); //Зчитування даних та їх запис у змінну num1
	scanf_s("%f", & num2); //Зчитування даних та їх запис у змінну num2

	float sum, sub, mult, div; //Введення змінних
	sum = num1 + num2; //Дія додавання
	sub = num1 - num2; //Дія віднімання
	mult = num1 * num2; //Дія множення
	div = num1 / num2; //Дія ділення

	printf("result sum: %f\n", num1 + num2); //Виведення тексту на екран
	printf("result sub: %f\n", num1 - num2); //Виведення тексту на екран
	printf("result mult: %f\n", num1 * num2); //Виведення тексту на екран
	printf("result div: %f\n", num1 / num2); //Виведення тексту на екран

	return 0; //Успішне завершення програми
}

