#include<iostream>
using namespace std;
main(){
int n;
int w,h;
int walls;
cout<<"Number of square meters you can print"<<endl;
cin>> n;
cout<<"Width of single wall(meters)"<<endl;
cin>>w;
cout<<"Height of single wall(meters)"<<endl;
cin>>h;
walls=n/(w*h);
cout<<"Number of walls you can paint:"<<walls<<endl;
}