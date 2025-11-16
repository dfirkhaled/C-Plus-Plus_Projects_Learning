#include <iostream>
using namespace std;

int main() 
{
    int x;
    cout << "Inter Your Day Number to see his name: ";
    cin >> x;
    switch(x) {
        case  1: cout << "It's \"Saturday\"!"; break;
        case 2: cout << "It's \"Sunday\"!"; break;
        case 3: cout << "It's \"Monday\"!"; break;
        case 4: cout << "It's \"Tuesday\"!"; break;
        case 5: cout << "It's \"Wednesday\"!"; break;
        case 6: cout << "It's \"Thursday\"!"; break;
        case 7: cout << "It's \"Friday\"!"; break;
        default: cout << "invalid day number!"; break;
    }
    return 0;



}