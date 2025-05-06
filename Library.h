#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"

class Library {
public:
    void addBook(const Book& book);
    void removeBook(const std::string& isbn);
    Book* searchBook(const std::string& isbn);
    std::vector<Book> getAllBooks() const;

private:
    std::vector<Book> books;
};

#endif // LIBRARY_H