#include<iostream>
using namespace std;
main(){
int number;
int a,b,c,d;
int sum;
cout<<"Enter a four digit number"<<endl;
cin>>number;
a=number%10;
b=(number/10)%10;
c=(number/100)%10;
d=(number/1000)%10;
sum=a+b+c+d;
cout<<"Sum of individual digits:"<<sum<<endl;

}