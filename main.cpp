#include <iostream>
#include "Library.h"
#include "Book.h"

void displayMenu() {
    std::cout << "Welcome to the Library Management System\n";
    std::cout << "1. Add a Book\n";
    std::cout << "2. Remove a Book\n";
    std::cout << "3. Search for a Book\n";
    std::cout << "4. Display All Books\n";
    std::cout << "5. Sort Books by Title\n";
    std::cout << "6. Exit\n";
    std::cout << "Please choose an option: ";
}

int main() {
    Library library;
    int choice;

    do {
        displayMenu();
        std::cin >> choice;

        // Clear the input buffer to handle leftover newline characters
        if (std::cin.fail() || choice < 1 || choice > 6) {
            std::cin.clear(); // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            std::cout << "Invalid input. Please try again.\n";
            continue;
        }

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the newline character

        switch (choice) {
            case 1: {
                std::string title, author, isbn;
                std::cout << "Enter title: ";
                std::getline(std::cin, title);
                std::cout << "Enter author: ";
                std::getline(std::cin, author);
                std::cout << "Enter ISBN: ";
                std::getline(std::cin, isbn);
                library.addBook(Book(title, author, isbn));
                std::cout << "Book added successfully.\n";
                break;
            }
            case 2: {
                std::string isbn;
                std::cout << "Enter ISBN of the book to remove: ";
                std::getline(std::cin, isbn);
                if (library.removeBook(isbn)) {
                    std::cout << "Book removed successfully.\n";
                } else {
                    std::cout << "Book not found.\n";
                }
                break;
            }
            case 3: {
                std::string isbn;
                std::cout << "Enter ISBN of the book to search: ";
                std::getline(std::cin, isbn);
                Book* book = library.searchBook(isbn);
                if (book) {
                    std::cout << "Book found: " << book->getTitle() << " by " << book->getAuthor() << std::endl;
                } else {
                    std::cout << "Book not found.\n";
                }
                break;
            }
            case 4:
                library.displayBooks();
                break;
            case 5:
                library.sortBooksByTitle();
                std::cout << "Books sorted by title.\n";
                break;
            case 6:
                std::cout << "Exiting the program. Goodbye!\n";
                break;
        }
    } while (choice != 6);

    return 0;
}