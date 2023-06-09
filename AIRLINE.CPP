#include<bits/stdc++.h>
#include<fstream>
#include<iomanip>

using namespace std;
void mainMenu();

class Management{
	public:
		Management(){
			mainMenu();
		}
};

class details{
	public:
		static string name,gender;
		int phoneNo;
		int age;
		string add;
		static int customerID;
		char arr[100];
		
		void information(){
		cout<<"\nEnter the customer ID : ";
		cin>>customerID;
		cout<<"\nEnter the name of customer : ";
		cin>>name;		
		cout<<"\nEnter the age : ";
		cin>>age;
		cout<<"\n Address : ";
		cin>>add;
		cout<<"\n Gender : ";
		cin>>gender;
		cout<<"Your details are saved with us\n"<<endl;
		
		
		} 
};

int details::customerID;
string details::name;
string details::gender;

class registration
{
	public:
		static int choice;
		int choice1;
		int back;
		static float charges;
		void flights(){
			string flight[]={"Mumbai","Delhi","Nagpur","Aurangabad","Pune","Latur"};
			for(int a=0;a<6;a++){
				cout<<(a+1)<<".flight to"<<flight[a]<<endl;
			}
			cout<<"\nWelcome to the IndiGo Airlines !"<<endl;
			cout<<"Press the number of the city of which you want to boook the flight:";
			cin>>choice;
			
			switch(choice){
				case 1:
					{
						cout<<"______________Welcome to Shri Guru Gobind Singhji Institute of Engineering and Technology AIRWAYS______________\n"<<endl;
						cout<<"Your comfort is our priority.Enjoy the journey !"<<endl;
						
						cout<<"following are the flights \n"<<endl;
						cout<<"following are the flights \n"<<endl;
						cout<<"1. Mum-498"<<endl;
						cout<<"\t08-06-2023 8:00AM 10hrs Rs.3500"<<endl;
						cout<<"2. Mum -658"<<endl;
						cout<<"\t11-06-2023 11:00AM 12hrs Rs.3900"<<endl;
						cout<<"3. Mum-958"<<endl;
						cout<<"\t12-06-23 12:00AM 13 hrs Rs.3700"<<endl;
						
						cout<<"\nSelect the flight you want to book :";
						cin>>choice1;
						
						if(choice1==1){
							charges=3500;
							cout<<"\nYou have successfully booked the flight Mum-498"<<endl;
							cout<<"you can go to menu and  take the ticket"<<endl;
							
						}
						else if(choice1==2){
							charges=3900;
							cout<<"\n You have successfully booked the flight Mum-698"<<endl;
							cout<<"you can go to menu and  take the ticket"<<endl;
						}
						else if(choice1==3){
								charges=3700;
							cout<<"\n You have successfully booked the flight Mum-958"<<endl;
							cout<<"you can go to menu and  take the ticket"<<endl;
						}
						else{
							cout<<"Invalid input, shifting to the previous menu"<<endl;
							flights();
						}
					cout<<"Press any key to back to the main menu :"<<endl;
					cin>>back;
					
					if(back==1){
						mainMenu();
					}
					else{
						mainMenu();
					}
					
			} 
				case 2:
					{
						cout<<"______________Welcome to Shri Guru Gobind Singhji Institute of Engineering and Technology AIRWAYS______________\n"<<endl;
						cout<<"Your comfort is our priority.Enjoy the journey !"<<endl;
						
						cout<<"following are the flights \n"<<endl;
						cout<<"following are the flights \n"<<endl;
						cout<<"1. Del-498"<<endl;
						cout<<"\t08-06-2023 8:00AM 10hrs Rs.5000"<<endl;
						cout<<"2. Del-658"<<endl;
						cout<<"\t11-06-2023 11:00AM 12hrs Rs.5500"<<endl;
						cout<<"3. Del-958"<<endl;
						cout<<"\t12-06-23 12:00AM 13 hrs Rs.6000"<<endl;
						
						cout<<"\nSelect the flight you want to book :";
						cin>>choice1;
						
						if(choice1==1){
							charges=5000;
							cout<<"\nYou have successfully booked the flight Del-498"<<endl;
							cout<<"you can go to menu and  take the ticket"<<endl;
							
						}
						else if(choice1==2){
								charges=5500;
							cout<<"\nYou have successfully booked the flight Del-698"<<endl;
							cout<<"you can go to menu and  take the ticket"<<endl;
						}
						else if(choice1==3){
								charges=6000;
							cout<<"\nYou have successfully booked the flight Del-958"<<endl;
							cout<<"you can go to menu and  take the ticket"<<endl;
						}
						else{
							cout<<"Invalid input, shifting to the previous menu"<<endl;
							flights();
						}
					cout<<"Press any key to back to the main menu :"<<endl;
					cin>>back;
					
					if(back==1){
						mainMenu();
					}
					else{
						mainMenu();
					}
					
			}
			
				case 3:
					{
						cout<<"______________Welcome to Shri Guru Gobind Singhji Institute of Engineering and Technology AIRWAYS______________\n"<<endl;
						cout<<"Your comfort is our priority.Enjoy the journey !"<<endl;
						
						cout<<"following are the flights \n"<<endl;
						cout<<"following are the flights \n"<<endl;
						cout<<"1. Nag-498"<<endl;
						cout<<"\t08-06-2023 8:00AM 12hrs Rs.4000"<<endl;
						cout<<"2.Nag-658"<<endl;
						cout<<"\t11-06-2023 11:00AM 14hrs Rs.3800"<<endl;
						cout<<"3.Nag-958"<<endl;
						cout<<"\t12-06-23 12:00AM 13hrs Rs.3900"<<endl;
						
						cout<<"\nSelect the flight you want to book :";
						cin>>choice1;
						
						if(choice1==1){
							charges=4000;
							cout<<"\nYou have successfully booked the flight Nag-498"<<endl;
							cout<<"you can go to menu and  take the ticket"<<endl;
							
						}
						else if(choice1==2){
								charges=3800;
							cout<<"\nYou have successfully booked the flight Nag-698"<<endl;
							cout<<"you can go to menu and  take the ticket"<<endl;
						}
						else if(choice1==3){
								charges=3900;
							cout<<"\nYou have successfully booked the flight Nag-958"<<endl;
							cout<<"you can go to menu and  take the ticket"<<endl;
						}
						else{
							cout<<"Invalid input, shifting to the previous menu"<<endl;
							flights();
						}
					cout<<"Press any key to back to the main menu :"<<endl;
					cin>>back;
					
					if(back==1){
						mainMenu();
					}
					else{
						mainMenu();
					}
					
			}
			
				case 4:
					{
						cout<<"______________Welcome to Shri Guru Gobind Singhji Institute of Engineering and Technology AIRWAYS______________\n"<<endl;
						cout<<"Your comfort is our priority.Enjoy the journey !"<<endl;
						
						cout<<"following are the flights \n"<<endl;
						cout<<"following are the flights \n"<<endl;
						cout<<"1. Aurgbd-498"<<endl;
						cout<<"\t08-06-2023 8:00AM 10hrs Rs.3500"<<endl;
						cout<<"2. Aurgbd -658"<<endl;
						cout<<"\t11-06-2023 11:00AM 12hrs Rs.3400"<<endl;
						cout<<"3.Aurgbd-958"<<endl;
						cout<<"\t12-06-23 12:00AM 13 hrs Rs.3300"<<endl;
						
						cout<<"\nSelect the flight you want to book :";
						cin>>choice1;
						
						if(choice1==1){
							charges=3500;
							cout<<"\nYou have successfully booked the flight Aurgbd-498"<<endl;
							cout<<"you can go to menu and  take the ticket"<<endl;
							
						}
						else if(choice1==2){
								charges=3400;
							cout<<"\nYou have successfully booked the flight Aurgbd-698"<<endl;
							cout<<"you can go to menu and  take the ticket"<<endl;
						}
						else if(choice1==3){
								charges=3300;
							cout<<"\nYou have successfully booked the flight Aurgbd-958"<<endl;
							cout<<"you can go to menu and  take the ticket"<<endl;
						}
						else{
							cout<<"Invalid input, shifting to the previous menu"<<endl;
							flights();
						}
					cout<<"Press any key to back to the main menu :"<<endl;
					cin>>back;
					
					if(back==1){
						mainMenu();
					}
					else{
						mainMenu();
					}
					
			}
				case 5:
					{
						cout<<"______________Welcome to Shri Guru Gobind Singhji Institute of Engineering and Technology AIRWAYS______________\n"<<endl;
						cout<<"Your comfort is our priority.Enjoy the journey !"<<endl;
						
						cout<<"following are the flights \n"<<endl;
						cout<<"following are the flights \n"<<endl;
						cout<<"1. Pune-498"<<endl;
						cout<<"\t08-06-2023 8:00AM 10hrs Rs.4400"<<endl;
						cout<<"2. Pune -658"<<endl;
						cout<<"\t11-06-2023 11:00AM 12hrs Rs.4500"<<endl;
						cout<<"3. Pune-958"<<endl;
						cout<<"\t12-06-23 12:00AM 13 hrs Rs.4100"<<endl;
						
						cout<<"\nSelect the flight you want to book :";
						cin>>choice1;
						
						if(choice1==1){
							charges=4400;
							cout<<"\nYou have successfully booked the flight Pune-498"<<endl;
							cout<<"you can go to menu and  take the ticket"<<endl;
							
						}
						else if(choice1==2){
								charges=4500;
							cout<<"\nYou have successfully booked the flight Pune-698"<<endl;
							cout<<"you can go to menu and  take the ticket"<<endl;
						}
						else if(choice1==3){
								charges=4100;
							cout<<"\nYou have successfully booked the flight Pune-958"<<endl;
							cout<<"you can go to menu and  take the ticket"<<endl;
						}
						else{
							cout<<"Invalid input, shifting to the previous menu"<<endl;
							flights();
						}
					cout<<"Press any key to back to the main menu :"<<endl;
					cin>>back;
					
					if(back==1){
						mainMenu();
					}
					else{
						mainMenu();
					}
					
			}
				case 6:
					{
						cout<<"______________Welcome to Shri Guru Gobind Singhji Institute of Engineering and Technology AIRWAYS______________\n"<<endl;
						cout<<"Your comfort is our priority.Enjoy the journey !"<<endl;
						
						cout<<"following are the flights \n"<<endl;
						cout<<"following are the flights \n"<<endl;
						cout<<"1. Latur-498"<<endl;
						cout<<"\t08-06-2023 8:00AM 10hrs Rs.3200"<<endl;
						cout<<"2. Latur -658"<<endl;
						cout<<"\t11-06-2023 11:00AM 12hrs Rs.3000"<<endl;
						cout<<"3. Latur-958"<<endl;
						cout<<"\t12-06-23 12:00AM 13 hrs Rs.3300"<<endl;
						
						cout<<"\nSelect the flight you want to book :";
						cin>>choice1;
						
						if(choice1==1){
							charges=3200;
							cout<<"\nYou have successfully booked the flight Latur-498"<<endl;
							cout<<"you can go to menu and  take the ticket"<<endl;
							
						}
						else if(choice1=2){
								charges=3000;
							cout<<"\nYou have successfully booked the flight Latur-698"<<endl;
							cout<<"you can go to menu and  take the ticket"<<endl;
						}
						else if(choice1==3){
								charges=3300;
							cout<<"\nYou have successfully booked the flight Latur-958"<<endl;
							cout<<"you can go to menu and  take the ticket"<<endl;
						}
						else{
							cout<<"Invalid input, shifting to the previous menu"<<endl;
							flights();
						}
					cout<<"Press any key to back to the main menu :"<<endl;
					cin>>back;
					
					if(back==1){
						mainMenu();
					}
					else{
						mainMenu();
					}
					
			}
			
			default:
				{
					cout<<"invalid input,Shifting to the main menu !"<<endl;
					mainMenu();
					break;
				}
		}  
   }
};

float registration :: charges;
int registration::choice;

class ticket : public registration,details
{
	public:
		void bill()
		{
			string destination="";
			ofstream outf("records.txt");
			{
				outf<<"______________Welcome to Shri Guru Gobind Singhji Institute of Engineering and Technology AIRWAYS______________\n"<<endl;
				outf<<"____________________________________________ticket_______________________________________________________________"<<endl;
				outf<<"_________________________________________________________________________________________________________________"<<endl;
				
				outf<<"Customer ID: "<<details::customerID<<endl;
				outf<<"Customer Name: "<<details::name<<endl;
				outf<<"Customer Gender:"<<details::gender<<endl;
				outf<<"\tdescription"<<endl<<endl;
			   
			   if(registration::choice==1){
			   	destination="Mumbai";
			   }
			   else if(registration::choice==2){
			   	destination="Delhi";
			   }
			   else if(registration::choice==3){
			   	destination="Nagpur";
			   }
			   else if(registration::choice==4){
			   	destination="Aurangabad";
			   }
			   else if(registration::choice==5){
			   	destination="Pune";
			   }
			   else if(registration::choice==6){
			   	destination="Latur";
			   }
			   
			   outf<<"Destination\t\t"<<destination<<endl;
			   outf<<"Flight cost :\t\t"<<registration::charges<<endl;
			}   
			outf.close();
		}
void dispBill()
{
	ifstream ifs("records.txt");
	{
		if(!ifs){
			cout<<"File error !"<<endl;
		}
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
	int schoice;
	int back;
	
	cout<<"______________Welcome to Shri Guru Gobind Singhji Institute of Engineering and Technology AIRWAYS______________\n"<<endl;
	cout<<"\t__________________________________________________Main Menu____________________________________________________"<<endl;
	cout<<"\t_______________________________________________________________________________________________________________"<<endl;
	cout<<"\t|\t\t\t\t\t\t|"<<endl;
	
	cout<<"\t|\t Press 1 to add the Customer Details   \t|"<<endl;
	cout<<"\t|\t Press 2 for Flight Registration       \t|"<<endl;
	cout<<"\t|\t Press 3 for Ticket and charges        \t|"<<endl;
	cout<<"\t|\t Press 4 to Exit                       \t|"<<endl;
	cout<<"\t_______________________________________________________________________________________________________________"<<endl;
	
	
	cout<<"Enter the choice : ";
	cin>>lchoice;
	 
	 
	 details d;
	 registration r;
	 ticket t;
	 
	 switch(lchoice){
	 	case 1:
	 		{
	 			cout<<"___________Customers_________\n"<<endl;
	 			d.information();
	 			cout<<"Press any key to go back to Main Menu";
	 			cin>>back;
	 			if(back==1){
	 				mainMenu();
				 }
				 else{
				 	mainMenu();
				 }
				 break;
			 }
	 
	       case 2:
	       {
	       	cout<<"________Book a flight using this system__________\n"<<endl;
	       	r.flights();
	       	break;
		   }
		   case 3:
		   	cout<<"________GET YOUR TICKET______\n"<<endl;
		   	t.bill();
		   	
		   	cout<<"Your ticket is  printed , you can collect it \n"<<endl;
		   	cout<<"Press 1 to display your ticket";
		   	
		   	cin>>back;
		   	if(back==1)
			   {
		   		t.dispBill();
		   		cout<<"Press any key to go back to main menu : ";
		   		cin>>back;
		   		if(back==1){
		   			mainMenu();
				   }
				   else{
				   	mainMenu();
                    }	
				 break;
				 	
			   }
			   
		 case 4:
		 	{
		 		cout<<"\n\n\t__________Thank-you_________"<<endl;
			     break;
			 }
			 default:
			 	{
			 		cout<<"Invalid input,please try again!\n"<<endl;
			 		mainMenu();
			 		break;
				 }
	 }
}

int main(){
	Management Mobj;
	return 0;
}
