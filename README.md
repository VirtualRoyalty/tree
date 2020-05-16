# Алгоритмы и структуры данных (ADS-3)

## Задание

> Написать реализацию алгоритмов перевода арифметического выражения из инфиксной формы в постфиксную и вычисления выражения, записанного в постфиксной форме.

## Пояснение

В лекции **Стек на массиве** приводится описание алгоритмов перевода арифметического выражения, заданного в виде строки из инфиксной формы в префиксную, то есть например:

`(2+2)*(3-1)` преобразуется в `22+31-*`

Предполагается:

- входная строка содержит правильно построенное выражение
- числа одноразрядные и положительные

Для перевода из одной формы в другую мы используем стек, построенный на основе шаблона. Этот стек описан в файле **include/tstack.h**.

Для использования стека достаточно его инстанцировать с указанием типа данных:

```C++
TStack<char> stack1;
TStack<int> stack2;
```

Функции должны иметь следующую сигнатуру и располагаться в файле **src/alg.cpp**:


```C++
// преобразование выражение в постфиксную форму
std::string infx2pstfx(std::string inf)
{

}
// вычисление выражения, записанного в постфиксной форме
int eval(std::string pst)
{

}

```
Описания параметров функций:

- **inf** - строка, содержащая запись арифметического выражения в инфиксной форме, например "(2+2)*2"
- **pst** - строка, содержащая запись арифметического выражения в постфиксной форме, например "22+2*"

В этом задании в качестве строк используется тип **std::string** из стандартной библиотеки С++

Описания функций:

- Функция **infx2pstfx** должна преобразовывать входную строку, содержащую выражение в инфиксной форме в выходную строку, которая содержит то же выражение в постфиксной фоме.
- Функция **eval** должна вычислять выражение, записанное в постфиксном виде и выдавать целое значение. Все расчеты ведутся в целых числах!

Помимо указанных функций, в файл **alg.cpp** можно помещать определения вспомогательных функций.
