#include<iostream>
using namespace std;
class emp{
    int id;
    static int count;
    public :
    void setdata(){
        cout<<"Enter Id of Employee "<<endl;
        cin>>id;
    }
    void getdata(){
        cout<<"The Id of Employee " <<count+1<<" is : "<<id<<endl;
        count++;
    }
    // Static Functions 
    static void getcount(){
        cout<<"The Value of Count is : "<<count<<endl;
    } 
};
int emp :: count = 0; // we can inistalize count by any number eg. count = 123 so the count will start from 123;
int main(){
    emp Rudhar,Nirmanah,Aklevya;
    Rudhar.setdata();
    Rudhar.getdata();
    Rudhar.getcount();
    Nirmanah.setdata();
    Nirmanah.getdata();
    Nirmanah.getcount();
    Aklevya.setdata();
    Aklevya.getdata();  
    Aklevya.getcount();
    return 0;
}