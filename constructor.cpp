#include<iostream>
using namespace std;
class solution{
    int a,b;
    public :
    // constructor
    solution(int x , int y);
    // Method 1:
    //  {
    //     a = x;
    //     b = y;
    // }
    void print(){
        cout<<"The Sum is :"<<a << " + " <<b<<"i"<<endl;
    }
};
// Method 2 
solution :: solution(int x , int y){
    a = x;
    b = y;
}
int main(){
    solution s(4,6);
    solution b = solution(5,8);
    s.print();
    b.print();  
    return 0;
}