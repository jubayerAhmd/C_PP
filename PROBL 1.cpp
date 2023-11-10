#include <iostream>

using namespace std;

class Student{
private:
    string name;
    int rollNumber;
    string phoneNumber;
    string address;


public:

    Student(){}

    Student(string name, int rollNumber, string phoneNumber, string address){
        setName(name);
        setRollNumber(rollNumber);
        setPhoneNumber(phoneNumber);
        setAddress(address);
    }

    // Setter Methods
    void setName(string name){
        if(name.length() > 0) this->name = name;
        else cout << "Place a valid name";
    }

    void setRollNumber(int rollNumber) {
        if(rollNumber > 0 ) this->rollNumber = rollNumber;
        else cout << "Place a valid roll number";
    }

    void setPhoneNumber(string phoneNumber){
        if(phoneNumber.length() > 0) this->phoneNumber = phoneNumber;
        else cout << "Place a valid phone number";
    }

    void setAddress(string address){
        if(address.length() > 0) this->address = address;
        else cout << "Place a valid address";
    }

    // Getter Methods
    string getName(){ return name; }
    int getRollNumber(){ return rollNumber; }
    string getPhoneNumber(){ return phoneNumber; }
    string getAddress(){ return address; }



    void printData() {
        cout << "Name : " << getName() << endl;
        cout << "Roll No : " << getRollNumber() << endl;
        cout << "Phone Number : " << getPhoneNumber() << endl;
        cout << "Address : " << getAddress() << "\n\n";
    }

};

int main(){

    Student Sam("Sam", 01, "+8801816829147", "Gouripur, Daudkanki, Cumilla ");
    Student John("John", 02, "+8801663553306", "Mirpur, kafrul, Dhaka 1200");

    Sam.printData();
    John.printData();

    return 0;
}

