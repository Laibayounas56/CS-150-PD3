#include<iostream>
using namespace std;
main(){
int age,moves;
int average;
cout<<"Enter the person's age:"<<endl;
cin>> age;
cout<<"Enter the number of times they've moved:"<<endl;
cin>>moves;
average=age/(moves+1);
cout<<"Average number of years lived in the same house:"<<average<<endl;

}