// CIS164_Library.cpp : Defines the entry point for the application.
//

#include "CIS164_Library.h"

using namespace std;

int main()
{
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
