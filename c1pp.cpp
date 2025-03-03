#include<iostream>
using namespace std;
class A{
    int n;
    int n1;
    int arr[10];
    int arr1[10];
    public :
    void store();
    void display();
    void display1();
};
void A :: store(){
    cout<<"Enter 1 to Store Weak Student Roll Number or Enter 2 to Store Strong Student :"<<endl;
    cin>>n;
    if(n==1){
        cout<<"How many Student Roll U want to Store :";
        cin>>n1;
        for(int i = 0 ; i < n1 ; i++){
            int count = 1;
            cout<<"Enter Weak Student "<< count <<" Roll Number : "<<endl;
            cin>>arr[i];
            count++;
        }
        display();
    }
        else if(n==2){
            cout<<"How many Student Roll U want to Store :";
            cin>>n1;
            for(int i = 0 ; i < n1 ; i++){
                int count1 = 1;
                cout<<"Enter Strong Student "<< count1 <<" Roll Number : "<<endl;
                cin>>arr1[i];
                count1++;
            }
            display1();
        }
    }
void A :: display(){
    for(int i = 0 ; i < n1 ; i++){
        cout<<"The Weak Student Roll is :"<<arr[i]<<endl;
    }
}
void A :: display1(){
    for(int i = 0 ; i < n1 ; i++){
        cout<<"The Strong Student Roll is :"<<arr[i]<<endl;
    }
}
int main(){
    A cp;
    cp.store();
    return 0;
}