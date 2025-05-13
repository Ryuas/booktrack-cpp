// functions.h
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "book.h"
#include <vector>

void addBook(std::vector<Book>& books);
void listBooks(const std::vector<Book>& books);
void deleteBook(std::vector<Book>& books, int id);
void searchBook(const std::vector<Book>& books, const std::string& keyword);

#endif
