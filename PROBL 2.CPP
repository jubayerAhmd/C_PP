#include <iostream>

using namespace std;

class Rectangle{
private:
    double length = 0.0;
    double breadth = 0.0;

public:
    // Constructors
    Rectangle(){}


    // Setter Methods
    void setLength(double length){
        if(length>0.0) this->length = length;
        else cout << "Length must be grater than zero" << endl;
    }

    void setBreadth(double breadth){
        if(breadth>0.0) this->breadth = breadth;
        else cout << "Breadth must be grater than zero" << endl;
    }

    // Getter Methods
    double getLength(){ return length;}
    double getBreadth(){ return breadth;}

    // Other Methods
    double getArea(){
        return length*breadth;
    }

    void initializeRectange(){
        int l, b;
        cout << "Enter length: "; cin >> l; setLength(l);
        cout << "Enter breadth: "; cin >> b; setBreadth(b);
        cout << endl;
    }

    void printAll() {
        cout << "Length : " << getLength() << endl;
        cout << "Breadth : " << getBreadth() << endl;
        cout << "Area : " << getArea() << endl;
    }
};

int main(){

    Rectangle r;
    r.initializeRectange();
    r.printAll();

    return 0;
}

