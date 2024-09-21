#include<iostream>
using namespace std;
main(){
string name;
int atp,ctp,nat,nct,charity;
int total,donation,remaining;
cout<<"Enter movie name"<<endl;
cin>> name;
cout<<"Enter adult ticket price"<<endl;
cin>>atp;
cout<<"Enter child ticket price"<<endl;
cin>>ctp;
cout<<"Number of adult tickets sold"<<endl;
cin>>nat;
cout<<"No of child tickets sold"<<endl;
cin>>nct;
cout<<"Percentage amount to donated by charity"<<endl;
cin>>charity;
total=(atp*nat)+(ctp*nct);
donation=total*0.1;
remaining=total-donation;
cout<<"Movie name:"<<name<<endl;
cout<<"Total amount generated from ticket sales: "<<total<<endl;
cout<<"Donation to charity "<<donation<<endl;
cout<<"Remaining amount after donation: "<<remaining <<endl;


}