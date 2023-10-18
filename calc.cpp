#include <iostream>
#include <cmath>
using namespace std;

int main() {
	while (true) {

		char op;
		float num1, num2;
		cout << " Enter the operation(+,-,*,/,^): ";
		cin >> op;

		cout << "Enter the 1 number <3: ";
		cin >> num1;

		cout << "Enter the 2 number <3: ";
		cin >> num2;

		switch (op) {
		case '+':
			cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
			break;

		case '-':
			cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
			break;

		case '*':
			cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
			break;

		case '/':
			cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
			break;

		case '^':
			cout << num1 << " ^ " << num2 << " = " << pow(num1, num2) << endl;
			break;
		default:
			cout << "Mistake -_____-" << endl;
			break;
		}
	}

	return 0;
}