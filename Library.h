#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include <vector>
#include <string>

class Library {
public:
    Library() noexcept; // Default constructor

    void addBook(const Book& book);
    bool removeBook(const std::string& isbn); // Return type matches definition
    Book* searchBook(const std::string& isbn);
    void displayBooks() const; // Declaration for displayBooks
    void sortBooksByTitle();   // Declaration for sortBooksByTitle

private:
    std::vector<Book> books; // Collection of books
};

#endif // LIBRARY_H