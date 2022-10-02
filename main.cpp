#include <iostream>
#include "calculate.h"

using namespace std;

int main()
{
	char op; //Operator

	while (true)
	{
		system("cls");
		int a = 0;
		int b = 0;
		cout << "Input operator (+, -, *, /, !, ^) or \"q\" for exit." << endl;
		cin >> op;
		switch (op)
		{
		case '+':
		{
			cout << "Input two operands (<Int> <Int>):" << endl;
			cin >> a >> b;
			cout << a << " + " << b << " = " << sum(a, b) << endl;
			system("pause");
			break;
		}
		case '-':
		{
			cout << "Input two operands (<Int> <Int>):" << endl;
			cin >> a >> b;
			cout << a << " - " << b << " = " << sum(a, -b) << endl;
			system("pause");
			break;
		}
		case '*':
		{
			cout << "Input two operands (<Int> <Int>):" << endl;
			cin >> a >> b;
			cout << a << " * " << b << " = " << multiply(a, b) << endl;
			system("pause");
			break;
		}
		case '/':
		{
			cout << "Input two operands (<Int> <Int>):" << endl;
			cin >> a >> b;
			if (b == 0)
			{
				cout << "Error: Divide by zero." << endl;
			}
			else 
			{
				cout << a << " / " << b << " = " << divide(a, b) << endl;
			}
			system("pause");
			break;
		}
		case '!':
		{
			cout << "Iput positive integer:  (<Int>):" << endl;
			cin >> a;
			if (a < 0)
			{
				cout << "Error! Factorial of a negative number doesn't exist.";
			}
			else if (a > 12)
			{
				cout << "Factorial " << a << " is too big." << endl;
			}
			else
			{
				cout << a << "! = " << factorial(a) << endl;
			}
			system("pause");
			break;
		}
		case '^':
		{
			cout << "Input value and power (<Int> <Int>)" << endl;
			cin >> a >> b;
			if (b < 0)
			{
				cout << "Error: negative degree." << endl;
			}
			else
			{
				cout << a << "^" << b << " = " << power(a, b) << endl;
			}
			system("pause");
			break;
		}
		case 'q':
		{
			return 0;
		}
		default:
		{
			cout << "Input error!" << endl;
			system("pause");
		}
		}
	}
}