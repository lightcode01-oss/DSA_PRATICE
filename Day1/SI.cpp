#include<iostream>
using namespace std;
int main(){
    int p,r,t;
    cout<<"enter the principle amount";
    cin>>p;
    cout<<"enter the rate of interest in percentage";
    cin>>r;
    cout<<"enter the time period";
    cin>>t;
    float si=(p*r*t)/100;
    cout<<"the simple interest is: "<<si<<endl;

    return 0;
}