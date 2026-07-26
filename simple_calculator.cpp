#include <iostream>

using namespace std;

int main()
{
    double num1, num2;
    char operation;
    char choice;

    do
    {
        cout << "\n=============================\n";
        cout << "      SIMPLE CALCULATOR\n";
        cout << "=============================\n";

        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        cout << "\nChoose an operation:\n";
        cout << "+ : Addition\n";
        cout << "- : Subtraction\n";
        cout << "* : Multiplication\n";
        cout << "/ : Division\n";

        cout << "Enter your choice: ";
        cin >> operation;

        switch(operation)
        {
            case '+':
                cout << "Result = " << num1 + num2 << endl;
                break;

            case '-':
                cout << "Result = " << num1 - num2 << endl;
                break;

            case '*':
                cout << "Result = " << num1 * num2 << endl;
                break;

            case '/':
                if(num2 != 0)
                {
                    cout << "Result = " << num1 / num2 << endl;
                }
                else
                {
                    cout << "Error! Division by zero is not allowed.\n";
                }
                break;

            default:
                cout << "Invalid Operation!\n";
        }

        cout << "\nDo you want to perform another calculation? (Y/N): ";
        cin >> choice;

    } while(choice == 'Y' || choice == 'y');

    cout << "\nThank you for using the calculator!\n";

    return 0;
}