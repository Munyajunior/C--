#include <iostream>

using namespace std;

class Student{
private:
    string name;
    int age;
    int level;

public:
    //Default Constructor
    Student(){
    name="John";
    age=20;
    level=200;
    };

    //Parametrized Constructor
    Student(string n, int a, int l){
    name =n;
    age=a;
    level=l;
    };

    //Getters
    //Getter for name
    string getName() const{
        return name;
    };

    //Getter for Age
    int getAge() const {
        return age;
    };

    //Getter for Level
    int getLevel() const {
        return level;
    };

    //Setters

    //setter for name
    void setName(const string n){
        name = n;
    };

    //setter for age
    void setAge(const int a){
        age = a;
    };

    //Setter for level
    void setLevel(const int l){
        level = l;
    };

    //Display Student Details
    void studentDetails(){
        cout<<"Student Name: "<<name<<endl;
        cout<<"Student Age: "<<age<<endl;
        cout<<"Student Level: "<<level<<endl;
    }
};

int main()
{
     cout<<"Default Constructor"<<endl;
     Student student;
     student.studentDetails();

     /*Student student1;
     student1.setName("IVO");
     student1.setAge=(23);
     student1.setLevel=(200);
     */
     cout<<"\n"<<endl;
     cout<<"Parameterized Constructor"<<endl;
     Student st2("IVO",23,200);
     st2.studentDetails();
    return 0;
}
