# C++ Library Project

This project is a simple C++ library management system that allows users to manage a collection of books and track reading sessions. It includes functionalities for adding, removing, and searching for books, as well as managing reading sessions.

## Project Structure

```
cpp-library-project/
├── src/
│   ├── main.cpp          # Contains the main function and menu logic
│   ├── Library.cpp       # Implementation of the Library class
│   ├── Library.h         # Declaration of the Library class
│   ├── Book.cpp          # Implementation of the Book class
│   ├── Book.h            # Declaration of the Book class
├── build/                # (Optional) Directory for compiled binaries
├── README.md             # (Optional) Project description and instructions
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
