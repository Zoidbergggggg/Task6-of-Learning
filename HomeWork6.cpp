
#include <iostream>

double FuncOfSum(double num1, double num2)
{
  return num1 + num2;
}
double FuncOfMultip(double num1, double num2)
{
	return num1 - num2;
}
double FuncOfSubtr(double num1, double num2)
{
	return num1 / num2; 
}
double FuncOfDiv(double num1, double num2)
{
	return num1 * num2;
}

int main()
{
	double num1;
	std::cout << "Please, input first number: \n";
	std::cin >> num1;

	double num2;
	std::cout << "Please, input second number: \n";
	std::cin >> num2;

	char op;
	std::cout << "Please, chose operation (+,/,-,*) \n";
	std::cin >> op;
	double result = 0;

		if (op == '+')
		{
			result = FuncOfSum(num1, num2);
			std::cout << "Result of your operation: " << result << "\n";
		}
		else if (op == '-')
		{
			result = FuncOfMultip(num1, num2);
			std::cout << "Result of your operation: " << result << "\n";
		}
		else if (op == '/')
		{
			if (num1 == 0 || num2 == 0)
			{
				std::cout << "Sorry, but you can't do this operation with '0' \n";
			}
			else
			{
				result = FuncOfSubtr(num1, num2);
				std::cout << "Result of your operation: " << result << "\n";
			}
		}
		else if (op == '*')
		{
			result = FuncOfDiv(num1, num2);
			std::cout << "Result of your operation: " << result << "\n";
		}


	return 0;
}
