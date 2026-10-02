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

<img width="363" height="649" alt="image" src="https://github.com/user-attachments/assets/3fb9a742-76ae-4979-ae62-b85efe1ec665" />

# Реализация программы

```
#include <math.h>
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_CTYPE, "RUS");
	double x = -15.246, y = 4.642 * pow(10, -2), z= 20.001 * pow(10,2) , a;
	a = log(pow(y,-sqrt(fabs(x)))) * (x-(y/2)) + pow(sin(atan(z)),2);
	printf("Ваш ответ: %.3lf", a);
}
```
# Пример работы программы:

<img width="267" height="109" alt="image" src="https://github.com/user-attachments/assets/9b873f04-68d1-4610-815e-1f299b6970d2" />

# Информация о разработчике

ФИО: Васянин Александр Сергеевич

Группа: бОТИ-261
