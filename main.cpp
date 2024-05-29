#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;
void mainMenu();
class Managment{ 
    public:
        Managment(){
            mainMenu();
        }
};


class Details
{
    public:
        static string name,gender;
        int phoneNo;
        int age;
        string add;
        static int cId;
        char arr[100];

        void information(){
            cout<<"\n Enter the customer ID: ";
            cin>>cId;
            cout<<"\n Enter the name: ";
            cin>>name;
            cout<<"\n Enter the age: ";
            cin>>age;
            cout<<"\n Address: ";
            cin>>add;
            cout<<"\n Gender: ";
            cin>>gender;
            cout<<"\n Details Saved Sucessfully "<<endl;
           
        }

};


int Details::cId;
string Details::name;
string Details::gender;

class registration
{
    public:
        static int choice;
        int choice1;
        int back;
        static float charges;

        void flight(){
            string flightN[] = {"Dubai", "Canada","UK","USA","Australia", "Europe"};

            for(int i =0 ; i<6;i++){
                cout<<(i+1)<<".flight to"<<flightN[i]<<endl;
            }

            cout<<"\nWelcome to Airlines"<<endl;
            cout<<"Press the number of the country of which you want to book the flight: ";
            cin>>choice;

            switch (choice)
            {
            case 1:
                cout<<"________Welcome to Dubai Emirates________\n"<<endl;

                cout<<"following are the flights \n"<<endl;

                cout<<"1. DUB - 498"<<endl;
                cout<<"\t08-01-2024 8:00AM 10hrs Rs.30000"<<endl;
                cout<<"2. DUB - 432"<<endl;
                cout<<"\t09-01-2024 10:00PM 11hrs Rs.27000"<<endl;
                cout<<"3. DUB - 789"<<endl;
                cout<<"\t12-03-2024 11:00AM 12hrs Rs.28000"<<endl;

                cout<<"\nSelect the flight you wnat to book : ";
                cin>>choice1;

                if(choice == 1){
                    charges = 30000;
                    cout<<"\nYou have successfully booked the flight DUB- 498"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;

                }
                else if(choice1 == 2){
                    charges = 27000;
                    cout<<"\nYou have successfully booked the flight DUB- 432"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;

                }
                else if(choice1 == 3){
                    charges = 28000;
                    cout<<"\nYou have successfully booked the flight DUB- 789"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;

                }
                else{
                    cout<<"Invalid input , shifting to previous menu"<<endl;
                    flight();
                }

                cout<<"Press any key to go back to the main menu: "<<endl;
                cin>>back;

                if(back == 1)mainMenu();
                else mainMenu();




                break;
            case 3 :
            {
                cout<<"________Welcome to UK Airlines________\n"<<endl;

                cout<<"following are the flights \n"<<endl;

                cout<<"1. UK - 838"<<endl;
                cout<<"\t08-01-2024 8:00AM 10hrs Rs.30000"<<endl;
                cout<<"2. UK - 845"<<endl;
                cout<<"\t09-01-2024 10:00PM 11hrs Rs.27000"<<endl;
                cout<<"3. UK - 839"<<endl;
                cout<<"\t12-03-2024 11:00AM 12hrs Rs.28000"<<endl;

                cout<<"\nSelect the flight you wnat to book : ";
                cin>>choice1;

                if(choice == 1){
                    charges = 30000;
                    cout<<"\nYou have successfully booked the flight UK - 838"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;

                }
                else if(choice1 == 2){
                    charges = 27000;
                    cout<<"\nYou have successfully booked the flight UK - 845"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;

                }
                else if(choice1 == 3){
                    charges = 28000;
                    cout<<"\nYou have successfully booked the flight UK - 839"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;

                }
                else{
                    cout<<"Invalid input , shifting to previous menu"<<endl;
                    flight();
                }

                cout<<"Press any key to go back to the main menu: "<<endl;
                cin>>back;

                if(back == 1)mainMenu();
                else mainMenu();

                break;
            }
            case 2 :
            {
                cout<<"________Welcome to Canadian Airlines________\n"<<endl;

                cout<<"following are the flights \n"<<endl;

                cout<<"1. CA - 238"<<endl;
                cout<<"\t08-01-2024 8:00AM 10hrs Rs.30000"<<endl;
                cout<<"2. CA - 345"<<endl;
                cout<<"\t09-01-2024 10:00PM 11hrs Rs.27000"<<endl;
                cout<<"3. CA - 439"<<endl;
                cout<<"\t12-03-2024 11:00AM 12hrs Rs.28000"<<endl;

                cout<<"\nSelect the flight you wnat to book : ";
                cin>>choice1;

                if(choice == 1){
                    charges = 30000;
                    cout<<"\nYou have successfully booked the flight CA - 238"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;

                }
                else if(choice1 == 2){
                    charges = 27000;
                    cout<<"\nYou have successfully booked the flight CA - 345"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;

                }
                else if(choice1 == 3){
                    charges = 28000;
                    cout<<"\nYou have successfully booked the flight CA - 439"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;

                }
                else{
                    cout<<"Invalid input , shifting to previous menu"<<endl;
                    flight();
                }

                cout<<"Press any key to go back to the main menu: "<<endl;
                cin>>back;

                if(back == 1)mainMenu();
                else mainMenu();

                break;
            }
            case 4 :
            {
                cout<<"________Welcome to USA Airlines________\n"<<endl;

                cout<<"following are the flights \n"<<endl;

                cout<<"1. USA - 548"<<endl;
                cout<<"\t015-01-2024 4:00AM 17hrs Rs.70000"<<endl;
                cout<<"2. USA - 945"<<endl;
                cout<<"\t09-01-2024 10:00PM 15hrs Rs.65000"<<endl;
                cout<<"3. USA - 467"<<endl;
                cout<<"\t12-03-2024 11:00AM 12hrs Rs.90000"<<endl;

                cout<<"\nSelect the flight you wnat to book : ";
                cin>>choice1;

                if(choice == 1){
                    charges = 70000;
                    cout<<"\nYou have successfully booked the flight USA - 548"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;

                }
                else if(choice1 == 2){
                    charges = 65000;
                    cout<<"\nYou have successfully booked the flight USA - 945"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;

                }
                else if(choice1 == 3){
                    charges = 90000;
                    cout<<"\nYou have successfully booked the flight USA - 467"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;

                }
                else{
                    cout<<"Invalid input , shifting to previous menu"<<endl;
                    flight();
                }

                cout<<"Press any key to go back to the main menu: "<<endl;
                cin>>back;

                if(back == 1)mainMenu();
                else mainMenu();

                break;
            }
            case 5 :
            {
                cout<<"________Welcome to Australian Airlines________\n"<<endl;

                cout<<"following are the flights \n"<<endl;

                cout<<"1. AUS - 548"<<endl;
                cout<<"\t015-01-2024 4:00AM 17hrs Rs.7000"<<endl;
                cout<<"2. AUS - 945"<<endl;
                cout<<"\t09-01-2024 10:00PM 15hrs Rs.6500"<<endl;
                cout<<"3. AUS - 467"<<endl;
                cout<<"\t12-03-2024 11:00AM 12hrs Rs.9000"<<endl;

                cout<<"\nSelect the flight you wnat to book : ";
                cin>>choice1;

                if(choice == 1){
                    charges = 7000;
                    cout<<"\nYou have successfully booked the flight AUS - 548"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;

                }
                else if(choice1 == 2){
                    charges = 6500;
                    cout<<"\nYou have successfully booked the flight AUS - 945"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;

                }
                else if(choice1 == 3){
                    charges = 9000;
                    cout<<"\nYou have successfully booked the flight AUS - 467"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;

                }
                else{
                    cout<<"Invalid input , shifting to previous menu"<<endl;
                    flight();
                }

                cout<<"Press any key to go back to the main menu: "<<endl;
                cin>>back;

                if(back == 1)mainMenu();
                else mainMenu();

                break;
            }
            case 6 :
            {
                cout<<"________Welcome to European Airlines________\n"<<endl;

                cout<<"following are the flights \n"<<endl;

                cout<<"1. EU - 548"<<endl;
                cout<<"\t015-01-2024 4:00AM 17hrs Rs.70000"<<endl;
                cout<<"2. EU - 945"<<endl;
                cout<<"\t09-01-2024 10:00PM 15hrs Rs.65000"<<endl;
                cout<<"3. EU - 467"<<endl;
                cout<<"\t12-03-2024 11:00AM 12hrs Rs.90000"<<endl;

                cout<<"\nSelect the flight you wnat to book : ";
                cin>>choice1;

                if(choice == 1){
                    charges = 70000;
                    cout<<"\nYou have successfully booked the flight EU - 548"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;

                }
                else if(choice1 == 2){
                    charges = 65000;
                    cout<<"\nYou have successfully booked the flight EU - 945"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;

                }
                else if(choice1 == 3){
                    charges = 90000;
                    cout<<"\nYou have successfully booked the flight EU - 467"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;

                }
                else{
                    cout<<"Invalid input , shifting to previous menu"<<endl;
                    flight();
                }

                cout<<"Press any key to go back to the main menu: "<<endl;
                cin>>back;

                if(back == 1)mainMenu();
                else mainMenu();

                break;
            }
            default:
                cout<<"invalid Input , Shifting to the main menu"<<endl;
                mainMenu();
                break;
            }
        }
};


float registration::charges;
int registration::choice;

class ticket : public registration , Details
{
    public:
        void bill(){
            string destination = "";
            ofstream outf("records.txt");
            {
                outf<<"___________XYZ Airlines_______"<<endl;
                outf<<"___________Ticket_____________"<<endl;
                outf<<"______________________________"<<endl;

                outf<<"Customer ID: "<<Details::cId<<endl;
                outf<<"Customer Name: "<<Details::name<<endl;
                outf<<"Customer Gender: "<<Details::gender<<endl;
                outf<<"\tDescription\n"<<endl;

                if(registration::choice == 1)destination = "Dubai";
                else if(registration::choice == 2)destination = "Canada";
                else if(registration::choice == 3)destination = "UK";
                else if(registration::choice == 4)destination = "USA";
                else if(registration::choice == 5)destination = "Australia";
                else if(registration::choice == 6)destination = "Europe";


                outf<<"Destination\t\t"<<destination<<endl;
                outf<<"Flight cost :\t\t"<<registration::charges<<endl;
            }
            outf.close(); 
        }
        void display(){
            ifstream ifs("records.txt");
            {
                if(!ifs)cout<<"file Error"<<endl;
                while(!ifs.eof()){
                    ifs.getline(arr,100);
                    cout<<arr<<endl;
                }
            }
            ifs.close();
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

    Details d;
    registration r;
    ticket t;

    switch(lchoice){
        case 1:
        {
            cout<<"_____________Customers_____________\n"<<endl;
           d.information();
            cout<<"Press any key to go back to Main menu";
            cin>>back;
            
                mainMenu();
            
            break;
        }
        case 2:
        {   
            cout<<"______________Book a flight using this system______________\n"<<endl;
            r.flight();
            break;
        }
        
        case 3:{
            cout<<"____CET YOUR TICKET______\n"<<endl;
           t.bill();
            cout<<"Your ticket is printed, you can collect it \n"<<endl;
            cout<<"Press 1 to display your ticket ";
            cin>>back;
            if(back == 1){
                t.display();
                cout<<"Press any key to go back to main menu:";
                cin>>back;
                mainMenu();
            

            }
            else{
                mainMenu();
            }
            

             break;
             }
       
        case 4:{
            cout<<"\n\n\t_______Thank You_______"<<endl;
            return;
        }
        
        default:{
            cout<<"Invalid Input"<<endl;
            mainMenu();
        }
    }
}



int main(){
    Managment m;
    return 0;
}