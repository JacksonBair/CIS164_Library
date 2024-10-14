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


// Getters & Setters

string Book::getAuthor() const {
	return this->author;
}
string Book::getTitle() const {
	return this->title;
}
string Book::getPublisher() const {
	return this->publisher;
}
string Book::getIsbn() const {
	return this->isbn;
}
string Book::getPublicationDate() const {
	return this->publicationDate;
}
string Book::getGenre() const {
	return this->genre;
}

void Book::setAuthor(string author) {
	this->author = author;
}
void Book::setTitle(string title) {
	this->title = title;
}
void Book::setPublisher(string publisher) {
	this->publisher = publisher;
}
void Book::setIsbn(string isbn) {
	this->isbn = isbn;
}
void Book::setPublicationDate(string publicationDate) {
	this->publicationDate = publicationDate;
}
void Book::setGenre(string genre) {
	this->genre = genre;
}

//Methods
