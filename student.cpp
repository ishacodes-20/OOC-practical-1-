#include<iostream>
#include<string>
using namespace std;
class student {
    private:
    string name;
    int rollNo;
    float marks;
    public:
    void inputDetails() {
        cout<<"Enter Stdent name:";
        getline(cin>>ws,name);
        cout<<"Enter Roll Number:";
        cin>>marks;
    }
    void displayDetails() const {
        cout<<"\n----Student Details----\n";
        cout<<"Name: "<<name <<endl;
       cout<<"Roll No.: "<<rollNo << endl;
       cout<<"Marks: "<<marks << endl;
        }
};
int main()
{
    student s;
    s.inputDetails();
    s.displayDetails();
    return 0;
}
