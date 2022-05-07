#include <iostream>
#include <string>


//   1. От 1 до n.
//   Дано натуральное число n.Выведите все числа от 1 до n.
//   Ввод: 5
//   Вывод : 1 2 3 4 5

void ShowNumbers(int n)
{
	if (n != 0) {
		ShowNumbers(n - 1);
		std::cout << n << " ";
	}
}

//  2. От A до B.
//  Даны два целых числа A и В.Выведите все числа от A до B включительно, в порядке возрастания, если A < B, или в порядке убывания в противном случае.
//	Ввод: 5 1
//	Вывод : 5 4 3 2 1

void ShowNumberRange(int A, int B)
{

	if (A < B) {
		ShowNumberRange(A, B - 1);
		std::cout << B << " ";
	}

	else if (A > B) {
		ShowNumberRange(A, B + 1);
		std::cout << B << " ";
	}
	else 
		std::cout << B << " ";
}

//  3. Точная степень двойки.
//  Дано натуральное число N.Выведите слово YES, если число N является точной степенью двойки, или слово NO в противном случае.
//  Операцией возведения в степень пользоваться нельзя!
//  Ввод: 3 8
//  Вывод : NO YES

void IsNumberPowerOfTwo(int N)
{
	
	if (N % 2 == 0 && N > 2) 
		IsNumberPowerOfTwo(N / 2);	

	if (N % 2 != 0 && N > 2) 
		std::cout << "NO" << "\n";

	if (N == 2)
		std::cout << "YES" << "\n";
}

//  4. Сумма цифр числа.
//  Дано натуральное число N.Вычислите сумму его цифр.
//  При решении этой задачи нельзя использовать строки, списки, массивы, глобальные переменные(ну и циклы, разумеется).
//  Ввод: 179
//  Вывод : 17

int SumOfDigits(int N)
{
	if (N == 0)
		return 0;
	else 
	{
		return N % 10 + SumOfDigits(N / 10);
	}
}

//  5. Цифры числа справа налево.
//  Дано натуральное число N.Выведите все его цифры по одной, в обратном порядке, разделяя их пробелами.
//  При решении этой задачи нельзя использовать строки, списки, массивы(ну и циклы, разумеется).Разрешена только рекурсия и целочисленная арифметика.
//  Ввод: 179
//  Вывод : 9 7 1

void ShowInvertedNumber(int N)
{
	if (N > 10)
		std::cout << N % 10 << " ";
	else if (N < 10 && N > 0)
		std::cout << N << " ";
	else
		return;
	ShowInvertedNumber(N / 10);
}

//  6. Цифры числа слева направо.
//  Дано натуральное число N.Выведите все его цифры по одной, в обычном порядке, разделяя их пробелами или новыми строками.
//  При решении этой задачи нельзя использовать строки, списки, массивы(ну и циклы, разумеется).Разрешена только рекурсия и целочисленная арифметика.
//  Ввод: 179
//  Вывод : 1 7 9

void ShowDigits(int N)
{
	if (N == 0)
		return;
	ShowDigits(N / 10);
	if(N > 0)
		std::cout << N % 10 << " ";
}

//  7. Разворот числа.
//  Дано число n, десятичная запись которого не содержит нулей.Получите число, записанное теми же цифрами, но в противоположном порядке.
//  При решении этой задачи нельзя использовать циклы, строки, списки, массивы, разрешается только рекурсия и целочисленная арифметика.
//  Функция должна возвращать целое число, являющееся результатом работы программы, выводить число по одной цифре нельзя.
//  Ввод: 179
//  Вывод : 971

int ReversalOfNumber(int n, int reversedNumber = 0)
{
	if (n == 0)
		return reversedNumber;
	else 
	{
		return ReversalOfNumber(n / 10, n % 10 + reversedNumber * 10);
	}	
}

//  8. Палиндром.
//  Дано слово, состоящее только из строчных латинских букв.Проверьте, является ли это слово палиндромом.Выведите YES или NO.
//  При решении этой задачи нельзя пользоваться циклами.
//  Ввод: radar yes
//  Вывод : YES NO

std::string IsPalindrome(std::string word, int x = 0)
{
	std::string word2;

	if (word[x] != '\0') 
		word2 = IsPalindrome(word, x + 1);
	else 
		return std::string();

	word2 += word[x];
	if (x == 0)
	{
		if (word == word2) 
			std::cout << "YES" << std::endl;
		else 
			std::cout << "NO" << std::endl;
	}
	return word2;
}

//  9. Фибоначчи.
//  Написать функцию для вычисления элементов ряда чисел Фибоначчи, исходя из рекуррентного выражения F(n) = F(n - 1) + F(n - 2).
//  Функция принимает индекс числа, возвращает значение числа.

int Fibonacci(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else if (n == 2)
		return 1;
	else
		return Fibonacci(n - 1) + Fibonacci(n - 2);
}

//  10. Степень числа.
//  Вычислить степень числа, используя рекурсию.В функцию передаётся 2 параметра - число и степень.

int PowerOfNumber(int number, int power)
{
	if (power == 0)
		return 1;
	else
		return number * PowerOfNumber(number, power - 1);
}

//  11. Сумма чисел в диапазоне.
//  Вычислить сумму чисел в определённом диапазоне.Начало и конец диапазона задаётся параметрами функции.

int Sum(int start, int end)
{
	if (start > end)
		return 0;
	else
		return start + Sum(start + 1, end);
}

//  12. НОД.
//  Написать рекурсивную функцию нахождения наибольшего общего делителя двух целых чисел.

int GreatestCommonDivisor(int a, int b)
{
	if (a == b)
		return a;
	if (a > b)
		return GreatestCommonDivisor(a - b, b);
	return GreatestCommonDivisor(a, b - a);
}




int main()
{
	ShowNumbers(5);
	std::cout << std::endl;
	ShowNumberRange(10, 5);
	std::cout << std::endl;
	IsNumberPowerOfTwo(12);
	std::cout << SumOfDigits(5627);
	std::cout << std::endl;
	ShowInvertedNumber(179);
	std::cout << std::endl;
	ShowDigits(179);
	std::cout << std::endl;
	std::cout << ReversalOfNumber(179);
	std::cout << std::endl;
	IsPalindrome("radar");
	std::cout << Fibonacci(12);
	std::cout << std::endl;
	std::cout << PowerOfNumber(2, 4);
	std::cout << std::endl; 
	std::cout << Sum(1, 5);
	std::cout << std::endl;
	std::cout << GreatestCommonDivisor(125, 350);
	std::cout << std::endl;
} 
