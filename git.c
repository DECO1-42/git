#include<stdio.h>
#include<math.h>

int main()
{
	float x,y;
	printf("Vvedite znachenie x "); //Обращение к пользовактелю с запросом переменной
	scanf("%f",&x); //Считывание згачения
	y=cos(x); //Вучисление значения у
	y=y*2;
	printf("Otvet %f", y); //Вывод ответа
}
