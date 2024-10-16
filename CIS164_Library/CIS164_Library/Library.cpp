#include "Library.h"
#include "Shelf.h"

using namespace std;

// Constructors
Library::Library(string libraryName)
{
    this->libraryName = libraryName;
}

// Getters & Setters
string Library::getLibraryName() const
{
    return this->libraryName;
}
void Library::setLibraryName(string libraryName)
{
    this->libraryName = libraryName;
}

// Methods
void Library::addShelf(Shelf newShelf)
{
    shelves.push_back(newShelf);
}

string Library::displayShelves()
{
    string books;
    for (int i = 0; i < shelves.size(); i++)
    {
        if (i < shelves.size() - 1)
        {
            books += shelves[i].GetShelfGenre() + ", ";
        }
        else
        {
            books += shelves[i].GetShelfGenre();
        }
    }
    return books;
}

vector<Shelf> &Library::getShelves()
{
    return this->shelves;
}