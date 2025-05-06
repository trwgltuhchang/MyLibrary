#include "Library.h"
#include <iostream>
#include <algorithm>

// Default constructor for Library
Library::Library() noexcept {}

void Library::addBook(const Book& book) {
    books.push_back(book);
}

bool Library::removeBook(const std::string& isbn) {
    for (auto it = books.begin(); it != books.end(); ++it) {
        if (it->getISBN() == isbn) {
            books.erase(it);
            return true; // Successfully removed
        }
    }
    return false; // Book not found
}

Book* Library::searchBook(const std::string& isbn) {
    for (auto& book : books) {
        if (book.getISBN() == isbn) {
            return &book;
        }
    }
    return nullptr; // Book not found
}

void Library::displayBooks() const {
    for (const auto& book : books) {
        std::cout << "Title: " << book.getTitle()
                  << ", Author: " << book.getAuthor()
                  << ", ISBN: " << book.getISBN() << std::endl;
    }
}

void Library::sortBooksByTitle() {
    std::sort(books.begin(), books.end(), [](const Book& a, const Book& b) {
        return a.getTitle() < b.getTitle();
    });
}