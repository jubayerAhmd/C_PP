#include <iostream>

using namespace std;

class Employee{
private:
    string name;
    int yearOfJoining;
    double salary;
    string address;

public:

    static bool isPrintedOnce;

    Employee(){}
    Employee(string name, int yearOfJoining, double salary, string address){
        setName(name);
        setYearOfJoining(yearOfJoining);
        setSalary(salary);
        setAddress(address);
    }
    ~Employee(){
        isPrintedOnce = false;
    }


    // Setter Methods
    void setName(string name){
        if(name.length()>0) this->name = name;
        else cout << "Enter a valid name" << endl;
    }

    void setYearOfJoining(int yearOfJoining){
        if(yearOfJoining>1000) this->yearOfJoining = yearOfJoining;
        else cout << "Enter a valid joining year" << endl;
    }

    void setSalary(double salary){
        if(salary>0.0) this->salary = salary;
        else cout << "Salary must be grater than zero" << endl;
    }

    void setAddress(string address){
        if(address.length()>0) this->address = address;
        else cout << "Enter a valid address" << endl;
    }

    // Getter Methods
    string getName(){ return name;}
    int getYearOfJoining(){ return yearOfJoining;}
    double getSalary(){ return salary;}
    string getAddress(){ return address;}


    void printAll() {
        if(!isPrintedOnce) cout << "Name\tYear of joining\t\tSalary\tAddress\n";
        isPrintedOnce = true;

        cout << getName() << "\t" << getYearOfJoining() <<"\t\t\t\t"<< getSalary() <<"\t" << getAddress() << "\n";

    }
};

bool Employee::isPrintedOnce = false;
const int totalEmployee = 3;

int main(){

    Employee arr[totalEmployee] = { Employee("Robert", 1994, 27000, "64C- WallsStreat"), Employee("Samm", 2000, 78000, "68D- WallsStreat") , Employee("John", 1999, 51000, "26B- WallsStreat") };

    for (int i = 0; i < totalEmployee; i++) {
        arr[i].printAll();
    }

    return 0;
}

