#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"eneter the number to check the sum which is divisible by 3"<<endl;
    cin>>n;
    int sum = 0;
    for(int i = 1;i<=n;i++){
        if(i%3==0){
            sum += i;
            cout<<"the number that are divible by 3: "<<i<<endl;
        }
    }
    cout<<"the sum of number divible by 3 is : "<<sum<<endl;
}