//find second largest number of the vector input arr
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;
    int n;
    cout<<"enter the number of elements you want to enter";
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cout<<"enter the element you want to insert";
        cin>>ele;
        arr.push_back(ele);
    }
    int largest=arr[0];
    int secondlargest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
        }
        bool found=false;
        if(arr[i]<largest){
            if(!found || arr[i]>secondlargest){
                secondlargest=arr[i];
                found=true;
            }
        }
        
    
    }
    
    
    
    cout<<"the second largest element is: "<<secondlargest<<endl;
    cout<<"the largest element is: "<<largest<<endl;
}