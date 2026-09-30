#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number you want to get the factorial of";
    cin>>n;
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact*i;

    }
    cout<<"the factorial of the number you have enetered: "<<fact<<endl;
}