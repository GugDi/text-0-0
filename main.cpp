#include <iostream>
#include "TBook.h"

int main() {
    TBook book1("The Great Gatsby", "F. Scott Fitzgerald", 1925);
    TBook book2("To Kill a Mockingbird", "Harper Lee", 1960);

    std::cout << book1.getTitle() << " by " << book1.getAuthor() << " (" << book1.getYear() << ")" << std::endl;
    std::cout << book2.getTitle() << " by " << book2.getAuthor() << " (" << book2.getYear() << ")" << std::endl;

    return 0;
}