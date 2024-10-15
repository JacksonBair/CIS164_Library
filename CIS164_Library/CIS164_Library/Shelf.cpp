// Shelf Object

#include "Shelf.h"
#include "Book.h"


// Constructors
Shelf::Shelf() {
    SetShelfName("NoName");
    SetShelfGenre("NoGenre");
}

Shelf::Shelf(string shelfName, string shelfGenre) {
    SetShelfName(shelfName);
    SetShelfGenre(shelfGenre);
}


// Getters and Setters
string Shelf::GetShelfName() const {
    return this->shelfName;
}
void Shelf::SetShelfName(string shelfName) {
    this->shelfName = shelfName;
}

string Shelf::GetShelfGenre() const {
    return this->shelfGenre;
}
void Shelf::SetShelfGenre(string shelfGenre) {
    this->shelfGenre = shelfGenre;
}


// Methods
void Shelf::AddBook(Book newBook) {
    shelfBooks.push_back(newBook);

    cout << "Added " << newBook.getTitle() << endl;
}

string Shelf::DisplayBooks() {
    string books;

    for (int i = 0; i < shelfBooks.size(); i++) {
        if (i < shelfBooks.size() - 1) {
            books += shelfBooks[i].getTitle() + ", ";
        } else {
            books += shelfBooks[i].getTitle();
        }
    }

    return books;
}

vector<Book>& Shelf::GetBooks() {
    return this->shelfBooks;
}
