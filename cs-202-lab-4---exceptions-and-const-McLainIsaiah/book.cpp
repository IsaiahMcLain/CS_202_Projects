#include "book.h"
#include <sstream>
const float MIN_PRICE = .25;
const int MIN_YEAR  = 1436;
const int MAX_YEAR  = 2020;

using namespace std;

Book::Book(){
	title = "";
	author = "";
	publisher = "";
	copyrightYear = MAX_YEAR;
	price = MIN_PRICE;
}
Book::Book(string newTitle, string newAuthor, int newYear, double newPrice){
	setTitle(newTitle);
	setAuthor(newAuthor);
	publisher = "";
	setYear(newYear);
	setPrice(newPrice);
}
Book::Book(string newTitle, string newAuthor, string newPublisher, int newYear, double newPrice){
	setTitle(newTitle);
	setAuthor(newAuthor);
	setPublisher(newPublisher);
	setYear(newYear);
	setPrice(newPrice);
}
Book::Book(const Book& rhs){
	title = rhs.title;
	author = rhs.author;
	publisher = rhs.publisher;
	copyrightYear = rhs.copyrightYear;
	price = rhs.price;
}

string Book::getTitle() const{
	return title;
}
string Book::getAuthor() const{
	return author;
}
string Book::getPublisher() const{
	return publisher;
}
int Book::getYear() const{
	return copyrightYear;
}
double Book::getPrice() const{
	return price;
}

void Book::setTitle(string newTitle){
	title = newTitle;
}
void Book::setAuthor(string newAuthor){
	author = newAuthor;
}
void Book::setPublisher(string newPublisher){
	publisher = newPublisher;
}
void Book::setYear(int newYear){
	if(newYear < MIN_YEAR || newYear > MAX_YEAR){
	    stringstream error; // slow but works. Better would be format, but only available in C++ 20
	    error << "Invalid copyright year \"" <<  newYear << "\" for book " << title;
		throw invalid_argument(error.str());
	}
	else{
		copyrightYear = newYear;
	}
}
void Book::setPrice(double newPrice){
	if(newPrice < MIN_PRICE){
		price = MIN_PRICE;
	}
	else{
		price = newPrice;
	}
}

void Book::display(){
    if(valid()) {
        cout << title << ": " << author << endl;
        cout << publisher << ", " << copyrightYear << endl;
        cout << "$" << price << endl;
    } else {
        cout << "This book has incomplete or corrupt data" << endl;
    }
}

bool Book::valid() const {
    return !(title.empty() || author.empty() || publisher.empty());
}
