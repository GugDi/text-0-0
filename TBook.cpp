#include "TBook.h"
using namespace std;

TBook::TBook() {}

TBook::TBook(string title, string author, int year) {
    m_title = title;
    m_author = author;
    m_year = year;
}

string TBook::getTitle() {
    return m_title;
}

string TBook::getAuthor() {
    return m_author;
}

int TBook::getYear() {
    return m_year;
}