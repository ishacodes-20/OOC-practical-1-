#include <iostream>
#include <limits>
#include <string>
using namespace std;

class Employee {
private:
    int employID;
    string name;
    string designation;
    string branch;
    double basicSalary;

public:
    void getdata() {
        cout << "Enter employee ID: ";
        cin >> employID;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter employee name: ";
        getline(cin, name);

        cout << "Enter designation: ";
        getline(cin, designation);

        cout << "Enter branch: ";
        getline(cin, branch);

        cout << "Enter basic salary: ";
        cin >> basicSalary;
    }

    void putdata() const {
        cout << "\nEmployee Details:" << endl;
        cout << "Employee ID: " << employID << endl;
        cout << "Name: " << name << endl;
        cout << "Designation: " << designation << endl;
        cout << "Branch: " << branch << endl;
        cout << "Basic Salary: " << basicSalary << endl;
    }
};

int main() {
    Employee emp;
    emp.getdata();
    emp.putdata();
    return 0;
}
