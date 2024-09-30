#ifndef SHELF_H
#define SHELF_H

// Cory - 9/30 6:00PM

//#include <book.h> // including book class
#include <iostream>
#include <vector>

using namespace std;

class Shelf {

    private:
        string shelfName;
        string shelfGenre;

        vector<Book> shelfBooks; // book class needs implementation

    public:
        Shelf();
        Shelf(string shelfName, string shelfGenre);

        string GetShelfName() const;
        void SetShelfName(string shelfName);

        string GetShelfGenre() const;
        void SetShelfGenre(string shelfGenre);

        void AddBook(Book newBook);
};

#endif // SHELF_H
