#include <iostream>

using namespace std;

class Box{
private:
    double length = 0.0;
    double breadth = 0.0;
    double height = 0.0;

public:
    Box(){}

    Box(double length, double breadth, double height){
        setLength(length);
        setBreadth(breadth);
        setHeight(height);
    }

    ~Box(){}


    // Setter Methods
    void setLength(double length){
        if(length>0.0) this->length = length;
        else cout << "Length must be grater than zero" << endl;
    }

    void setBreadth(double breadth){
        if(breadth>0.0) this->breadth = breadth;
        else cout << "Breadth must be grater than zero" << endl;
    }

    void setHeight(double height){
        if(height>0.0) this->height = height;
        else cout << "Height must be grater than zero" << endl;
    }

    // Getter Methods
    double getLength(){ return length;}
    double getBreadth(){ return breadth;}
    double getHeight(){ return height;}

    // Other Methods
    double getVolume(){
        return length*breadth*height;
    }

    void printAll() {
        cout << "Length : " << getLength() << endl;
        cout << "Breadth : " << getBreadth() << endl;
        cout << "Height : " << getHeight() << endl;
        cout << "Volume : " << getVolume() << endl;
    }
};

int main(){

    Box b(10, 8, 20);
    b.printAll();

    return 0;
}

