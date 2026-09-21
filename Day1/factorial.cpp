#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number you want to find the factorial of ";
    cin>>n;
    int fact=1;
    int result = 1;
    for(int i=0;i<n;i++){
        result = result*fact;
        fact++;
        cout<<result<<"factorial process"<<endl;

    }
    cout<<"factorial is"<<result;
    return 0;
}