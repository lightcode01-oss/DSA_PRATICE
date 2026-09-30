#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the till number you want to sum of odd number";
    cin>>n;
    cout<<"the enter number is" << n <<endl;
    int count = 0;
    int i =1;
    while(i<=n){
        if(i%2!=0){
            count = count + i;
            cout<<"the number that is used"<<i<<endl;
        }
        i++;
        

    }
    cout<<"the sum of odd number"<< count;
}
