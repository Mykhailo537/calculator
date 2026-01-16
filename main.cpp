#include<iostream>

using namespace std;

int main() {

    double a, b;

    char op;

    cout << "please enter an example: ";
    cin >> a >> op >> b;

    switch (op)  {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/':
            if (b !=0) cout << a / b;
            else cout << "error: division by zero";
            break;
    default:
        cout << "unknown operation";

    }
    
    return 0;
}
