#include<iostream>
using namespace std;
class password{
    int n;
    public :
    void setpassword(){
        cout<<"Enter Password : ";
        cin>>n;
    }
    int getpassword(){
        if(n==1234){
            cout<<"Welcome To Website XYZ"<<endl;
            return 1;
        }
        else{
            cout<<"Invalid Password"<<endl<<"Try Again Later";
            return 0;
        }
    }
};
class password1{
    string name;
    string email;
    string username;
    public :
    void input(){
        cout<<"Enter Your Name : ";
        cin>>name;
        cout<<"Enter Email Id :";
        cin>>email;
        cout<<"Enter Username : ";
        cin>>username;
    }
    void display(){
        cout<<name<<endl;
        cout<<email<<endl;
        cout<<username<<endl;
    }
    void Update(){
        cout<<"Update Your Name : ";
        cin>>name;
        cout<<"Update Email Id :";
        cin>>email;
        cout<<"Update Username : ";
        cin>>username;
    }
    void Delete(){
        name = "";
        email = "";
        username = "";
        cout<<"Your Account is Deleted Successfully...."<<endl;
    }
};
int main(){
    password obj;
    password1 obj1;
    int Output,choice;
    obj.setpassword();
    Output=obj.getpassword();
    if(Output==1){
        do{
            cout<<"Menu"<<endl;
            cout<<"1. Add User"<<endl;
            cout<<"2. Update User"<<endl;
            cout<<"3. Display User"<<endl;
            cout<<"4. Delete User"<<endl;
            cout<<"5. Exit"<<endl;
            cout<<"Enter Your Choice"<<endl;
            cin>>choice;
            switch(choice){
                case 1 : 
                obj1.input();
                break;
                case 2 :
                obj1.Update();
                break;
                case 3 :
                obj1.display();
                break;
                case 4 :
                obj1.Delete();
                break;
                case 5 :
                cout<<"Exit Program...."<<endl;
                break;
                default :
                cout<<"Invalid Password"<<endl<<"Try Again Later";
            }
        }
        while(choice!=5);
    }
    return 0;
}