#ifndef BOOK_H
#define BOOK_H

using namespace std;
#include <iostream>
#include <vector>

class Book {
private:
	string title;
	string author;
	string publisher;
	string isbn;
	string publicationDate;
	string genre;
public:
	Book(string title, string author, string publisher, string isbn, string publicationDate, string genre);

	string getTitle() { return title; }
	string getAuthor() { return author; }
	string getPublisher() { return publisher; }
	string getIsbn() { return isbn; }
	string getPublicationDate() { return publicationDate; }
	string getGenre() { return genre; }

	void setTitle(string newTitle) { title = newTitle; }
	void setAuthor(string newAuthor) { author = newAuthor; }
	void setPublisher(string newPublisher) { publisher = newPublisher; }
	void setIsbn(string newIsbn) { isbn = newIsbn; }
	void setPublicationDate(string newPublicationDate) { publicationDate = newPublicationDate; }
	void setGenre(string newGenre) { genre = newGenre; }

};


#endif BOOK_H