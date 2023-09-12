#include <iostream>

using namespace std;

int main()
 {
	float input1, input2;
	char operation;
	cout << "Enter value and operation and next value to calculate \n Add + \n Sub - \n Multiply * \n Division \/ \n";
	cin >> input1 >> operation >> input2;
	switch (operation)
	{
	case '+':
		cout << "Result " << input1 + input2;
		break;
	case '-':
		cout << "Result " << input1 - input2;
		break;
	case '*':
		cout << "Result " << input1 * input2;
		break;
	case '/':
			cout << "Result " << input1 / input2;
		break;

	default:
		cout << "your operation is wrong";
		break;
	}
	cout << endl;
	system("pause");
}