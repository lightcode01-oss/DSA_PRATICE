#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"eneter the number till which you want to display the even number";
    cin>>n;
    int i=1;
    for(i;i<=n;i++){
        if(i%2==0){
            cout<<"the even number are: "<<i<<endl;
        }
        
    }
}