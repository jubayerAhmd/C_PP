#include<iostream>
#include<conio.h>
using namespace std;


int main()
{
    int i, n;
    float sum=0, avarage;
    cout << "Enter number of elements in array" <<endl;
    cin >> n;
    cout<<"Enter Marks obtained in Subjects: ";


    int arr[n];

    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        sum = sum+arr[i];
    }
    avarage = sum/n;

    cout<<"Total Number "<<sum<<endl;
    cout<<"Average Marks = "<<avarage;

    cout<<endl;
    getch ();
}
