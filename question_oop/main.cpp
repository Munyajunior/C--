#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Book{
private:
    int bookID;
    string title;
    string author;
public:
    //Default Constructor
    Book() : bookID(0),title(""),author("") {}
    //Parameterized Constructor
    Book(int id, string t,string a) : bookID(id),title(t),author(a){}

    /****** Getters ******/
    //getter for name
    int getBookID() const {return bookID;}
    string getTitle() const {return title;}
    string getAuthor() const {return author;}

    /*******Setters*********/
    //setter for id
    void setBookID(int id){ bookID=id;}
    void setTitle(const string t){ title=t; }
    void setAuthor(const string a){ author=a; }

    void libraryDetails(){
        cout<<"Book ID: "<<bookID<<endl;
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
    }
};

class Library{
    private:
        vector<Book>books;
    public:
        // add new book to library
        void addBook(int bookID, string newTitle, string newAuthor){
            //check if book id already exist
            for (const auto& book:books){
                if(book.getBookID() == bookID){
                    cout<<"Error: Book with ID "<< bookID<<" Already Exist."<<endl;
                    return;
                }
            }
            Book newBook(bookID, newTitle, newAuthor);
            books.push_back(newBook);
            cout<<"Book added successfully"<<endl;
            }
        // Remove a book by ID
        void removeBook(int bookID){
            auto it = find_if(books.begin(), books.end(),
                [bookID](const Book& b){return b.getBookID() == bookID;});
            if (it != books.end()){
                books.erase(it);
                cout << "Book with ID "<<bookID<<"  removed successfully!"<<endl;
            }else{
                cout<< "Error: Book with ID "<<bookID<<" not found."<<endl;
            }
        }
        // Update book Info by Id
        void updateBook(int bookID, string newTItle, string newAuthor){
            for (auto& book: books){
                if(book.getBookID()==bookID){
                    book.setTitle(newTItle);
                    book.setAuthor(newAuthor);
                    cout<<"Book with ID "<< bookID <<" Updated successfully"<<endl;
                    return;
                }
            }
            cout<< "Error: Book with ID "<<bookID<<" not found."<<endl;
        }

        // Search all books in the library
        void searchBook(string title){
            bool found = false;
            cout<<"Search results for title: "<< title<<endl;
            for(const auto& book:books){
                if(book.getTitle().find(title)!= string::npos){
                    book.libraryDetails();
                    found=true;
                }
            }
            if (!found){
                cout<<"No books with title containing: "<<title<<endl;
                }
            }
        // Display all books in the library
        void displayAllBooks() const{
            if (books.empty()){
                cout<<"The library is currently empty."<<endl;
                return;
            }
            cout<< "All books in the library:"<< endl;
            cout <<"_____________________________________"<<endl;
            for(const auto& book:books){
                book.libraryDetails();
            }
        }
};

int main()
{
    // Demonstration of functionality
    cout<<"---------------- Adding Books---------------------"<<endl;
    Library.addBook(101,"The Great Gatsby", "F. Scott Fitzgerald");
    Library.addBook(102, "To kill a Mockingbird", "Harper Lee");
    Library.addBook(103, "1984", "George Orwell");
    Library.addBook(104, "Pride and Prejudice", "Jane Austen");

    cout<<"\n------------ Display All Books -----------------"<<endl;
    Library.displayAllBooks();

    cout<<"\n------------- SearchBooks ------------------"<<endl;
    Library.searchBook("Pride");
    Library.searchBook("Unknown");

    cout<<"\n------------- Update Book ------------------"<<endl;
    Library.updateBook(103,"Nineteen Eighty-Four", "George Ornell");

    cout<<"\n------------- Remove Book ------------------"<<endl;
    Library.removeBook(102);
    Library.removeBook(999); //Non-existing ID

    cout<<"\n------------- Display All Books After Modification ------------------"<<endl;
    Library.displayAllBooks();
    return 0;
}
