#include <iostream>

void Calculator();
void Ghool();
void Continue();

int main()
{
	setlocale(LC_ALL, "ru");
	Calculator();
}

void Calculator()
{
	int num1, num2;
	std::string z;
	std::cout << "\t\t ����������� ��� � ������������ � ��������)) \n";
	std::cout << "\n";
	std::cout << "������� ������ �����: ";
	std::cin >> num1;
	system("cls");
	std::cout << num1 << "\n";
	std::cout << "������� ����: ";
	std::cin >> z;
	system("cls");
	std::cout << num1 << z << "\n";
	std::cout << "������� ������ �����: ";
	std::cin >> num2;
	system("cls");
	if (num1 == 1000 && num2 == 7 && z == "-")
	{
		Ghool();
	}
	else
	{
		if (z == "+")
		{
			std::cout << num1 << z << num2 << " = " << num1 + num2 << "\n";
			std::cout << "\n";

		}
		else if (z == "-")
		{
			std::cout << num1 << z << num2 << " = " << num1 - num2 << "\n";
			std::cout << "\n";

		}
		else if (z == "/")
		{
			std::cout << num1 << z << num2 << " = " << num1 / num2 << "\n";
			std::cout << "\n";

		}
		else if (z == "*")
		{
			std::cout << num1 << z << num2 << " = " << num1 * num2 << "\n";
			std::cout << "\n";

		}
		
	}
	Continue();
}
void Ghool()
{
	int a = 1000;
	while (a > 0)
	{
		std::cout << a << " - 7 = ";
		a -= 7;
		std::cout << a << "\n";
	}
	std::cout << "\n";
	Continue();
}
void Continue()
{
	int choise;
	std::cout << "�� ������ ����������?\n";
	std::cout << "\n";
	std::cout << "1) ��\n";
	std::cout << "2) ���\n";
	std::cin >> choise;
	if (choise == 1)
	{
		system("cls");
		main();
	}
	else
	{
		return;
	}
}