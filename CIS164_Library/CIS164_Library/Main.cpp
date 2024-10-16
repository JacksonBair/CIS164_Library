// CIS164_Library.cpp : Defines the entry point for the application.
//

#include "Main.h"
#include "Shelf.h"
#include "Book.h"
#include "Library.h"

using namespace std;


// adds a book object
void userAddBook(Library library)
{

	string author;
	string title;
	string publicationDate;
	string publisher;
	string genre;
	string isbn;

	cout << "\nInput book title: ";
	for (;;)
	{
		cin >> title;
		if (cin.good())
		{
			break;
		}
		else
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Input must be valid. Please re-enter." << endl;
		}
	}
	cout << "\nInput book author: ";
	for (;;)
	{
		cin >> author;
		if (cin.good())
		{
			break;
		}
		else
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Input must be valid. Please re-enter." << endl;
		}
	}
	cout << "\nInput book publisher: ";
	for (;;)
	{
		cin >> publisher;
		if (cin.good())
		{
			break;
		}
		else
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Input must be valid. Please re-enter." << endl;
		}
	}
	cout << "\nInput book publication date(mm/yyyy): ";
	for (;;)
	{
		cin >> publicationDate;
		if (cin.good())
		{
			break;
		}
		else
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Input must be valid. Please re-enter." << endl;
		}
	}
	cout << "\nInput book isbn: ";
	for (;;)
	{
		cin >> isbn;
		if (cin.good())
		{
			break;
		}
		else
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Input must be valid. Please re-enter." << endl;
		}
	}
	cout << "\nInput book genre: ";
	for (;;)
	{
		cin >> genre;
		if (cin.good())
		{
			break;
		}
		else
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Input must be valid. Please re-enter." << endl;
		}
	}

	/**
	 * Add some way to input into library and shelf maybe?
	 */
}

void viewShelf(Library &library)
{

	cout << "What shelf are you looking for?\n1. Drama\n2. Action\n3. Adventure\n4. Romance\n5. NonFiction\n6. Fantasy";
}


// User inputs book ISBN to set books as checked out
void userCheckoutBook(Library& library) {

	bool bookFound = false;
	string inputISBN;
	vector<Shelf>& shelves = library.getShelves();
	

	Book* foundBook;

	cout << "What is the ISBN of the book being checked out?" << endl
		<< "Input ISBN: ";

	cin >> inputISBN;

	for (int i = 0; i < shelves.size(); i++) {
		if (bookFound) {
			break;
		}

		vector<Book>& currentShelf = shelves[i].GetBooks();

		for (int j = 0; j < currentShelf.size(); j++) {

			Book& currentBook = currentShelf[j];

			if (inputISBN == currentBook.getIsbn()) {
				foundBook = &currentBook;
				bookFound = true;
				break;
			}
		}
	}

	if (!bookFound) {
		cout << endl << "Sorry! Book could not be found." << endl;
	} else if (foundBook->getIsCheckedOut()) {
		cout << endl << "Sorry! That book is already checked out." << endl;
	} else if (!foundBook->getIsCheckedOut()) {
		cout << endl << "Checking out the book: " << foundBook->getTitle() << endl;
		foundBook->setIsCheckedOut(true);
	}

}


// User inputs book ISBN to set books as returned
// Not a big fan of just copypasting the same code around but I don't have time
void userReturnBook(Library& library) {

	bool bookFound = false;
	string inputISBN;
	vector<Shelf>& shelves = library.getShelves();


	Book* foundBook;

	cout << "What is the ISBN of the book being returned?" << endl
		<< "Input ISBN: ";

	cin >> inputISBN;

	for (int i = 0; i < shelves.size(); i++) {
		if (bookFound) {
			break;
		}

		vector<Book>& currentShelf = shelves[i].GetBooks();

		for (int j = 0; j < currentShelf.size(); j++) {

			Book& currentBook = currentShelf[j];

			if (inputISBN == currentBook.getIsbn()) {
				foundBook = &currentBook;
				bookFound = true;
				break;
			}
		}
	}

	if (!bookFound) {
		cout << endl << "Sorry! Book could not be found." << endl;
	} else if (!foundBook->getIsCheckedOut()) {
		cout << endl << "Sorry! That book is already here." << endl;
	} else if (foundBook->getIsCheckedOut()) {
		cout << endl << "Returning the book: " << foundBook->getTitle() << endl;
		foundBook->setIsCheckedOut(false);
	}

}


// Finds a book and the shelf it's on by using user input of ISBN
void userFindBook(Library &library)
{

	bool bookFound = false;
	string inputISBN;
	vector<Shelf> shelves = library.getShelves();
	vector<Book> currentShelf;
	Book currentBook;

	cout << "What is the ISBN of the book?" << endl;

	cin >> inputISBN;

	for (int i = 0; i < shelves.size(); i++)
	{
		if (bookFound)
		{
			break;
		}

		currentShelf = shelves[i].GetBooks();

		for (int j = 0; j < currentShelf.size(); j++)
		{

			currentBook = currentShelf[j];

			if (inputISBN == currentBook.getIsbn())
			{
				cout << "Found it! The book: " << currentBook.getTitle() << ", with ISBN: " << inputISBN << " is at shelf " << shelves[i].GetShelfName() << endl;
				bookFound = true;
				break;
			}
		}
	}

	if (!bookFound)
	{
		cout << "Book with ISBN: " << inputISBN << " could not be found" << endl;

	}
}

int main()
{
	// Initialization
	Library DMACC("DMACC");
	Shelf Drama("A1", "Drama");
	DMACC.addShelf(Drama);
	Shelf Action("A2", "Action");
	DMACC.addShelf(Action);
	Shelf Adventure("A3", "Adventure");
	DMACC.addShelf(Adventure);
	Shelf Romance("B1", "Romance");
	DMACC.addShelf(Romance);
	Shelf NonFiction("B2", "NonFiction");
	DMACC.addShelf(NonFiction);
	Shelf Fantasy("B3", "Fantasy");
	DMACC.addShelf(Fantasy);
	Book book1("Shadows in the Mist", "Amara Wilde", "Foggy Pines Publishing", "0001HD", "01/2023", "Drama");
	DMACC.getShelves()[0].AddBook(book1);
	Book book2("The Last Ember", "Cyrus Black", "Firelight Press", "0002PC", "03/2022", "Fantasy");
	DMACC.getShelves()[5].AddBook(book2);
	Book book3("Echoes of Tomorrow", "Sienna Grey", "Futurist Books", "0003UE", "11/2021", "Drama");
	DMACC.getShelves()[0].AddBook(book3);
	Book book4("Threads of Fate", "Elena Moon", "Weaver's Tale Publishing", "0004LO", "07/2020", "Romance");
	DMACC.getShelves()[3].AddBook(book4);
	Book book5("The Silent City", "Harper Lane", "Urban Myth Publishing", "0005PD", "09/2023", "Action");
	DMACC.getShelves()[1].AddBook(book5);
	Book book6("Beneath the Stars", "Nina Rivers", "Celestial Reads", "0006US", "12/2020", "Romance");
	DMACC.getShelves()[3].AddBook(book6);
	Book book7("Reflections in Time", "Jasper North", "Timeless Press", "0007AJ", "04/2022", "NonFiction");
	DMACC.getShelves()[4].AddBook(book7);
	Book book8("The Color of Secrets", "Marissa Bloom", "Whispering Pines Books", "0008NK", "06/2021", "Drama");
	DMACC.getShelves()[0].AddBook(book8);
	Book book9("Rise of the Guardians", "Theo Knight", "Epic Ventures Publishing", "0009PH", "05/2024", "Adventure");
	DMACC.getShelves()[2].AddBook(book9);
	Book book10("The Hidden Path", "Anya Stone", "Mystic Road Press", "0010AK", "10/2021", "Adventure");
	DMACC.getShelves()[2].AddBook(book10);
	Book book11("Voices from the Deep", "Lucas Tide", "Ocean's Echo Publishing", "0011HJ", "02/2023", "Action");
	DMACC.getShelves()[1].AddBook(book11);
	Book book12("Chasing the Horizon", "Riley Hunter", "Wanderlust Books", "0012KH", "08/2022", "NonFiction");
	DMACC.getShelves()[4].AddBook(book12);
	Book book13("Fires of Change", "Sophie Ember", "Transformative Press", "0013PY", "01/2024", "NonFiction");
	DMACC.getShelves()[4].AddBook(book13);
	Book book14("Dancing with Shadows", "Kira Lark", "Twilight Press", "0014KG", "03/2020", "Fantasy");
	DMACC.getShelves()[5].AddBook(book14);
	Book book15("The Last Heir", "Dylan Sage", "Legacy Publishers", "0015LK", "11/2022", "Fantasy");
	DMACC.getShelves()[5].AddBook(book15);
	Book book16("Between Worlds", "Ivy Vale", "Parallel Universe Press", "0016IJ", "06/2023", "Adventure");
	DMACC.getShelves()[2].AddBook(book16);

	cout << DMACC.displayShelves() << endl;
	cout << Fantasy.DisplayBooks() << endl;
	cout << book15.getTitle() << ", " << boolalpha << "is checked out: " << book15.getIsCheckedOut();

	Drama.GetBooks();

	/*cout << book.getTitle() << endl;
	cout << book.getGenre() << endl;*/
	// cout << shelf1.GetShelfName() << endl;
	// cout << shelf1.DisplayBooks();

	// Main Library Program
	const int FIRST_OPTION = 1;
	const int LAST_OPTION = 6;
	int userInput = 0;

	cout << endl << endl;

	// Library Program's text menu
	cout << "Welcome to the Digital Library Service" << endl << endl;

	while (userInput != LAST_OPTION)
	{

		cout << endl << "What would you like to do?" << endl
			<< "1. Checkout a book" << endl
			<< "2. Return a book" << endl
			<< "3. Find a book" << endl
			<< "4. Add a book (Not implemented)" << endl
			<< "5. Remove a book (Not implemented)" << endl
			<< "6. Quit Program" << endl;


		// Getting user's input
		cout << "Selection: ";
		cin >> userInput;

		while (userInput < FIRST_OPTION || userInput > LAST_OPTION)
		{
			cout << "Please select a valid option (1-6)" << endl;
			cout << "Selection: ";
			cin >> userInput;
		}


		switch (userInput) {
			case 1:
				userCheckoutBook(DMACC);
				break;

			case 2:
				userReturnBook(DMACC);
			   break;

			case 3:
				userFindBook(DMACC);
				break;

			case 4:
				// userAddBook(DMACC);
				break;

			case 5:
				// userRemoveBook();
				break;

			case 6:
				break;
		}
	}

	cout << endl << "Goodbye!" << endl;

	return 0;
}
