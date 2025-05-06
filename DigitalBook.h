#ifndef DIGITALBOOK_H
#define DIGITALBOOK_H

#include "Book.h"

class DigitalBook : public Book {
public:
    DigitalBook(const std::string& title, const std::string& author, const std::string& isbn, double fileSize, const std::string& format);

    double getFileSize() const;
    void setFileSize(double fileSize);

    std::string getFormat() const;
    void setFormat(const std::string& format);

private:
    double fileSize;
    std::string format;
};

#endif // DIGITALBOOK_H