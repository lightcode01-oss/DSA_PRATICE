// take a vector input and prints all the element
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec;
    int n;
    cout<<"enter the number of elements you want to enter";
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cout<<"enter the element you want to insert";
        cin>>ele;
        vec.push_back(ele);

    }
    cout<<"the elements in the vector are\n";
    for(auto i : vec){
        cout<<i<<"\n";
    }
    cout<<"the size of the vector is: "<<vec.size()<<endl;
    cout<<"the capacity of the vector is: "<<vec.capacity()<<endl;
}
