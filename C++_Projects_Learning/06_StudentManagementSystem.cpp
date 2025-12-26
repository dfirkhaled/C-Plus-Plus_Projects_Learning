// Created by Khaled
// C++ Program Student Management System (Console App)

#include <iostream>
#include <vector>
#include <string>
using namespace std;


string Subj[5] = {"Programming", "Math1", "CS Basics", "Electronics", "English"};

struct Students {
    string stName;
    int stID;
    int stGrades[5];
};


vector<Students> Student = {};

void Subject() {
    cout << "----------Subject----------\n\n";
    cout << "Programming -- Subject ID = {0}\n";
    cout << "Math1 -- Subject ID = {1}\n";
    cout << "CS Basics -- Subject ID = {2}\n";
    cout << "Electronics -- Subject ID = {3}\n";
    cout << "English -- Subject ID = {4}\n";
}


void newstu() {
    Students New_St;
    cout << "Type the student name: ";
    cin >> New_St.stName;
    cout << "====================\n";
    cout << "Enter the student ID: ";
    cin >> New_St.stID;
    cout << "====================\n";
    for(int i = 0; i < 5; i++) {
        cout << "Enter The Grades from {0 - 100} of " << Subj[i] << " Subject: ";
        cin >> New_St.stGrades[i];
    }
    Student.push_back(New_St);
    cout << "====================\n";
    cout << "Student added succesfully!\n";
}


void Showstu() {
    cout << "-------------------- All Students --------------------\n";
    for (int l = 0; l < Student.size(); l++) {
        cout << "Student " << l+1 << " Name: " << Student[l].stName << endl;
        cout << "Student " << l+1 << " ID: " << Student[l].stID << endl;
        for(int n = 0; n < 5; n++) {
            cout << "Student " << l+1 << " Subject " << Subj[n] << " Get a " << Student[l].stGrades[n] << " From 100" << endl;
        }
        cout << "====================\n";
    }

    cout << "Type enter to continue: ";
    cin.ignore();
    cin.get();
}


void SearchID() {
    int StuID;
    cout << "Enter Your Student ID To Search!: ";
    cin >> StuID;
    cout << "====================\n";
    for(int z = 0; z < Student.size(); z++) {
        if(StuID == Student[z].stID) {
            cout << "Student " << z+1 << " Name: " << Student[z].stName << endl;
            cout << "Student " << z+1 << " ID: " << Student[z].stID << endl;
            for(int n = 0; n < 5; n++) {
                cout << "Student " << z+1 << " Subject " << Subj[n] << " Get a " << Student[z].stGrades[n] << " From 100" << endl;
            }
        }
    }
    cout << "====================\n";
    cout << "Type enter to continue: ";
    cin.ignore();
    cin.get();
}

void CalcGR() {
    int StuID;
    int AllGR = 0;
    int SubjSize = 0;
    int CalcAV = 0;
    int CalcPer = 0;
    cout << "Enter Your Student ID To Calculate!: ";
    cin >> StuID;
    cout << "====================\n";
    for(int z = 0; z < Student.size(); z++) {
        if(StuID == Student[z].stID) {
            cout << "Student " << z+1 << " Name: " << Student[z].stName << endl;
            cout << "Student " << z+1 << " ID: " << Student[z].stID << endl;
            for(int n = 0; n < 5; n++) {
                cout << "Student " << z+1 << " Subject " << Subj[n] << " Get a " << Student[z].stGrades[n] << " From 100" << endl;
                AllGR += Student[z].stGrades[n];
            }
            SubjSize = 5;
            CalcAV = (AllGR) / (SubjSize);
            cout << "====================\n";
            cout << "Avg Student " << "{" << Student[z].stName << "}" << " = " << CalcAV << endl;
            CalcPer = ((AllGR) / (SubjSize));
            cout << "The student percent degree is: " << CalcPer << "%" << endl;
        }
        else {
            cout << "====================\n";
            cout << "This Student ID Not Exist !" << endl;
            cout << "====================\n";
            continue;
        }
    }
    cout << "====================\n";
    cout << "Type enter to continue: ";
    cin.ignore();
    cin.get();
}


void DelStudent() {
    int StuID;
    cout << "Enter Your Student ID To Delete It!: ";
    cin >> StuID;
    for(int z = 0; z < Student.size(); z++) {
        if(StuID == Student[z].stID) {
            cout << "Student " << z+1 << " Name: " << Student[z].stName << endl;
            cout << "Student " << z+1 << " ID: " << Student[z].stID << endl;
            for(int n = 0; n < 5; n++) {
                cout << "Student " << z+1 << " Subject " << Subj[n] << " Get a " << Student[z].stGrades[n] << " From 100" << endl;
            }
            cout << "====================\n";
            Student.erase(Student.begin() + z);
            cout << "Student Deleted Succesfully" << endl;
        }
        else {
            cout << "====================\n";
            cout << "This Student ID Not Exist !" << endl;
            cout << "====================\n";
            continue;
        }
    cout << "====================\n";
    cout << "Type enter to continue: ";
    cin.ignore();
    cin.get();
    }
}


int main() {
    int choose2;
    cout << "**********************\n";
    cout << "Welcome to Student Management System Program" << endl;
    cout << "**********************\n";
    while (true) {
        cout << "====================\n";
        cout << "----------MENU----------" << endl << endl;
        cout << "Add new student(1): " << endl;
        cout << "Show all students(2): " << endl;
        cout << "Search by ID(3): " << endl;
        cout << "Calculate average grade(4): " << endl;
        cout << "Delete student(5): " << endl;
        cout << "Show Subject(6): " << endl;
        cout << "Exit(7)" << endl;
        cout << "====================\n";
        cout << "Choose a number: ";
        cin >> choose2;

        if(choose2 == 1) {
            cout << "====================\n";
            newstu();
        }


        else if(choose2 == 2) {
            cout << "====================\n";
            Showstu();
        }

        else if(choose2 == 3) {
            cout << "====================\n";
            SearchID();
        }

        else if(choose2 == 4) {
            cout << "====================\n";
            CalcGR();
        }

        else if(choose2 == 5) {
            cout << "====================\n";
            DelStudent();
        }

        else if(choose2 == 6) {
            cout << "====================\n";
            Subject();
        }

        else if (choose2 == 7) {
            cout << "See you again :(" << endl;
            cout << "====================\n";
            break;
        }

        else {
            cout << "Invalid option!\n";
        }
    }


}