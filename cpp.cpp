#include<iostream>
#include<cmath>
using namespace std;
class Number{
    int n;
    static int profit;
    static int Count;
    public :
    void shop_1_data(){
        cout<<"Select Item 1 or 2 : ";
        cin>>n;
        if(n==1){
            cout<<"Your Item 1 (Chair) is Selected From Shop 1 "<<endl;
            profit += 200;
        }
        else{
            cout<<"Your Item 2 (Table) is Selected From Shop 1 "<<endl;
            profit += 300;
        }
    }
    void dislplay_shop_1_data(){
        cout<<profit;
    }
    void count(){
        cout<<Count+1<<" is Added Iin Your Bag From Shop 1 "<<endl;
        Count++;
    }
    static int get_profit() {
        return profit;
    }
};

int Number ::  profit;
int Number :: Count;

class Number1{
    int n1;
    static int profit1;
    static int Count1;
    public :
    void shop_2_data(){
        cout<<endl;
        cout<<"Select Item 1 or 2 : ";
        cin>>n1;
        if(n1==1){ 
            cout<<"Your Item 1 (Chair) is Selected From Shop 2 "<<endl;
            profit1 += 210;
        }
        else{ 
            cout<<"Your Item 2 (Table) is Selected From Shop 2 "<<endl;
            profit1 += 350;
        }
    }
    void dislplay_shop_2_data(){
        cout<<profit1;
    }
    void count1(){
        cout<<Count1+1<<" is Added Iin Your Bag From Shop 2 "<<endl;
        Count1++;
    }
    static int get_profit() {
        return profit1;
    }
};
int Number1 ::  profit1;
int Number1 :: Count1;



class diff_profit{
    int a;
    public : 
    void setdatabydiff(Number &obj , Number1 &obj1){
        a = abs(obj.get_profit() - obj1.get_profit());
    }
    void display_profit(){
        cout<<endl;
        cout<<"The Differnece of Shop 1 & Shop 2 Profit is : "<<a;
    }
};

int main(){
    Number Shop;
    for(int i = 0 ; i < 2 ; i++){
    Shop.shop_1_data();
    Shop.count();
    }
    Shop.dislplay_shop_1_data();

    Number1 Shop1;
    for(int i = 0 ; i < 2 ; i++){
    Shop1.shop_2_data();
    Shop1.count1();
    }
    Shop1.dislplay_shop_2_data();
    diff_profit profit3;
    profit3.setdatabydiff(Shop,Shop1);
    profit3.display_profit();
    return 0;
}