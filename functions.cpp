
// functions.cpp
#include "functions.h"
#include <iostream>
#include <algorithm>

void addBook(std::vector<Book>& books) {
    Book b;
    std::cout << "Book ID: ";
    std::cin >> b.id;
    std::cin.ignore();
    std::cout << "Book Name: ";
    std::getline(std::cin, b.title);
    std::cout << "Author: ";
    std::getline(std::cin, b.author);
    std::cout << "Year: ";
    std::cin >> b.year;
    books.push_back(b);
    std::cout << "book added!\n";
}

void listBooks(const std::vector<Book>& books) {
    for (const auto& b : books) {
        std::cout << b.id << " | " << b.title << " | " << b.author << " | " << b.year << '\n';
    }
}

void deleteBook(std::vector<Book>& books, int id) {
    auto it = std::remove_if(books.begin(), books.end(), [id](Book b){ return b.id == id; });
    if (it != books.end()) {
        books.erase(it, books.end());
        std::cout << "the book was deleted!!\n";
    } else {
        std::cout << "Book not found.\n";
    }
}

void searchBook(const std::vector<Book>& books, const std::string& keyword) {
    for (const auto& b : books) {
        if (b.title.find(keyword) != std::string::npos || b.author.find(keyword) != std::string::npos) {
            std::cout << b.id << " | " << b.title << " | " << b.author << " | " << b.year << '\n';
        }
    }
}
