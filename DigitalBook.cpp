#include "DigitalBook.h"

DigitalBook::DigitalBook(const std::string& title, const std::string& author, const std::string& isbn, double fileSize, const std::string& format)
    : Book(title, author, isbn), fileSize(fileSize), format(format) {}

double DigitalBook::getFileSize() const {
    return fileSize;
}

void DigitalBook::setFileSize(double fileSize) {
    this->fileSize = fileSize;
}

std::string DigitalBook::getFormat() const {
    return format;
}

void DigitalBook::setFormat(const std::string& format) {
    this->format = format;
}