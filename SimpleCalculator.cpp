#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    char operation;
    cout << "**Calculator**"<<endl;
    cin >> num1 >> operation >> num2;
    switch (operation)
    {
        case '-':
            cout << num1 << operation << num2 << "=" << num1 - num2;
            break;
        case '+':
            cout << num1 << operation << num2 << "=" << num1 + num2;
            break;
        case '/':
            cout << num1 << operation << num2 << "=" << num1 / num2;
            break;
        case '*':
            cout << num1 << operation << num2 << "=" << num1 * num2;
            break;
        case '%':
            if (num1 == (int)num1 && num2 == (int)num2)
                cout << num1 << operation << num2 << "=" << (int)num1 % (int)num2;
            else
                cout << "invalid operation for float numbers";             
            break;
        default:
            cout << "Invalid operation" << endl;
    }





    system("pause>0");
}
