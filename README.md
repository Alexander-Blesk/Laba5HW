# Laba5HW
# Домашняя работа (Условие)

<img width="777" height="111" alt="image" src="https://github.com/user-attachments/assets/17dc4472-7c4b-4a00-80df-3b5cb70f5bbc" />

# Алгоритм и блок-схема

1. Начало
   
2. Объявить переменные :

 double x = -15.246, y = 4.642 * pow(10, -2), z= 20.001 * pow(10,2) , a;

3. Записать в переменную а условие задачи:

a = log(pow(y,-sqrt(fabs(x)))) * (x-(y/2)) + pow(sin(atan(z)),2);

4. Вывести ответ в консоли с тремя знаками после запятой:

printf("Ваш ответ: %.3lf", a);

6. Конец

# Блок-схема 
<img width="526" height="758" alt="image" src="https://github.com/user-attachments/assets/4bcbe98b-0359-49fd-b716-08655ad51297" />



# Реализация программы

```
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_CTYPE, "RUS");
	int A, B, res;
	printf("=== СИСТЕМА КОНТРОЛЯ ДОСТУПА ===\n");
	printf("Введите два целых числа: ");
	scanf("%d %d", &A, &B);
	res = (A % 2 == 0) && (B % 2 == 0);
	printf("Доступ разрешен (1 - да , 0 - нет): %d\n", res);
	return 0;
}

```
# Пример работы программы при вводе цен 10 и 8

Введите число А:

10

Введите число В:

8

Доступ разрешен (1 - да , 0 - нет): 1

# Информация о разработчике

ФИО: Васянин Александр Сергеевич

Группа: бОТИ-261
