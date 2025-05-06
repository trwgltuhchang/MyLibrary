#include "ReadingSession.h"
#include <iostream>

ReadingSession::ReadingSession(const std::string& bookTitle)
    : bookTitle(bookTitle), duration(0), sessionActive(false) {}

void ReadingSession::startSession() {
    if (!sessionActive) {
        startTime = std::chrono::steady_clock::now();
        sessionActive = true;
    } else {
        std::cerr << "Session is already active!" << std::endl;
    }
}

void ReadingSession::endSession() {
    if (sessionActive) {
        auto endTime = std::chrono::steady_clock::now();
        duration += endTime - startTime;
        sessionActive = false;
    } else {
        std::cerr << "No active session to end!" << std::endl;
    }
}

std::string ReadingSession::getBookTitle() const {
    return bookTitle;
}

std::chrono::duration<double> ReadingSession::getDuration() const {
    return duration;
}