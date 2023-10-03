#include <iostream>
#include <string>
#include <stdio.h>
#include <cctype>
#include <algorithm>
#include <vector>
#include <sstream>
#include <cstring>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ukr");


	////////////////////////////////////////////////////////  Task #1  /////////////////////////////////////////


	/*char str[100];
	
	fgets(str,50,stdin);
	for (int i = 0; str[i]!='\0'; i++)
	{
		if (str[i] == ' ')
		{
			str[i] = '\t';
		}
	}
	printf_s("New string:\n%s", str);
*/





	////////////////////////////////////////////////////////  Task #2  /////////////////////////////////////////
	
											// Не рахуе украЇнські букви !!!


	/*string inputStr;
	unsigned int numberOfLetters = 0;
	unsigned int numberOfDigits = 0;
	unsigned int numberOfChar = 0;

	printf_s("Введіть речення:");
	::getline(cin, inputStr);

	for (char c:inputStr)
	{
		if (isalpha(c))
		{
			numberOfLetters++;
		}
		else if (isdigit(c))
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
		"Кількість інших символів у речені = %d\n", numberOfLetters, numberOfDigits, numberOfChar);*/





	////////////////////////////////////////////////////////  Task #3  /////////////////////////////////////////

	/*string inputStr;
	getline(cin, inputStr);

	vector<string> array;

	istringstream newStr(inputStr);
	string s;

	while (getline(newStr, s, ' '))
		array.push_back(s);

	printf_s("Кількість слів = %d", size(array));
	*/




	////////////////////////////////////////////////////////  Task #4  /////////////////////////////////////////

	//string inputStr,stringLower,strReverse;

	//getline(cin, inputStr);
	//inputStr.erase(::remove_if(inputStr.begin(), inputStr.end(), ::isspace), inputStr.end());

	//for (int i = 0; i < inputStr.length(); i++)
	//{
	//	stringLower.push_back(tolower(inputStr[i]));
	//}

	//strReverse = stringLower;
	//reverse(strReverse.begin(), strReverse.end());

	//bool palindrom = strReverse == stringLower;
	//
	//if (palindrom)
	//{
	//	cout << "Рядок є паліндромом." << endl;
	//}
	//else
	//{
	//	cout << "Рядок не є паліндромом." << endl;
	//}

}
