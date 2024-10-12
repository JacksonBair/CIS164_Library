// CIS164_Library.cpp : Defines the entry point for the application.
//

#include "CIS164_Library.h"
#include "Shelf.h"
#include "Shelf.cpp"
#include "Book.h"
#include "Book.cpp"

using namespace std;

int main()
{
	Book book1();

	cout << "Hello CMake." << endl;

	Book book1 = Book("Title", "Author", "Publisher", "ISBN", "PubDate", "Genre");

	Shelf shelf1("Name", "Genre");

	shelf1.AddBook(book1);
	shelf1.AddBook(book1);

	cout << book1.getTitle() << endl;
	cout << book1.getGenre() << endl;
	cout << shelf1.GetShelfName() << endl;
	cout << shelf1.DisplayBooks();

	return 0;
}
