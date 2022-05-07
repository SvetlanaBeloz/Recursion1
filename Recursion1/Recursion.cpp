#include <iostream>
#include <string>


//   1. �� 1 �� n.
//   ���� ����������� ����� n.�������� ��� ����� �� 1 �� n.
//   ����: 5
//   ����� : 1 2 3 4 5

void ShowNumbers(int n)
{
	if (n != 0) {
		ShowNumbers(n - 1);
		std::cout << n << " ";
	}
}

//  2. �� A �� B.
//  ���� ��� ����� ����� A � �.�������� ��� ����� �� A �� B ������������, � ������� �����������, ���� A < B, ��� � ������� �������� � ��������� ������.
//	����: 5 1
//	����� : 5 4 3 2 1

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

//  3. ������ ������� ������.
//  ���� ����������� ����� N.�������� ����� YES, ���� ����� N �������� ������ �������� ������, ��� ����� NO � ��������� ������.
//  ��������� ���������� � ������� ������������ ������!
//  ����: 3 8
//  ����� : NO YES

void IsNumberPowerOfTwo(int N)
{
	
	if (N % 2 == 0 && N > 2) 
		IsNumberPowerOfTwo(N / 2);	

	if (N % 2 != 0 && N > 2) 
		std::cout << "NO" << "\n";

	if (N == 2)
		std::cout << "YES" << "\n";
}

//  4. ����� ���� �����.
//  ���� ����������� ����� N.��������� ����� ��� ����.
//  ��� ������� ���� ������ ������ ������������ ������, ������, �������, ���������� ����������(�� � �����, ����������).
//  ����: 179
//  ����� : 17

int SumOfDigits(int N)
{
	if (N == 0)
		return 0;
	else 
	{
		return N % 10 + SumOfDigits(N / 10);
	}
}

//  5. ����� ����� ������ ������.
//  ���� ����������� ����� N.�������� ��� ��� ����� �� �����, � �������� �������, �������� �� ���������.
//  ��� ������� ���� ������ ������ ������������ ������, ������, �������(�� � �����, ����������).��������� ������ �������� � ������������� ����������.
//  ����: 179
//  ����� : 9 7 1

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

//  6. ����� ����� ����� �������.
//  ���� ����������� ����� N.�������� ��� ��� ����� �� �����, � ������� �������, �������� �� ��������� ��� ������ ��������.
//  ��� ������� ���� ������ ������ ������������ ������, ������, �������(�� � �����, ����������).��������� ������ �������� � ������������� ����������.
//  ����: 179
//  ����� : 1 7 9

void ShowDigits(int N)
{
	if (N == 0)
		return;
	ShowDigits(N / 10);
	if(N > 0)
		std::cout << N % 10 << " ";
}

//  7. �������� �����.
//  ���� ����� n, ���������� ������ �������� �� �������� �����.�������� �����, ���������� ���� �� �������, �� � ��������������� �������.
//  ��� ������� ���� ������ ������ ������������ �����, ������, ������, �������, ����������� ������ �������� � ������������� ����������.
//  ������� ������ ���������� ����� �����, ���������� ����������� ������ ���������, �������� ����� �� ����� ����� ������.
//  ����: 179
//  ����� : 971

int ReversalOfNumber(int n, int reversedNumber = 0)
{
	if (n == 0)
		return reversedNumber;
	else 
	{
		return ReversalOfNumber(n / 10, n % 10 + reversedNumber * 10);
	}	
}

//  8. ���������.
//  ���� �����, ��������� ������ �� �������� ��������� ����.���������, �������� �� ��� ����� �����������.�������� YES ��� NO.
//  ��� ������� ���� ������ ������ ������������ �������.
//  ����: radar yes
//  ����� : YES NO

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

//  9. ���������.
//  �������� ������� ��� ���������� ��������� ���� ����� ���������, ������ �� ������������� ��������� F(n) = F(n - 1) + F(n - 2).
//  ������� ��������� ������ �����, ���������� �������� �����.

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

//  10. ������� �����.
//  ��������� ������� �����, ��������� ��������.� ������� ��������� 2 ��������� - ����� � �������.

int PowerOfNumber(int number, int power)
{
	if (power == 0)
		return 1;
	else
		return number * PowerOfNumber(number, power - 1);
}

//  11. ����� ����� � ���������.
//  ��������� ����� ����� � ����������� ���������.������ � ����� ��������� ������� ����������� �������.

int Sum(int start, int end)
{
	if (start > end)
		return 0;
	else
		return start + Sum(start + 1, end);
}

//  12. ���.
//  �������� ����������� ������� ���������� ����������� ������ �������� ���� ����� �����.

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
