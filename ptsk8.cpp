#include<iostream>
using namespace std;
main(){
float vegetable,fruit;
int totalV,totalF;
float total;
float earning;
cout<<"Enter vegetable price per kilogram(in coins)"<<endl;
cin>> vegetable;
cout<<"Enter fruits price per kg(in coins)"<<endl;
cin>>fruit;
cout<<"Enter total kilograms of vegetables"<<endl;
cin>>totalV;
cout<<"Enter total kilograms of fruits"<<endl;
cin>>totalF;
total=(vegetable*totalV)+(fruit*totalF);
earning=total/1.94;
cout<<"Total Earning in rupees:"<<earning<<endl;

}