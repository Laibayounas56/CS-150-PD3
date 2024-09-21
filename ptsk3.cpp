#include<iostream>
using namespace std;
main(){
int acc,vf,vi,t;
cout<<"Enter initial velocity(m/s)"<<endl;
cin>>vi;
cout<<"Enter Acceleration(m/s^2)"<<endl;
cin>> acc;
cout<<"Enter time"<<endl;
cin>> t;
vf=acc*t+vi;
cout<<"THe final velocity is:"<<vf<<endl;
}