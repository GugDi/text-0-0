#ifndef TBOOK_H
#define TBOOK_H

#include <string>
using namespace std;

class TBook {
public:
    TBook();
    TBook(string title, string author, int year);
    string getTitle();
    string getAuthor();
    int getYear();

private:
    string m_title;
    string m_author;
    int m_year;
};

#endif