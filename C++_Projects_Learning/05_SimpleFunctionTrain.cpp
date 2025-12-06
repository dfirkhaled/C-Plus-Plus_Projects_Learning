#include <iostream>
using namespace std;


void calc(int num1, string op, int num2){
    if(op == "+") {
        cout << num1 << " + " << num2 << " = ";
        cout << num1 + num2;
        cout << "\n============================\n";
    }
    if(op == "-") {
        cout << num1 << " - " << num2 << " = ";
        cout << num1 - num2;
        cout << "\n============================\n";
    }
    if(op == "*") {
        cout << num1 << " * " << num2 << " = ";
        cout << num1 * num2;
        cout << "\n============================\n";
    }
    if(op == "/") {
        if(num2 == 0){
            cout << "Can't Devision by zero!";
            return;
        }
        cout << num1 << " / " << num2 << " = ";
        cout << num1 / num2;
        cout << "\n============================\n";
    }
}


int main() {
    calc(10, "+", 15);
    calc(20, "/", 5);
    calc(5, "-", 5);
    calc(20, "/", 0);
    calc(50, "*", 5000);
}