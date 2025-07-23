#include <iostream>

using namespace std;

// Exercise 2
class Employee{
private:
    int empID;
    string name;
    double salary;
    double percent;
    double raise;

public:
    Employee(int id, string n, double s,double p, double r){
        empID = id;
        name = n;
        salary = s;
        percent = p;
        raise = r;
    };
    double increaseSalary(){
        raise = percent*salary;
        raise = raise + salary;
        return raise;

        };

    void displayEmployeeDetails(){
        cout<<"Employee Details"<<endl;
        cout<<"Employee ID :"<<empID<<endl;
        cout<<"Employee Name :"<<name<<endl;
        cout<<"Employee Salary :"<<salary<<endl;
        cout<<"Employee Raise :"<<increaseSalary()<<endl;
        };


    };

int main()
{
        // Exercise 2
    cout<<"\n"<<endl;
    cout<<"Exercise 2"<<endl;
    Employee Employee1(1002,"Munya Jr",200.00,0.05, 0);
    cout<<"Salary raise of 5%"<<endl;
    Employee1.displayEmployeeDetails();



    return 0;
}
