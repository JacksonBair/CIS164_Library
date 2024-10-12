// Book Object
#include "Book.h"

// Constructors

Book::Book()
{
	setTitle("NoTitle");
	setAuthor("NoAuthor");
	setPublisher("NoPublisher");
	setIsbn("NoIsbn");
	setPublicationDate("NoPublicationDate");
	setGenre("NoGenre");
}

Book::Book(string title, string author, string publisher, string isbn, string publicationDate, string genre)
{
	setTitle(title);
	setAuthor(author);
	setPublisher(publisher);
	setIsbn(isbn);
	setPublicationDate(publicationDate);
	setGenre(genre);
}