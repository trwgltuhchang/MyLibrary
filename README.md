# C++ Library Project

This project is a simple C++ library management system that allows users to manage a collection of books and track reading sessions. It includes functionalities for adding, removing, and searching for books, as well as managing reading sessions.

## Project Structure

```
cpp-library-project
├── src
│   ├── main.cpp          # Entry point of the application with main menu and program logic
│   ├── Book.h           # Header file for the Book class
│   ├── Book.cpp         # Implementation of the Book class methods
│   ├── ReadingSession.h  # Header file for the ReadingSession class
│   ├── Library.h        # Header file for the Library class
│   └── Library.cpp      # Implementation of the Library class methods
└── README.md            # Documentation for the project
```

## Features

- **Book Management**: Add, remove, and search for books in the library.
- **Reading Sessions**: Track reading sessions, including the book being read and the duration of the session.

## Building the Project

To build the project, navigate to the `cpp-library-project` directory and use the following command:

```
g++ -o library src/*.cpp
```

## Running the Project

After building the project, you can run the application using:

```
./library
```

## Usage

Upon running the application, you will be presented with a main menu that allows you to interact with the library system. Follow the on-screen instructions to manage your books and reading sessions.