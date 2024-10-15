#ifndef Library_H
#define Library_H


#include "Shelf.h" // including book class
#include <iostream>
#include <vector>

using namespace std;

class Library {
private:
    string libraryName;
    vector<Shelf> shelves;

public:
    Library(string libraryName);

    string getLibraryName() const;
    void setLibraryName(string libraryName);
    
    void addShelf(Shelf newShelf);
    string displayShelves();

    vector<Shelf>& getShelves();
};

#endif // !Library_H
