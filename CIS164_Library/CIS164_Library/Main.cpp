// CIS164_Library.cpp : Defines the entry point for the application.
//

#include "Main.h"
#include "Shelf.h"
#include "Book.h"
#include "Library.h"


using namespace std;

void userAddBook() {
	string author;
	string title;
	string publicationDate;
	string publisher;
	string genre;
	string isbn;

	cout << "\nInput book title: ";
	for (;;) {
		cin >> title;
		if (cin.good()) {
			break;
		}
		else {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Input must be valid. Please re-enter." << endl;
		}
	}
	cout << "\nInput book author: ";
	for (;;) {
		cin >> author;
		if (cin.good()) {
			break;
		}
		else {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Input must be valid. Please re-enter." << endl;
		}
	}
	cout << "\nInput book publisher: ";
	for (;;) {
		cin >> publisher;
		if (cin.good()) {
			break;
		}
		else {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Input must be valid. Please re-enter." << endl;
		}
	}
	cout << "\nInput book publication date(mm/yyyy): ";
	for (;;) {
		cin >> publicationDate;
		if (cin.good()) {
			break;
		}
		else {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Input must be valid. Please re-enter." << endl;
		}
	}
	cout << "\nInput book isbn: ";
	for (;;) {
		cin >> isbn;
		if (cin.good()) {
			break;
		}
		else {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Input must be valid. Please re-enter." << endl;
		}
	}
	cout << "\nInput book genre: "; 
	for (;;) {
		cin >> genre;
		if (cin.good()) {
			break;
		}
		else {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Input must be valid. Please re-enter." << endl;
		}
	}

	
}

void viewShelf(Library Library) { 
	int shelfName;
	cout << "\nWhat shelf are you looking for?\n[1]Drama\n[2]Action\n[3]Adventure\n[4]Romance\n[5]NonFiction\n[6]Fantasy\n\nInput the number corresponding with the genre: ";
	for (;;) {
		cin >> shelfName;
		if (shelfName == 1) {
			cout << "You choose Drama\n";
		}
		else if (shelfName == 2) {
			cout << "You choose Action\n";
		}
		else if (shelfName == 3) {
			cout << "You choose Adventure\n";
		}
		else if (shelfName == 4) {
			cout << "You choose Romance\n";
		}
		else if (shelfName == 5) {
			cout << "You choose NonFiction\n";
		}
		else if (shelfName == 6) {
			cout << "You choose Fantasy\n";
			cout << Library.getLibraryName();
		}
		else {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Input must be valid. Please re-enter." << endl;
		}
	}
}

int main()
{
	cout << "Hello CMake." << endl;
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
	Drama.AddBook(book1);
	Book book2("The Last Ember", "Cyrus Black", "Firelight Press", "0002PC", "03/2022", "Fantasy");
	Fantasy.AddBook(book2);
	Book book3("Echoes of Tomorrow", "Sienna Grey", "Futurist Books", "0003UE", "11/2021", "Drama");
	Drama.AddBook(book3);
	Book book4("Threads of Fate", "Elena Moon", "Weaver's Tale Publishing", "0004LO", "07/2020", "Romance");
	Romance.AddBook(book4);
	Book book5("The Silent City", "Harper Lane", "Urban Myth Publishing", "0005PD", "09/2023", "Action");
	Action.AddBook(book5);
	Book book6("Beneath the Stars", "Nina Rivers", "Celestial Reads", "0006US", "12/2020", "Romance");
	Romance.AddBook(book6);
	Book book7("Reflections in Time", "Jasper North", "Timeless Press", "0007AJ", "04/2022", "NonFiction");
	NonFiction.AddBook(book7);
	Book book8("The Color of Secrets", "Marissa Bloom", "Whispering Pines Books", "0008NK", "06/2021", "Drama");
	Drama.AddBook(book8);
	Book book9("Rise of the Guardians", "Theo Knight", "Epic Ventures Publishing", "0009PH", "05/2024", "Adventure");
	Adventure.AddBook(book9);
	Book book10("The Hidden Path", "Anya Stone", "Mystic Road Press", "0010AK", "10/2021", "Adventure");
	Adventure.AddBook(book10);
	Book book11("Voices from the Deep", "Lucas Tide", "Ocean's Echo Publishing", "0011HJ", "02/2023", "Action");
	Action.AddBook(book11);
	Book book12("Chasing the Horizon", "Riley Hunter", "Wanderlust Books", "0012KH", "08/2022", "NonFiction");
	NonFiction.AddBook(book12);
	Book book13("Fires of Change", "Sophie Ember", "Transformative Press", "0013PY", "01/2024", "NonFiction");
	NonFiction.AddBook(book13);
	Book book14("Dancing with Shadows", "Kira Lark", "Twilight Press", "0014KG", "03/2020", "Fantasy");
	Fantasy.AddBook(book14);
	Book book15("The Last Heir", "Dylan Sage", "Legacy Publishers", "0015LK", "11/2022", "Fantasy");
	Fantasy.AddBook(book15);
	Book book16("Between Worlds", "Ivy Vale", "Parallel Universe Press", "0016IJ", "06/2023", "Adventure");
	Adventure.AddBook(book16);


	//cout << DMACC.displayShelves() << endl;
	//cout << Fantasy.DisplayBooks() << endl;
	//cout << book15.getTitle() << ", " << boolalpha << "is checked out: " << book15.getIsCheckedOut();



	/*cout << book.getTitle() << endl;
	cout << book.getGenre() << endl;*/
	//cout << shelf1.GetShelfName() << endl;
	//cout << shelf1.DisplayBooks();

	viewShelf(DMACC);
	return 0;
}
