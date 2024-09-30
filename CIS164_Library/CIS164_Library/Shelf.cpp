// Shelf Object

#include "shelf.h"


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
void Shelf::SetShelfName(string shelfName) const {
    this->shelfName = shelfName;
}

string Shelf::GetShelfGenre() const {
    return this->shelfGenre;
}
void Shelf::SetShelfGenre(string shelfGenre) const {
    this->shelfGenre = shelfGenre;
}


// Methods
void Shelf::AddBook(Book newBook) {
    shelfBooks.push_back(newBook);
}
