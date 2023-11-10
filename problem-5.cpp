#include <iostream>
using namespace std;



int main()
{
    double quantity, product,Total;

        cout << "Enter product number: "<<endl;
        cin >> product;
       cout<< "Enter quantity number: "<<endl;
            cin >> quantity;

    if(product==1)
    {
      Total = quantity * 200.75;
    }
      else if(product==2)
    {
      Total = quantity * 345.50;
    }
      else if(product==3)
    {
      Total = quantity * 775.75;
    }
      else if(product==4)
    {
      Total = quantity * 400.35;
    }
      else if(product==5)
    {
      Total = quantity * 1200.75;
    }

cout<<"Total retail :"<<Total<<endl;


    return 0;
}
