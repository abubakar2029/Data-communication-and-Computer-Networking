#include<iostream>
#include<string>
using namespace std;

class Book {
public:
    string BookTitle, AuthorName;
    int Price, Quantity;

    // Constructor
    Book(const string& title, const string& author, int price, int quantity);

    // Destructor
    ~Book();
};

// Implementation of the Book class constructor
Book::Book(const string& title, const string& author, int price, int quantity)
    : BookTitle(title), AuthorName(author), Price(price), Quantity(quantity) {
    // Constructor implementation
    cout << "Book Constructor Called for: " << BookTitle << endl;
}

// Destructor implementation
Book::~Book() {
    // Destructor implementation
    cout << "Book Destructor Called for: " << BookTitle << endl;
}

class Author {
private:
    string Biography;
    string* ListOfBooks;
    int NumBooks;

public:
    string Name;

    // Constructor
    Author(const string& name, const string& biography, const string books[], int numBooks);

    // Destructor
    ~Author();
};

// Implementation of the Author class constructor
Author::Author(const string& name, const string& biography, const string books[], int numBooks)
    : Name(name), Biography(biography), NumBooks(numBooks), ListOfBooks(new string[numBooks]) {
    // Constructor implementation
    cout << "Author Constructor Called for: " << Name << endl;

    for (int i = 0; i < numBooks; ++i) {
        ListOfBooks[i] = books[i];
    }
}

// Destructor implementation
Author::~Author() {
    // Destructor implementation
    cout << "Author Destructor Called for: " << Name << endl;
    delete[] ListOfBooks;
}

int main() {
    // Usage example

    // Create a Book
    Book myBook("The C++ Programming Language", "Bjarne Stroustrup", 40, 100);

    // Display Book information
    cout << "Book Title: " << myBook.BookTitle << endl;
    cout << "Author: " << myBook.AuthorName << endl;
    cout << "Price: $" << myBook.Price << endl;
    cout << "Quantity in Stock: " << myBook.Quantity << endl;

    // Create an Author
    string booksByAuthor[] = { "Book 1", "Book 2", "Book 3" };
    Author myAuthor("John Doe", "An author with a fascinating biography", booksByAuthor, 3);

    // Display Author information
    cout << "\nAuthor Name: " << myAuthor.Name << endl;
    cout << "Biography: " << myAuthor.Biography << endl;
    cout << "List of Books by " << myAuthor.Name << ":\n";
    for (int i = 0; i < myAuthor.NumBooks; ++i) {
        cout << "- " << myAuthor.ListOfBooks[i] << endl;
    }

    return 0;
}
