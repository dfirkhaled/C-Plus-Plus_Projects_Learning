// Created by Khaled
// C++ Library Management System

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// ---------------------------------------- Struct ----------------------------------------


struct Book{
    string Book_Name;
    string Author_Name;
    int Book_ID;
    int Copies_Num;
    int Book_Cost;
    bool Book_State;
};


struct Borrow_Book{
    string Borrow_Name;
    int Phone_Num;
    int Borrow_Book_ID;
};



// ---------------------------------------- Vector ----------------------------------------


vector<Book> Books = {};

vector<Borrow_Book> BorrowBooks = {};


// ---------------------------------------- Functions ----------------------------------------


void Escape() {
    cout << "====================\n";
    cout << "Type Enter to continue: ";
    cin.ignore();
    cin.get();
}


void Addbook() {
    Book Book;


    cout << "Type Your Book Name To Add It: ";
    getline(cin >> ws, Book.Book_Name);
    cout << "====================\n";
    cout << "Type The Author Name: ";
    getline(cin >> ws, Book.Author_Name);
    cout << "====================\n";
    cout << "Enter Your Book ID: ";
    cin >> Book.Book_ID;
    cout << "====================\n";
    cout << "Enter Your Number Of Copies: ";
    cin >> Book.Copies_Num;
    cout << "====================\n";
    cout << "Enter Your Price Of Your Book: ";
    cin >> Book.Book_Cost;
    cout << "====================\n";
    cout << "Type Your Book State Available = 1 ; Else = 0: ";
    cin >> Book.Book_State;
    Books.push_back(Book);
    cout << "====================\n";
    cout << "Book Added Succesfully!" << endl;
    Escape();
}




void SearchID() {
    int SearchedID;
    int c = 0;
    cout << "Enter The ID To Search: ";
    cin >> SearchedID;
    for (int i = 0; i < Books.size(); i++) {
        if (SearchedID == Books[i].Book_ID) {
            cout << "Book Name Is => " << Books[i].Book_Name << endl;
            cout << "Book Author Name Is => " << Books[i].Author_Name << endl;
            cout << "Book Cost Is => " << Books[i].Book_Cost << "$" << endl;
            cout << "Book Number of Copies Is => " << Books[i].Copies_Num << endl;
            if (Books[i].Book_State && Books[i].Copies_Num != 0) {
                cout << "Book State Is => Available" << endl; 
            }
            else if(Books[i].Copies_Num == 0) {
                cout << "Book State Is => Sold Out!" << endl;
            }
            else {
                cout << "Book State Is => Not Avaiable" << endl; 
            }
            c++;
        }
    }
    if (c == 0) {
        cout << "Not Defined ID!" << endl;
    }
    Escape();
}



void BorrowBook() {
    int c = 0;
    Borrow_Book Borrow_Book;
    cout << "Type Your Name Please!: ";
    getline(cin >> ws, Borrow_Book.Borrow_Name);
    cout << "====================\n";
    cout << "Enter Your Phone Number Please!: ";
    cin >> Borrow_Book.Phone_Num;
    cout << "====================\n";
    cout << "Enter The Book ID: ";
    cin >> Borrow_Book.Borrow_Book_ID;
    cout << "====================\n";

    for (int i = 0; i < Books.size(); i++) {
        if (Borrow_Book.Borrow_Book_ID == Books[i].Book_ID) {
            if(Books[i].Book_State) {
                if (Books[i].Copies_Num == 0) {
                    cout << "The Book Is Sold Out Try Again Later!" << endl;
                    c = 10;
                }
                else if (Books[i].Copies_Num != 0) {
                    cout << "The Book Name Is => " << Books[i].Book_Name << endl;
                    cout << "Borrow Book Succesfully ; Enjoy" << endl;
                    c++;
                    Books[i].Copies_Num--; 
                }
            }
        }
    }


    if(c != 0 && c != 10) {
        BorrowBooks.push_back(Borrow_Book);
        Escape();
    }
    else if(c == 0) {
        cout << "Not Defined ID!" << endl;
        Escape();
    }
}



void ShowBooks() {

    for (int i = 0; i < Books.size(); i++) {
        cout << "Book Number: " << i+1 << " Name => " << Books[i].Book_Name << endl;
        cout << "Book Number: " << i+1 << " Author Name => " << Books[i].Author_Name << endl;
        cout << "Book Number: " << i+1 << " Book ID => " << Books[i].Book_ID << endl;
        cout << "Book Number: " << i+1 << " Number of copies => " << Books[i].Copies_Num << endl;
        cout << "Book Number: " << i+1 << " Costs => " << Books[i].Book_Cost  << "$" << endl;
        Escape();
    }
}



void ShowPeoples_Borrow() {
    for (int i = 0; i < BorrowBooks.size(); i++) {
        cout << "Human Number: " << i+1 << " His Name: " << BorrowBooks[i].Borrow_Name << endl;
        cout << "Human Number: " << i+1 << " His Phone Number: " << BorrowBooks[i].Phone_Num << endl;
        cout << "Human Number: " << i+1 << " His Borrow Book ID: " << BorrowBooks[i].Borrow_Book_ID << endl;
        Escape();
    }
}


void Showavailable() {
    for (int i = 0; i < Books.size(); i++) {
        if (Books[i].Book_State&& Books[i].Copies_Num != 0) {
            cout << "Book Number " << i+1 << " Name is => " << Books[i].Book_Name << " :: Available!" << endl;
            cout << "====================\n";
        }
    }
    Escape();
}




// ------------------------------------------ Main-Menu ----------------------------------------


int main() {
    cout << "********************\n";
    cout << "Welcome to Library Management System Console!" << endl;
    cout << "********************\n";
    while (true) {
        int choose;
        cout << "--------------- Main-Menu ---------------" << endl;
        cout << "Add a book (1)" << endl;
        cout << "Search by ID (2)" << endl;
        cout << "Borrow a book (3)" << endl;
        cout << "Show all books (4)" << endl;
        cout << "Show all borrow peoples (5)" << endl;
        cout << "Show available books (6)" << endl;
        cout << "Exit! (7)" << endl;
        cout << "====================\n";
        cout << "Enter Your Number!: ";
        cin >> choose;
        if (choose == 1) {
            cout << "====================\n";
            Addbook();
        }

        else if (choose == 2) {
            cout << "====================\n";
            SearchID();
        }

        else if (choose == 3) {
            cout << "====================\n";
            BorrowBook();
        }

        else if (choose == 4) {
            cout << "====================\n";
            ShowBooks();
        }

        else if (choose == 5) {
            cout << "====================\n";
            ShowPeoples_Borrow();
        }
        else if (choose == 6) {
            cout << "====================\n";
            Showavailable();
        }
        else if (choose == 7) {
            cout << "====================\n";
            cout << "See You Again :(";
            cout << "====================\n";
            break;
        }
        else {
            cout << "====================\n";
            cout << "Invalid Option!" << endl;
            cout << "====================\n";
        }
    }

}