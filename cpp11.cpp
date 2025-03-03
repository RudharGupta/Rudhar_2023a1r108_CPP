#include<iostream>
using namespace std;

// forward Decleration

class area;
//class sum_of_areas;
class sum_of_areas{
    public :
    int sum_area(area , area );
};
class area{
    int l,h;
    friend int sum_of_areas :: sum_area(area o1 , area o2); 
   // used for indivial functions to use private functions   
   
   //friend class sum_of_areas; // Give The permission To use private function of given class    
 
   public :
    void setdata(int a , int b){
        l = a;
        h = b;
    }
    void getdata(){
    cout<<l*h<<endl;
    }  
};
int sum_of_areas :: sum_area(area o1 , area o2){
    return (o1.l+o1.h+o2.l+o2.h);
}


int main(){
    area rect,rect1;

    rect.setdata(3,4);
    rect.getdata();

    rect1.setdata(9,5);
    rect1.getdata();
    sum_of_areas s;
    int res  = s.sum_area(rect,rect1);
    cout<<res;
    return 0;
}
