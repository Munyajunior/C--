#include <iostream>

using namespace std;

//Exercise 1
class Book{
private:
    string title;
    string author;
    float price;
public:
    //default constructor
    Book(){
    title="Fundamentals of Algorithm";
    author = "M. Promise";
    price = 15.0;
    }

    // Parameterized constructor
    Book(string t, string a, float p){
    title=t;
    author=a;
    price=p;
    }
    void displaybooks(){
    cout<<"Title :"<<title<<endl;
    cout<<"Author :"<<author<<endl;
    cout<<"Price :"<<price<<endl;
    }

};


int main()
{
    // Exercise 1
    Book Book1;
    cout<<"Values for for default constructor"<<endl;
    Book1.displaybooks();
    cout<<"\n"<<endl;
    cout<<"Parameterized constructor"<<endl;
    Book Book2("Animal Farm","George Wea", 20.0);
    Book2.displaybooks();



    return 0;
}
