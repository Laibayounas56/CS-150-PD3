#include<iostream>
using namespace std;
main(){
string name;
float kg,days;
cout<<"Enter the name of person"<<endl;
cin>>name;
cout<<"Enter the target weight loss in kgs"<<endl;
cin>> kg;
days=kg*15;
cout<<name<<"will need "<< days <<" days to lose weight by doctor's suggestion"<<endl;
}