#include <iostream>

int num1, num2;
char op;
int answer;

int main() {
	std::cout << "Enter first number:";
	std::cin >> num1;
	std::cout << "Enter the operator:";
	std::cin >> op;
	std::cout << "Enter second number:";
	std::cin >> num2;

	if (op == '+'){
		answer = num1 + num2;
	}	else if (op == '-') {
			answer = num1 - num2;
	}	else if (op == '/') {
			answer = num1 / num2;
	}	else if (op == '*') {
			answer = num1 * num2;
	}		else {
				std::cout << "invalid operator";
	}
	std::cout << answer;

	return 0;
}
