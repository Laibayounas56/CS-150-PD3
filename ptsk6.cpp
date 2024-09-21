#include<iostream>
using namespace std;
main(){
int size,cost,area,cost_p,cost_a;
cout<<"Enter the size of fertilizer bag in pounds"<<endl;
cin>>size;
cout<<"Enter the cost of the bag"<<endl;
cin>> cost;
cout<<"Enter the area in square field that can be covered by the bag"<<endl;
cin>>area;
cost_p=cost/size;
cost_a=cost/area;
cout<<"Cost of fertilizer per pound:"<<cost_p<<endl;
cout<<"Cost of fertilizer per square foot:"<<cost_a<<endl;
}