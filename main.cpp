#include<iostream>

using namespace std;

int main() {


    double a, b;

    char op;

    bool running = true;

    cout << "press q to stop calculator \n";

    while (running)  {
    
        cout << "\nplease enter an example: ";  
        cin >> a >> op;

        if(op == 'q') {
            running = false;
            cout << "stoping...\n";
            break;
        }
        if(a == 'q') {
            running = false;
            cout << "stoping...\n";
            break;
        }
    
        cin >> b;

        switch (op)  {
            case '+': cout << a + b; break;
            case '-': cout << a - b; break;
            case '*': cout << a * b; break;
            case '/':
                if (b != 0) 
                    cout << a / b;
                else 
                    cout << "error: division by zero";
                break;
            case '%':
                cout << ((a * b) / 100);
                break;
            default:
                cout << "unknown operation";

        }
    }
    return 0;
}
