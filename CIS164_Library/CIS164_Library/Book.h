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
	bool isCheckedOut;
public:
	Book();
	Book(string title, string author, string publisher, string isbn, string publicationDate, string genre);

	string getTitle() const;
	string getAuthor() const;
	string getPublisher() const;
	string getIsbn() const;
	string getPublicationDate() const;
	string getGenre() const;
	bool getIsCheckedOut() const;

	void setTitle(string title);
	void setAuthor(string Author);
	void setPublisher(string Publisher);
	void setIsbn(string Isbn);
	void setPublicationDate(string PublicationDate);
	void setGenre(string Genre); 
	void setIsCheckedOut(bool isCheckedOut);
};


#endif //BOOK_H