#include <iostream>
using namespace std;

int main(){
    // Guess the number game by khaled!
    int Tries = 0;
    int Guess = 7;
    int Guess1;
    cout << "Welcome To Guess Number game You Must guess the number before your attempts cross 3" << endl;
    cout << "==========================\n";
    while(true) {
        if(Tries >= 3) {
            cout << "Sorry You lose!";
            break;
        }
        cout << "Enter Your Number!: ";
        cin >> Guess1;
        Tries++;
        if(Guess1 != Guess) {
            cout << "Wrong! Try again Your attemtps is: " << Tries << endl;
            cout << "==========================\n";
            continue;
        }
        else {
            cout << "Congrat to Victory! :)" << endl;
            cout << "Your attempts is: " << Tries << endl;
            cout << "==========================\n";
            break;
        }
    }
    return 0;
}