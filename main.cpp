// main.cpp
#include <iostream>
#include <vector>
#include "book.h"
#include "functions.h"

int main() {
    std::vector<Book> books;
    int choice;

    do {
        std::cout << "\n--- BookTrack Menu ---\n";
        std::cout << "1. Add book\n";
        std::cout << "2. List Books\n";
        std::cout << "3. Delete Book\n";
        std::cout << "4. Search for Books\n";
        std::cout << "5. Exit\n";
        std::cout << "Your Choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                addBook(books);
                break;
            case 2:
                listBooks(books);
                break;
            case 3: {
                int id;
                std::cout << "ID of the book you want to delete: ";
                std::cin >> id;
                deleteBook(books, id);
                break;
            }
            case 4: {
                std::cin.ignore();
                std::string keyword;
                std::cout << "Search word: ";
                std::getline(std::cin, keyword);
                searchBook(books, keyword);
                break;
            }
            case 5:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "invalid selection.\n";
        }
    } while (choice != 5);

    return 0;
}
