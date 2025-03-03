#include<iostream>
using namespace std;
class number{
    int a,b;
    public :
    friend bool compare(number obj1 , number obj2);
    void setdata(){
        cout<<"Enter 1st Number : ";
        cin>>a;
        cout<<"Enter 2nd Number : ";
        cin>>b;
    }
    void getdata(){
       if(a==b){
        cout<<"It's Same "<<endl;
       }
       else{
        cout<<"It's Not Same"<<endl;
       }
    }
};

bool compare(number obj1, number obj2) {
 
    return (obj1.a == obj2.a && obj1.b == obj2.b);
}
int main(){
    number c,c1;
    c.setdata();
    c.getdata();
    c1.setdata();
    c1.getdata();
    if (compare(c, c1)) {
        cout << "The two numbers are same." << endl;
    } else {
        cout << "The two numbers are different." << endl;
    }
    return 0;
}