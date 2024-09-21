#include<iostream>
using namespace std;
main(){
float i,p;
float chance;
cout<<"Enter imposter count"<<endl;
cin>> i;
cout<<"Enter player count"<<endl;
cin>> p;
chance=100*(i/p);
cout<<"The chance of being an imposter:"<<chance<<"%"<<endl;

}