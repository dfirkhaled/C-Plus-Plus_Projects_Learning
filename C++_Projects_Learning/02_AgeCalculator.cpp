#include <iostream>
using namespace std;


int main() 
{
    int age;
    cout << "Inter Your Age please :( (By Years): ";
    cin >> age;
    long long years = age;
    long long months =  years * 12;
    long long weeks = months * 4;
    long long days = weeks * 7;
    long long hours = days * 24;
    long long minutes = hours * 60;
    long long seconds = minutes * 60;
    long long milli_second = seconds * 1000;
    cout << "==============================================\n";
    cout << "Your years is: " << years << "\n";
    cout << "Your Months is: " << months << "\n";
    cout << "Your Weeks is: " << weeks << "\n";
    cout << "Your Days is: " << days << "\n";
    cout << "Your Hours is: " << hours << "\n";
    cout << "Your Minutes is: " << minutes << "\n";
    cout << "Your Seconds is: " << seconds << "\n";
    cout << "Your Milli_second is: " << milli_second << "\n";
    cout << "==============================================";
}