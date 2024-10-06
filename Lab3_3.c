#include<stdio.h>
#include<locale.h>
void main() {
	setlocale(0, "Russian");
	int num1;
	int num2;
	puts("¬ведите первое число");
	scanf("%i", &num1);
	puts("¬ведите второе число");
	scanf("%i", &num2);
	printf("___________________\n| a*b | a+b | a-b |\n-------------------\n|%d * %d|%d + %d|%d - %d|\n-------------------\n|  %d  | %d  | %d  |", num1, num2, num1, num2, num1, num2, num1 * num2, num1 + num2, num1 - num2);


}