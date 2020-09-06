#include <iostream>

int num1, num2;
char op;
int answer;
int operation;

int main() {
	std::cout << "Do you want to calculate basic or equation?\n";
	std::cout << "For basic type 1\n";
	std::cout << "For equation type 2\n";
	std::cin >> operation;

	if (operation == 1) {

		std::cout << "Enter first number:";
		std::cin >> num1;
		std::cout << "Enter the operator:";
		std::cin >> op;
		std::cout << "Enter second number:";
		std::cin >> num2;

		if (op == '+') {
			answer = num1 + num2;
		}
		else if (op == '-') {
			answer = num1 - num2;
		}
		else if (op == '/') {
			answer = num1 / num2;
		}
		else if (op == '*') {
			answer = num1 * num2;
		}
		else {
			std::cout << "invalid operator";
		}
		std::cout << answer;

	}
	else if (operation == 2) {
		std::cout << "Format will be:(first number)(the operator)X= (answer)\n";
		std::cout << "Enter first number:";
		std::cin >> num1;
		std::cout << "Enter the operator:";
		std::cin >> op;
		std::cout << "Enter the answer;";
		std::cin >> num2;

		if (op == '+') {
			answer = num2 - num1;
		}
		else if (op == '-') {
			answer = num2 + num1;
		}
		else if (op == '/') {
			answer = num1 * num2;
		}
		else if (op == '*') {
			answer = num2 / num1;
		}
		else {
			std::cout << "invalid operator";

		
		}
		std::cout << answer;
		
	}
	return 0;
}