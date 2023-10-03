#include <iostream>
#include <cctype>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	////////////////////////////////////////////////////////  Task #1  /////////////////////////////////////////
	//char str[100];

	//fgets(str, 50, stdin);
	//for (int i = 0; str[i] != '\0'; i++)
	//{
	//	if (str[i] == ' ')
	//	{
	//		str[i] = '\t';
	//	}
	//}
	//printf_s("New string:\n%s", str);





	////////////////////////////////////////////////////////  Task #2  /////////////////////////////////////////


	string inputStr;
	unsigned int numberOfLetters = 0;
	unsigned int numberOfDigits = 0;
	unsigned int numberOfChar = 0;

	printf_s("Введіть речення:");
	::getline(cin, inputStr);

	for (auto item : inputStr)
	{
		if (isalpha(item))
		{
			numberOfLetters++;
		}
		else if (isdigit(item)) 
		{
			numberOfDigits++;
		}
		else
		{
			numberOfChar++;
		}
	}
	printf_s("Кількість букв у речені = %d\n"
		"Кількість цифр у речені = %d\n"
		"Кількість інших символів у речені = %d\n", numberOfLetters, numberOfDigits, numberOfChar);

}
