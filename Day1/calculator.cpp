#include<iostream>
using namespace std;
int main(){
    int a , b;
    char opt;
    cout << "enter the 1st number:"<<endl;
    cin >> a ;
    cout<<"enter the operator you want to perform"<<endl;
    cin >> opt;
    cout << "enter the 2nd number:"<<endl;
    if(opt == '+'){
        cin >> b;
        cout << "the sum of the two numbers is: "<<a+b<<endl;
    }
    else if(opt == '-'){
        cin >> b;
        cout << "the difference of the two numbers is: "<<a-b<<endl;
    }
    else if(opt == '*'){
        cin >> b;
        cout << "the product of the two numbers is: "<<a*b<<endl;
    }
    else if(opt == '/'){
        cin >> b;
        cout << "the division of the two numbers is: "<<a/b<<endl;
    }
    else{
        cout<<"invalid operator"<<endl;
    }
    return 0;
}