#include "Library.h"
#include "Book.h"
#include <vector>
#include <algorithm>

Library::Library() {}

void Library::addBook(const Book& book) {
    books.push_back(book);
}

bool Library::removeBook(const std::string& isbn) {
    auto it = std::remove_if(books.begin(), books.end(), [&isbn](const Book& book) {
        return book.getISBN() == isbn;
    });
    if (it != books.end()) {
        books.erase(it, books.end());
        return true;
    }
    return false;
}

Book* Library::findBook(const std::string& isbn) {
    for (auto& book : books) {
        if (book.getISBN() == isbn) {
            return &book;
        }
    }
    return nullptr;
}

std::vector<Book> Library::getAllBooks() const {
    return books;
}