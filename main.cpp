#include <iostream>
#include "Library.h"
#include "ReadingSession.h"

void displayMenu() {
    std::cout << "Welcome to the Library Management System" << std::endl;
    std::cout << "1. Add a Book" << std::endl;
    std::cout << "2. Remove a Book" << std::endl;
    std::cout << "3. Search for a Book" << std::endl;
    std::cout << "4. Start a Reading Session" << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cout << "Please choose an option: ";
}

int main() {
    Library library;
    int choice;

    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                // Logic to add a book
                break;
            case 2:
                // Logic to remove a book
                break;
            case 3:
                // Logic to search for a book
                break;
            case 4:
                // Logic to start a reading session
                break;
            case 5:
                std::cout << "Exiting the program." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 5);

    return 0;
}