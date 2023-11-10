#include<iostream>
#include<math.h>

using namespace std;

int main(){

    double distance, cost_per_l,avg_k_per_l,parking_fees,tolls,total_cost;

    cout<<"Total kilometers driven:"<<endl;
     cin>> distance;

    cout<<"Cost per liter of petrol:"<<endl;
     cin>>cost_per_l;

    cout<<"Average kilometer per liter:"<<endl;
     cin>>avg_k_per_l;

    cout<<"Parking fees per day:"<<endl;
     cin>>parking_fees;

    cout<<"Tolls per day:"<<endl;
     cin>>tolls;


    total_cost=(distance/avg_k_per_l)*cost_per_l+parking_fees+tolls;

    cout<<"driving cost:"<<total_cost<<endl;


return 0;

    }
