#ifndef READINGSESSION_H
#define READINGSESSION_H

#include <string>
#include <chrono>

class ReadingSession {
public:
    ReadingSession(const std::string& bookTitle);
    
    void startSession();
    void endSession();
    
    std::string getBookTitle() const;
    std::chrono::duration<double> getDuration() const;

private:
    std::string bookTitle;
    std::chrono::time_point<std::chrono::steady_clock> startTime;
    std::chrono::duration<double> duration;
    bool sessionActive;
};

#endif // READINGSESSION_H