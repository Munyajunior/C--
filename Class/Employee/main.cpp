#include <iostream>

using namespace std;
class Employee{
private:
    int employeeId;
    string name;
    double salary;
public:
    // Constructor
    Employee(int id, string n, double s){
        employeeId = id;
        name=n;
        salary=s;
    }
    //Getters
    int getId() const{
        return employeeId;
    }


    string getName() const{
        return name;
    }

    double getSalary() const{
        return salary;
    }

    //Setters
    void setID(const int id){
        employeeId = id;
    }

    void setName(const string n){
        name = n;
    }

    void setSalary(const double s){
        salary = s;
    }

    double increaseSalaryByPercantage(double percentage){
        salary = getSalary() * percentage / 100 + getSalary();
        return salary;
    }

    double increaseSalaryByAmount(double amount){
        salary = getSalary() + amount;
        return salary;
    }

    void displayEmployeeDetails(){
        cout<<"Employee Details"<<endl;
        cout<<"Employee ID :"<<getId()<<endl;
        cout<<"Employee Name :"<<getName()<<endl;
        cout<<"Employee Salary :"<<getSalary()<<endl;

    }
};

//Manager class that extends from employee
class Manager : public Employee{
private:
    double bonus;
public:
        //Constructor
        Manager(int id, string name, double salary, double empBonus) : Employee(id, name, salary) {
            bonus = empBonus;
        }
        //Getters
        double getBonus() const {
            return bonus;
        }
        //Setters
        void setBonus(double empBonus) {
            bonus = empBonus;
        }

        double calculateTotalSalary() {
            return getSalary() + bonus;
        }

        //Increase salary and bonus by percentage
        void increaseSalary(double percentage) {
            Employee::increaseSalaryByPercantage(percentage);
            bonus += bonus * (percentage / 100.0);
        }

        //increase salary and bonus by fixed amount
        void increaseSalaryByAmount(double amount) {
            Employee::increaseSalaryByAmount(amount);
            bonus += amount;
        }

        //display manager Details
        void displayDetails() {
            Employee::displayEmployeeDetails();
            cout << "Bonus: $" << bonus << endl;
            cout << "Total Salary: $" << calculateTotalSalary() << endl;
        }
};



int main()
{
    // Employee emp(1, "John", 5000.0);
    // emp.displayEmployeeDetails();
    // cout << endl;
    
    // emp.setID(2);
    // emp.setName("Jane");
    // emp.setSalary(6000.0);
    // emp.displayEmployeeDetails();

    // cout << endl;
    // emp.increaseSalaryByPercantage(10.0);
    // cout<<"After 10% increase"<<endl;
    // emp.displayEmployeeDetails();
    // cout << endl;

    // emp.increaseSalaryByAmount(1000.0);
    // cout<<"After 1000$ increase"<<endl;
    // emp.displayEmployeeDetails();

    Manager mgr(201, "Jane Smith", 80000.0, 2000.0);
    cout << "Initial Manager Details:" << endl;
    mgr.displayDetails();
    cout << endl;

    // Increase salary and bonus by 15%
    mgr.increaseSalary(15);
    cout << "After 15% raise:" << endl;
    mgr.displayDetails();
    cout << endl;

    // Increase salary and bonus by $8000
    mgr.increaseSalaryByAmount(8000);
    cout << "After $8000 raise:" << endl;
    mgr.displayDetails();

    return 0;
}
