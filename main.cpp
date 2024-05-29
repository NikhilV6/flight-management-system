#include<iostream>
#include<fstream>
#include <iomanip>


using namespace std;

void mainMenu();


class Managment{ 
    public:
        Managment(){
            mainMenu();
        }
};

void mainMenu(){
    int lchoice;
    int schouce;
    int back;

    cout<<"\t\t\tXYZ Airlines \n"<<endl;
    cout<<"\t____________Main Menu____________"<<endl;
    cout<<"\t__________________________________"<<endl;
    cout<<"\t\t\t\t\t\t"<<endl;
    cout<<"\t\t Press 1 to add the Customer Details    \t"<<endl;
    cout<<"\t\t Press 2 for Flight Registration        \t"<<endl;
    cout<<"\t\t Press 3 for Ticket and Charges    \t"<<endl;
    cout<<"\t\t Press 4 to exit                   \t"<<endl;
    cout<<"\t_______________________________________________"<<endl; 

    cout<<"Enter the choice : ";
    cin>>lchoice;

    // Details d;
    // registration r;
    // ticket t;

    switch(lchoice){
        case 1:
        {
            cout<<"_____________Customers_____________\n"<<endl;
           // d.information();
            cout<<"Press any key to go back to Main menu";
            cin>>back;
            if(back == 1){
                mainMenu();

            }
            else{
                mainMenu();
            }
            break;
        }
        case 2:
        {   
            cout<<"______________Book a flight using this system______________\n"<<endl;
           // r.flight();
            break;
        }
        
        case 3:{
            cout<<"____CET YOUR TICKET______\n"<<endl;
           // t.bill();
            cout<<"Your ticket is printed, you can collet it \n"<<endl;
            cout<<"Press 1 to display your ticket ";
            cin>>back;
            if(back == 1){
                t.display();
                cout<<"Press any key to go back to main menu:";
                cin>>back;
                if(back == 1){
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            

            }
            else{
                mainMenu();
            }
            

             break;
             }
       
        case 4:{
            cout<<"\n\n\t_______Thank You_______"<<endl;
            break;
        }
        
        default:{
            cout<<"Invalid Input"<<endl;
            mainMenu();
        }
    }
}

int main(){
    return 0 ;
}