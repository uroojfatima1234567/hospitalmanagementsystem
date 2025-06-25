#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<fstream>
using namespace std;


///////////////////////////////////////////////////////////////////////////////////////////////////////

						//Loading function
						
	void loading()
	{
		cout<<endl<<endl;
	cout<<"\n\n\t\t\t=========================================================================\n\n\n";
	cout<<"\t\t\t       |=|      |=|   |=====|   |=|=|=|  |=|       |=|  |=|=|=|=|  \n";
	cout<<"\t\t\t      |=| =    |=|      |=|     ||        |=|     |=|   |=|      ||  \n"; 
	cout<<"\t\t\t     |=|   =  |=|       |=|     ||         |=|   |=|    |=|      || \n";
	cout<<"\t\t\t    |=|     =|=|        |=|     ||          |=| |=|     |=|      ||   \n";
	cout<<"\t\t\t   |=|      |=|       |=====|   |=|=|=|       |=|       |=|=|=|=| \n\n\n";
	cout<<"\t\t\t========================================================================\n\n";
	cout<<"\t\t\t            NATIONAL INSTITUTE OF CARDIOVASCULAR DISEASES\n";
	cout<<"\t\t\t           ------------------------------------------------\n   ";
	cout<<"\n\n\t\t\t\t\t\t     Loading...\a\n";
		char bar=178;
		cout<<"\t\t\t\t     ";
		for(int i=0 ; i<35 ; i++)
		{
			cout<<bar;
			if(i<10)
			Sleep(300);
			if(i>10 && i<20)
			Sleep(150);
			if(i>20)
			Sleep(25);
			
		}
	}
	
///////////////////////////////////////////////////////////////////////////////////////////////////
	void loading2()
	{
		cout<<"\n\n\n\n\n\n\t\t\t\t   =========================================="<<endl;
		cout<<"\n\t\t\t\t\t       H I K V I S I O N\n"<<endl;
		cout<<"\t\t\t\t   =========================================="<<endl;
		cout<<"\n\n\t\t\t\t\t\t     Loading...\n";
		char bar=219;
		cout<<"\t\t\t\t\t";
		for(int i=0 ; i<35 ; i++)
		{
			cout<<bar;
			if(i<10)
			Sleep(300);
			if(i>10 && i<20)
			Sleep(150);
			if(i>20)
			Sleep(25);
			
		}
	}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////	

					//  LOGO function
					
void logo(){

cout<<"                             _          \n";
cout<<"                            |+|         \n";
cout<<"                        ____|+|____           N I C V D   H O S P I T A L   S U K K U R\n";
cout<<"                       |====|+|====|      _________________________________________________\n";
cout<<"                            |+|             NATIONAL INSTITUTE OF CARDIOVASCULAR DISEASES\n"; 
cout<<"                            |+|         \n";
//cout<<"                             -\n";
//	cout<<"    ____|________|____                        N I C V D   H O S P I T A L   S U K K U R\n";
//	cout<<"   |    |        |    |                  _________________________________________________\n";
//	cout<<"   |    |   __   |    |                    NATIONAL INSTITUTE OF CARDIOVASCULAR DISEASES\n";
//	cout<<"   |____|__|__|__|____|\n";
	//cout<<"\t\t\t   =\n";
	cout<<" ======================================================================================================================\n";
}







////////////////////////////////////////////////////////////////////////////////////////////////////

						//filing function input

	void user_complain()
	{
		
		//filing Hassan Shah
		
	string comp1,email, comp2;// comp1 for entering complaints, comp2 for checking them back
	
	//for entering complaints in user mode
	cout<<"\n\t\tEnter your Email for complain:    ";
	cin.ignore();
	getline(cin,email);
	cout<<endl;
	cout<<"\t\tEnter your Complain:    ";
	getline(cin,comp1);
	ofstream out;
	out.open("file.txt",ios::app); //app means append: used to no delete previous complaints
	out<<"* Sent by: "<<email<<endl<<" Complain : "<<comp1<<endl;
	out<<"======================================================";
	out<<endl;
	out.close();
	}
	
	
	//////////////////////////////////////////////////////////////////////////////////////////////
	
				// filing function output
				
				
	void complain_check()
	{
	
		system("CLS");
		logo();
		cout<<"\n\t\t\t\t\t\t\tComplaints\n\n\n";
		
		ifstream in;
		in.open("file.txt");
		string data;
	 while(getline(in,data))
	 	{
            cout<<data<<"\n";
        }
        	in.close();
		
	}
	


///////////////////////////////////////////////////////////////////////////////////////////////////////////

							//Doctors function
		
void doctors()
{
	jumped:
		pagee1:
	cout<<"\n\t\t\t\t\t\t\t Check Doctors\n\n";
	cout<<"\t---> 1    Cardiologists\n";
//	cout<<"\t---> 2    Physiotherapists\n";
	cout<<"\t---> 2    Surgeons\n";
//	cout<<"\t---> 4    Pediatrician\n";
	cout<<"\t---> 3    Neurologists\n";
//	cout<<"\t---> 6    Gynecologists\n";
//	cout<<"\t---> 7    Dermatologistst\n";
	cout<<"\t---> 4    Physicians\n";
//	cout<<"\t---> 9    Orthopedic Surgeon\n";
	cout<<"\t---> 5    back\n";


	string select;
	cout<<"\n\t\tSelect:     ";
	cin>>select;
	
	if(select=="1")
	{
		y1:
		system("CLS");
		logo();
		cout<<"\n\t\t\t\t\t\t\tCardiologists\n\n";
		cout<<"\n\t\t\t\t ----> 1  Morning Shift 09:00 am to 12:00 pm";
		cout<<"\n\n\t\t\t\t\tDr Farzana Shaikh\n\t\t\t\t\t\t\t(M.B.B.S LUMHS)";
		cout<<endl<<endl;
		cout<<"\n\n\t\t\t\t ----> 2  Evening Shift 02:00 pm to 05:00 pm";
		cout<<"\n\n\t\t\t\t\tDr Shoaib Siddique\n\t\t\t\t\t\t\t(M.B.B.S DUHS)";
		cout<<endl<<endl;
		
		string back;
	
		cout<<"\t3 --->  Back     ";
		cin>>back;
		if(back=="3")
		{
			system("CLS");
			logo();
			goto pagee1;
		}
		else
		{
			system("CLS");
			logo();
			goto y1;
		}
	
	} 
	
	
	/////////////////////////////////////////////////////////////////////////////////////////
	
	
	else if(select=="2")
	{
		y2:
		system("CLS");
		logo();
		cout<<"\n\t\t\t\t\t\t\tSurgeons\n\n";
		cout<<"\n\t\t\t\tMorning Shift 09:00 am to 12:00 pm";
		cout<<"\n\n\t\t\t\t\tDr Ratan Kumar\n\t\t\t\t\t\t(M.B.B.S LUMHS)";
		cout<<endl<<endl;
		cout<<"\n\n\t\t\t\tEvening Shift 02:00 pm to 05:00 pm";
		cout<<"\n\n\t\t\t\t\tDr Afshan\n\t\t\t\t\t\t(M.B.B.S DUHS)";
		
		cout<<endl<<endl;
		
		string back;
		cout<<"\t3 --->  Back     ";
		cin>>back;
		if(back=="3")
		{
			system("CLS");
			logo();
			goto pagee1;
		}
		else
		{
			system("CLS");
			logo();
			goto y2;
		}
	
	}
	
	////////////////////////////////////////////////////////////////////////////////////////
	
		else if(select=="3")
		{
			y3:
			system("CLS");
			logo();
			cout<<"\n\t\t\t\t\t\t\tNeurologists\n\n";
			cout<<"\n\t\t\t\tMorning Shift 09:00 am to 12:00 pm";
			cout<<"\n\n\t\t\t\t\tDr Imdad Ansari\n\t\t\t\t\t\t(M.B.B.S LUMHS)";
			cout<<endl<<endl;
			cout<<"\n\n\t\t\t\tEvening Shift 02:00 pm to 05:00 pm";
			cout<<"\n\n\t\t\t\t\tDr Sanam Panhwar\n\t\t\t\t\t\t(M.B.B.S DUHS)";
		
			cout<<endl<<endl;
		
			string back;
			cout<<"\t3 --->  Back     ";
			cin>>back;
			
			if(back=="3")
			{
				system("CLS");
				logo();			// function call
				goto pagee1;
			}
			
		else
		{
			system("CLS");
			logo();
			goto y3;
		}
	
		}
		
	////////////////////////////////////////////////////////////////////////////////
	
	
	else if(select=="4")
	{
		y4:
		system("CLS");
		logo();
		cout<<"\n\t\t\t\t\t\t\tPhysicians\n\n";
		cout<<"\n\t\t\t\tMorning Shift 09:00 am to 12:00 pm";
		cout<<"\n\n\t\t\t\t\tDr Altaf Shaikh\n\t\t\t\t\t\t(M.B.B.S LUMHS)";
		cout<<endl<<endl;
		cout<<"\n\n\t\t\t\tEvening Shift 02:00 pm to 05:00 pm";
		cout<<"\n\n\t\t\t\t\tDr Naila Rashid\n\t\t\t\t\t\t(M.B.B.S DUHS)";
		
		cout<<endl<<endl;
		
		string back;
		cout<<"\t3 --->  Back     ";
		cin>>back;
		if(back=="3")
		{
			system("CLS");
			logo();
			goto pagee1;
		}
		else if(select=="5")
		{
			system("CLS");
		
		}
		else
		{
			system("CLS");
			logo();
			goto y4;
		}
		
	}
	


	
//////////////////////////////////////////////////////////////////////////////////	


	else
	{
		
		cout<<"\n\n\t\tInvalid Input";
		Sleep(2000);
		system("CLS");
		logo();
		goto jumped;
	}
	
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////

				// Appointment number (Randomly)
				
				
void number()
{
	srand(time(NULL));
	for(int i=0;i<1;i++)
	{
		cout<<"\n\t\t\tAppointment Number:    "<<rand()%20+1;
	}
}


		
//////////////////////////////////////////////////////////////////////////////////////////////////////////

						//Appointment	
						
							
void appointment()
{
	string f_name;
	string last_name;
	string addr;	
	string gender;
	int age;
	string ph_no;
//	string doctor;
	int date;
	
	cout<<"\n\t\t\t\t\t\t\tF O R M\n";
	cout<<"\n\n\t\t\t\t\t\t   Enter Information\n\n";
	cout<<"\n\t First Name:        ";
	cin.ignore();
	getline(cin,f_name);
	cout<<endl;
	
	
	cout<<"\t Last Name:         ";

	getline(cin,last_name);
	cout<<endl;
	
	cout<<"\t Gender:            ";
	cin>>gender;
	cout<<endl;
	
	cout<<"\t Age:               ";
	cin>>age;
	cout<<endl;
	
	cout<<"\t Phone Number:      (+92) ";
	cin>>ph_no;
	cout<<endl;

	cout<<"\t Address:           ";
	cin.ignore();
	getline(cin,addr);
	
	
	//cout<<endl;
//	cout<<"\t Doctor:            Dr. ";
	//getline(cin,doctor);
	
	cout<<endl;
	cout<<"\t Date:              ";
	cin>>date;
	cout<<endl;
		ofstream out;// filing to store customer info
		{
			out.open("patient.txt",ios::app);
			out<<"First Name: "<<f_name<<endl<<"Last Name: "<<last_name<<endl<<"Gender: "<<gender<<endl<<"Age: "<<age<<endl<<"Phone Number: (+92) "<<ph_no<<endl<<"Address: "<<addr<<endl<<"Date: "<<date<<endl<<"===================="<<endl;
			out.close();
		}
	
	
	cout<<endl<<endl;
	system("PAUSE");
	system("CLS");
	
	logo();		//function call
	
	cout<<"\n\t\t__________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\t\t\t   Receipt\n\n";
	cout<<"\t\t\tDate:   "<<date<<"/06/2023 \t\t\t\t\n";
	number();
	cout<<endl;
//	cout<<"\t\t\t Doctor:       Dr. "<<doctor<<endl<<endl;
	cout<<"\n\t\t\tFirst Name:    "<<f_name<<endl;
	cout<<"\n\t\t\tLast Name:     "<<last_name<<endl;
	cout<<"\n\t\t\tGender:        "<<gender<<endl;
	cout<<"\n\t\t\tAge:           "<<age<<endl;
	cout<<"\n\t\t\tPhone No:      (+92) "<<ph_no<<endl;
	cout<<"\n\t\t\tAddress:       "<<addr<<endl;
	
	cout<<"\n\t\t__________________________________________________________________________________________\n";
	
	cout<<"\n\t\t\t\t\t\t\t\t\t\t\t Print\n";
	

	
	
	 
}

///////////////////////////////////////////////////////////////////////////////////////

			// Doctor function copied
			
			
void doctors2()
{
	jumppp:
		
	jummm:
	jummm1:
	jummm2:
	jummm3:
		
		pagedd:
	cout<<"\n\t\t\t\t\t\t\t Doctors List\n\n\n\n";
	cout<<"\t---> 1    Cardiologists\n";
//	cout<<"\t---> 2    Physiotherapists\n";
	cout<<"\t---> 2    Surgeons\n";
//	cout<<"\t---> 4    Pediatrician\n";
	cout<<"\t---> 3    Neurologists\n";
//	cout<<"\t---> 6    Gynecologists\n";
//	cout<<"\t---> 7    Dermatologistst\n";
	cout<<"\t---> 4    Physicians\n";
//	cout<<"\t---> 9    Orthopedic Surgeon\n";
	cout<<"\t---> 5    Main Menu\n";


	string select;
	cout<<"\n\n\n\t\tSelect:     ";
	cin>>select;
		
	if(select=="1")
	{
		jt:	
		system("CLS");
		logo();
		cout<<"\n\t\t\t\t\t\t\tCardiologists\n\n";
		cout<<"\n\t\t\t\tMorning Shift 09:00 am to 12:00 pm";
		cout<<"\n\n\t\t\t\t\t1 ---->  Dr Farzana Shaikh\n\t\t\t\t\t\t\t(M.B.B.S LUMHS)";
		cout<<endl<<endl;
		cout<<"\n\n\t\t\t\tEvening Shift 02:00 pm to 05:00 pm";
		cout<<"\n\n\t\t\t\t\t2 ---->  Dr Shoaib Siddique\n\t\t\t\t\t\t\t(M.B.B.S DUHS)";
	
		cout<<endl<<endl;
		
		cout<<"\t3 --->  Back     ";
		
		string choose;
		cout<<"\n\n\n\t\t\tSelect:    ";
		cin>>choose;
		
		if(choose=="1")
		{
			system("CLS");
			logo();
			appointment();
		}
		
		else if(choose=="2")
		{
			system("CLS");
			logo();
			appointment();
		}
		
		else if(choose=="3")
		{
		
			system("CLS");
			logo();
			goto jummm;
		}
		
		else
		{
		
			system("CLS");
			logo();
			goto jt;
		}
	
	} 
	
	
////////////////////////////////////////////////////////////////////////////////////////////////	
	
	
	
	else if(select=="2")
	{
		jt1:
		system("CLS");
		logo();
		cout<<"\n\t\t\t\t\t\t\tSurgeons\n\n";
		cout<<"\n\t\t\t\tMorning Shift 09:00 am to 12:00 pm";
		cout<<"\n\n\t\t\t\t\t1 ---->  Dr Ratan Kumar\n\t\t\t\t\t\t\t(M.B.B.S LUMHS)";
		cout<<endl<<endl;
		cout<<"\n\n\t\t\t\tEvening Shift 02:00 pm to 05:00 pm";
		cout<<"\n\n\t\t\t\t\t2 ---->  Dr Afshan\n\t\t\t\t\t\t\t(M.B.B.S DUHS)";
		
		cout<<endl<<endl;
		cout<<"\t3 --->  Back     ";
		
		string choose;
		cout<<"\n\n\t\t\tSelect:    ";
		cin>>choose;
		
		if(choose=="1")
		{
			system("CLS");
			logo();
			appointment();
		}
		
		else if(choose=="2")
		{
			system("CLS");
			logo();
			appointment();
		}
		
		else if(choose=="3")
		{
		
			system("CLS");
			logo();
			goto jummm1;
		}
		
		else
		{
		
			system("CLS");
			logo();
			goto jt1;
		}
		
		
		
	}
	
	
	
	
	///////////////////////////////////////////////////////////////////////////////////////////////
	
	
		else if(select=="3")
	{
		jt2:
		system("CLS");
		logo();
		cout<<"\n\t\t\t\t\t\t\tNeurologists\n\n";
		cout<<"\n\t\t\t\tMorning Shift 09:00 am to 12:00 pm";
		cout<<"\n\n\t\t\t\t\t1 ---->  Dr Imdad Ansari\n\t\t\t\t\t\t(M.B.B.S LUMHS)";
		cout<<endl<<endl;
		cout<<"\n\n\t\t\t\tEvening Shift 02:00 pm to 05:00 pm";
		cout<<"\n\n\t\t\t\t\t2 ---->  Dr Sanam Panhwar\n\t\t\t\t\t\t(M.B.B.S DUHS)";
		
		cout<<endl<<endl;
		
		cout<<"\t3 --->  Back     ";
		
		string choose;
		cout<<"\n\n\t\t\tSelect:    ";
		cin>>choose;
		
		if(choose=="1")
		{
			system("CLS");
			logo();
			appointment();
		}
		
		else if(choose=="2")
		{
			system("CLS");
			logo();
			appointment();
		}
		
		else if(choose=="3")
		{
	
			system("CLS");
			logo();
			goto jummm2;
		}
		
		else
		{
		
			system("CLS");
			logo();
			goto jt2;
		}
		
		
	}
	
	
	
	//////////////////////////////////////////////////////////////////////////////////////////////////
	
	
	
	else if(select=="4")
	{
		jt3:
		system("CLS");
		logo();
		cout<<"\n\t\t\t\t\t\t\tPhysicians\n\n";
		cout<<"\n\t\t\t\tMorning Shift 09:00 am to 12:00 pm";
		cout<<"\n\n\t\t\t\t\t1 ---->  Dr Altaf Shaikh\n\t\t\t\t\t\t\t(M.B.B.S LUMHS)";
		cout<<endl<<endl;
		cout<<"\n\n\t\t\t\tEvening Shift 02:00 pm to 05:00 pm";
		cout<<"\n\n\t\t\t\t\t2 ---->  Dr Naila Rashid\n\t\t\t\t\t\t\t(M.B.B.S DUHS)";
		
		cout<<endl<<endl;
		
		cout<<"\t3 --->  Back     ";
		
		string choose;
		cout<<"\n\n\t\t\tSelect:    ";
		cin>>choose;
		
		if(choose=="1")
		{
			system("CLS");
			logo();
			appointment();
		}
		
		else if(choose=="2")
		{
			system("CLS");
			logo();
			appointment();
		}
		
		else if(choose=="3")
		{
		
			system("CLS");
			logo();
			goto jummm3;
		}
		
		else
		{
		
			system("CLS");
			logo();
			goto jt3;
		}
		
	}
	


	////////////////////////////////////////////////////////////////////////////////////////////
	
		else if(select=="5")
	{
		
		system("CLS");
		logo();
		
	
		
	}
	
	///////////////////////////////////////////////////////////////////////////////////////////////////
	

	else
	{
		
		cout<<"\n\n\t\tInvalid Input";
		Sleep(2000);
		system("CLS");
		logo();
		goto jumppp;
	}
	
}



//////////////////////////////////////////////////////////////////////////////////////////////////////////

						//Appointment Copied	
						
							
void appointment2()
{

	int date;
	
	cout<<"\n\t\t\t\t\t\t\tF O R M\n";
	cout<<"\n\t\t\t\t\t\t   Enter Information\n\n";
		
	cout<<endl;
	cout<<"\t Date:              ";
	cin>>date;
	cout<<endl;
	cout<<endl<<endl;
	system("PAUSE");
	system("CLS");
	
	logo();		//function call
	
	cout<<"\n\t\t\t__________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\t\t\t   Receipt\n\n";
	cout<<"\t\t\tDate:   "<<date<<"/06/2023\n";
	number();
	cout<<endl;

		 
}

///////////////////////////////////////////////////////////////////////////////////////

			// Doctor function copied
			
			
void doctors3()
{
	jumpc:
		
	jumc:
	jum1c:
	jum2c:
	jum3c:
		
	//	page:
	cout<<"\n\t\t\t\t\t\t\t Doctors List\n\n";
	cout<<"\t---> 1    Cardiologists\n";
//	cout<<"\t---> 2    Physiotherapists\n";
	cout<<"\t---> 2    Surgeons\n";
//	cout<<"\t---> 4    Pediatrician\n";
	cout<<"\t---> 3    Neurologists\n";
//	cout<<"\t---> 6    Gynecologists\n";
//	cout<<"\t---> 7    Dermatologistst\n";
	cout<<"\t---> 4    Physicians\n";
//	cout<<"\t---> 9    Orthopedic Surgeon\n";
	cout<<"\t---> 5    Main Menu\n";


	string select;
	cout<<"\n\t\tSelect:     ";
	cin>>select;
	
	if(select=="1")
	{
	
		j:	
		system("CLS");
		logo();
		cout<<"\n\t\t\t\t\t\t\tCardiologists\n\n";
		cout<<"\n\t\t\t\tMorning Shift 09:00 am to 12:00 pm";
		cout<<"\n\n\t\t\t\t\t1 ---->  Dr Farzana Shaikh\n\t\t\t\t\t\t\t(M.B.B.S LUMHS)";
		cout<<endl<<endl;
		cout<<"\n\n\t\t\t\tEvening Shift 02:00 pm to 05:00 pm";
		cout<<"\n\n\t\t\t\t\t2 ---->  Dr Shoaib Siddique\n\t\t\t\t\t\t\t(M.B.B.S DUHS)";
	
		cout<<endl<<endl;
		
		cout<<"\t3 --->  Back     ";
		
		string choose;
		cout<<"\n\n\t\t\tSelect:    ";
		cin>>choose;
		
		if(choose=="1")
		{
			system("CLS");
			logo();
			appointment2();
		}
		
		else if(choose=="2")
		{
			system("CLS");
			logo();
			appointment2();
		}
		
		else if(choose=="3")
		{
			cout<<"\n\n\t\t\tInvalid Try Again...\n\n";	
			system("CLS");
			logo();
			goto jumc;
		}
		
		else
		{
		
			system("CLS");
			logo();
			goto j;
		}
	
	} 
	
	
////////////////////////////////////////////////////////////////////////////////////////////////	
	
	
	
	else if(select=="2")
	{
		j1:
		system("CLS");
		logo();
		cout<<"\n\t\t\t\t\t\t\tSurgeons\n\n";
		cout<<"\n\t\t\t\tMorning Shift 09:00 am to 12:00 pm";
		cout<<"\n\n\t\t\t\t\t1 ---->  Dr Ratan Kumar\n\t\t\t\t\t\t\t(M.B.B.S LUMHS)";
		cout<<endl<<endl;
		cout<<"\n\n\t\t\t\tEvening Shift 02:00 pm to 05:00 pm";
		cout<<"\n\n\t\t\t\t\t2 ---->  Dr Afshan\n\t\t\t\t\t\t\t(M.B.B.S DUHS)";
		
		cout<<endl<<endl;
		cout<<"\t3 --->  Back     ";
		
		string choose;
		cout<<"\n\n\t\t\tSelect:    ";
		cin>>choose;
		
		if(choose=="1")
		{
			system("CLS");
			logo();
			appointment2();
		}
		
		else if(choose=="2")
		{
			system("CLS");
			logo();
			appointment2();
		}
		
		else if(choose=="3")
		{
			cout<<"\n\n\t\t\tInvalid Try Again...\n\n";	
			system("CLS");
			logo();
			goto jum1c;
		}
		
		else
		{
		
			system("CLS");
			logo();
			goto j1;
		}
		
		
		
	}
	
	
	
	
	///////////////////////////////////////////////////////////////////////////////////////////////
	
	
		else if(select=="3")
	{
		j2:
		system("CLS");
		logo();
		cout<<"\n\t\t\t\t\t\t\tNeurologists\n\n";
		cout<<"\n\t\t\t\tMorning Shift 09:00 am to 12:00 pm";
		cout<<"\n\n\t\t\t\t\t1 ---->  Dr Imdad Ansari\n\t\t\t\t\t\t\t(M.B.B.S LUMHS)";
		cout<<endl<<endl;
		cout<<"\n\n\t\t\t\tEvening Shift 02:00 pm to 05:00 pm";
		cout<<"\n\n\t\t\t\t\t2 ---->  Dr Sanam Panhwar\n\t\t\t\t\t\t\t(M.B.B.S DUHS)";
		
		cout<<endl<<endl;
		
		cout<<"\t3 --->  Back     ";
		
		string choose;
		cout<<"\n\n\t\t\tSelect:    ";
		cin>>choose;
		
		if(choose=="1")
		{
			system("CLS");
			logo();
			appointment2();
		}
		
		else if(choose=="2")
		{
			system("CLS");
			logo();
			appointment2();
		}
		
		else if(choose=="3")
		{
			cout<<"\n\n\t\t\tInvalid Try Again...\n\n";	
			system("CLS");
			logo();
			goto jum2c;
		}
		
		else
		{
			
			system("CLS");
			logo();
			goto j2;
		}
		
		
	}
	
	
	
	//////////////////////////////////////////////////////////////////////////////////////////////////
	
	
	
	else if(select=="4")
	{
		j3:
		system("CLS");
		logo();
		cout<<"\n\t\t\t\t\t\t\tPhysicians\n\n";
		cout<<"\n\t\t\t\tMorning Shift 09:00 am to 12:00 pm";
		cout<<"\n\n\t\t\t\t\t1 ---->  Dr Altaf Shaikh\n\t\t\t\t\t\t\t(M.B.B.S LUMHS)";
		cout<<endl<<endl;
		cout<<"\n\n\t\t\t\tEvening Shift 02:00 pm to 05:00 pm";
		cout<<"\n\n\t\t\t\t\t2 ---->  Dr Naila Rashid\n\t\t\t\t\t\t\t(M.B.B.S DUHS)";
		
		cout<<endl<<endl;
		
		cout<<"\t3 --->  Back     ";
		
		string choose;
		cout<<"\n\n\t\t\tSelect:    ";
		cin>>choose;
		
		if(choose=="1")
		{
			system("CLS");
			logo();
			appointment2();
		}
		
		else if(choose=="2")
		{
			system("CLS");
			logo();
			appointment2();
		}
		
		else if(choose=="3")
		{
			cout<<"\n\n\t\t\tInvalid Try Again...\n\n";	
			system("CLS");
			logo();
			goto jum3c;
		}
		
		else
		{
		
			system("CLS");
			logo();
			goto j3;
		}
		
	}
	


	////////////////////////////////////////////////////////////////////////////////////////////
	
		else if(select=="5")
	{
		system("CLS");
		logo();	
	}
	
	///////////////////////////////////////////////////////////////////////////////////////////////////
	

	else
	{	
		cout<<"\n\n\t\tInvalid Input";
		Sleep(2000);
		system("CLS");
		logo();
		goto jumpc;
	}
	
}



///////////////////////////////////////////////////////////////////////////////////////////

							// Survelliance Cameras

void cameras()
{
	loading2();
	system("CLS");
	logo();
	cout<<"\n\t\t\t\t\t\t    Survelliance Cameras\n\n";
	cout<<"  ====================================================================================================================\n";
	cout<<"  =                  ---------------------------                       ---------------------------                   =\n";
	cout<<"  =                 |                           |                     |                           |                  =\n";
	cout<<"  =                 |                           |                     |                           |                  =\n";
	cout<<"  =                 |          Video 1          |                     |           Video 2         |                  =\n";
	cout<<"  =                 |                           |                     |                           |                  =\n";
	cout<<"  =                 |                           |                     |                           |                  =\n";
	cout<<"  =                  ---------------------------                       ---------------------------                   =\n";
	cout<<"  =                                                                                                                  =\n";
	cout<<"  =                  ---------------------------                       ---------------------------                   =\n";
	cout<<"  =                 |                           |                     |                           |                  =\n";
	cout<<"  =                 |                           |                     |                           |                  =\n";
	cout<<"  =                 |          Video 3          |                     |           No Signal       |                  =\n";
	cout<<"  =                 |                           |                     |                           |                  =\n";
	cout<<"  =                 |                           |                     |                           |                  =\n";
	cout<<"  =                  ---------------------------                       ---------------------------                   =\n";
	cout<<"  ====================================================================================================================";

		
	
}

/////////////////////////////////////////////////////////////////////////////////////////

				//Rooms
	
				
void rooms()
{
	cout<<"\n\t1 ---->  ICU Room\n";
	cout<<"\t2 ---->  Emergency Room\n";
	cout<<"\t3 ---->  Room 1\n";
	cout<<"\t4 ---->  Room 2\n";
	cout<<"\t5 ---->  Back\n";
}			


////////////////////////////////////////////////////////////////////////////////////////////////////////

				//main program
				
void program()
{
	char modes;
	
	
	
	string username;
	string password;
	int a;
	char accounts;
	
	string adusername;
	string adpass;
	
	int back;
	
	string user_selection;
	bool check=false;
		do{
			p:
			go:
			
			o:	
			s:
				
			main:
			main1:
			main2:
			main3:
			cout<<"\n\t\t\t\t\t\t\t M A I N    M E N U\n";	
			cout<<"\n\n\n\t\t\t\t\t\tUser Mode          ---->  u\n";
			cout<<"\t\t\t\t\t\tReceptionist Mode  ---->  r\n";
			cout<<"\t\t\t\t\t\tAdmin Mode         ---->  a\n";
			cout<<"\t\t\t\t\t\tExit               ---->  e\n";
			
		
			cout<<"\n\n\n";
			cout<<"\t\t\t\t\t\tSelect Mode:     ";
			cin>>modes;
			
			
		//	cout<<"\n\n\n\t\t\t\tWe Strive to Keep Every Heart\n";
		//	cout<<"\n\n\n\t\t\t\t\tClose to Ours\n";
						

				
	///////////////////////////////////////////////////////////////////////////////////
					// User Mode			
				
				if(modes=='u' || modes=='U')
				{	
					tie:
					again:
					back:
					q:
					m:
					ttyl:
					main4:
					main5:
					goo:		
					system("CLS");
		
					logo();				//function call
		
					cout<<"\n\t\t\t\t\t\t\t    User Mode\n\n\n\n\n";
					
					cout<<"\t----> 1  Take an Appointment                ----> 2  Check Doctors                ----> 3  Complaints\n        ----> 4  Back";
					cout<<"\n\n\n\n\t\t\t\t\t\t Select:     ";
					cin>>user_selection;
				
		
				
						
					if(user_selection=="1")
					{	
						n:
						system("CLS");
						logo();				//function call
						cout<<"\n\t\t\t\t\t\t Take an Appointment\n\n\n";
						cout<<"\n\n\n\t\t\t1 ---->  New Form \t\t\t\t2 ---->  Sign In\n";
						cout<<"\t\t\t3 ---->  Back\n\n\n";
							
						string choose;
						cout<<"\n\n\t\t\t\t\tSelect:    ";
						cin>>choose;
							
						if(choose=="1")
						{
							system("CLS");
							logo();
						//	doctors2();
						
						
						
							jump:
		
	jum:
	jum1:
	jum2:
	jum3:
		
		page:
	cout<<"\n\t\t\t\t\t\t\t Doctors List\n\n\n\n";
	cout<<"\t---> 1    Cardiologists\n";
//	cout<<"\t---> 2    Physiotherapists\n";
	cout<<"\t---> 2    Surgeons\n";
//	cout<<"\t---> 4    Pediatrician\n";
	cout<<"\t---> 3    Neurologists\n";
//	cout<<"\t---> 6    Gynecologists\n";
//	cout<<"\t---> 7    Dermatologistst\n";
	cout<<"\t---> 4    Physicians\n";
//	cout<<"\t---> 9    Orthopedic Surgeon\n";
	cout<<"\t---> 5    Main Menu\n";


	string select;
	cout<<"\n\n\n\t\tSelect:     ";
	cin>>select;
		
	if(select=="1")
	{
		j:
		uf:
		uf1:	
		system("CLS");
		logo();
		cout<<"\n\t\t\t\t\t\t\tCardiologists\n\n";
		cout<<"\n\t\t\t\tMorning Shift 09:00 am to 12:00 pm";
		cout<<"\n\n\t\t\t\t\t1 ---->  Dr Farzana Shaikh\n\t\t\t\t\t\t\t(M.B.B.S LUMHS)";
		cout<<endl<<endl;
		cout<<"\n\n\t\t\t\tEvening Shift 02:00 pm to 05:00 pm";
		cout<<"\n\n\t\t\t\t\t2 ---->  Dr Shoaib Siddique\n\t\t\t\t\t\t\t(M.B.B.S DUHS)";
	
		cout<<endl<<endl;
		
		cout<<"\t3 --->  Back     ";
		
		string choose;
		cout<<"\n\n\n\t\t\tSelect:    ";
		cin>>choose;
		
		if(choose=="1")
		{
			system("CLS");
			logo();
			appointment();
			
			ufc:
			string input;
			cout<<"\n\n\t\t1 ---->  Back:    ";
			cin>>input;
	
		if(input=="1")
		{
			system("CLS");
			logo();
			goto uf;
	
		}
		
		else
		{
			
			goto ufc;
		}
	
		}
		
		else if(choose=="2")
		{
			system("CLS");
			logo();
			appointment();
			
			uf1c:
			string input;
			cout<<"\n\n\t\t1 ---->  Back:    ";
			cin>>input;
	
		if(input=="1")
		{
			system("CLS");
			logo();
			goto uf1;
	
		}
		
		else
		{
			
			goto uf1c;
		}
		}
		
		else if(choose=="3")
		{
		
			system("CLS");
			logo();
			goto jum;
		}
		
		else
		{
		
			system("CLS");
			logo();
			goto j;
		}
	
	} 
	
	
////////////////////////////////////////////////////////////////////////////////////////////////	
	
	
	
	else if(select=="2")
	{
		j1:
			uuf:
				uuf1:
		system("CLS");
		logo();
		cout<<"\n\t\t\t\t\t\t\tSurgeons\n\n";
		cout<<"\n\t\t\t\tMorning Shift 09:00 am to 12:00 pm";
		cout<<"\n\n\t\t\t\t\t1 ---->  Dr Ratan Kumar\n\t\t\t\t\t\t\t(M.B.B.S LUMHS)";
		cout<<endl<<endl;
		cout<<"\n\n\t\t\t\tEvening Shift 02:00 pm to 05:00 pm";
		cout<<"\n\n\t\t\t\t\t2 ---->  Dr Afshan\n\t\t\t\t\t\t\t(M.B.B.S DUHS)";
		
		cout<<endl<<endl;
		cout<<"\t3 --->  Back     ";
		
		string choose;
		cout<<"\n\n\t\t\tSelect:    ";
		cin>>choose;
		
		if(choose=="1")
		{
			system("CLS");
			logo();
			appointment();
			
			uufc:
			string input;
			cout<<"\n\n\t\t1 ---->  Back:    ";
			cin>>input;
	
		if(input=="1")
		{
			system("CLS");
			logo();
			goto uuf;
	
		}
		
		else
		{
			
			goto uufc;
		}
	
		}
		
		else if(choose=="2")
		{
			system("CLS");
			logo();
			appointment();
			
			uuf1c:
			string input;
			cout<<"\n\n\t\t1 ---->  Back:    ";
			cin>>input;
	
		if(input=="1")
		{
			system("CLS");
			logo();
			goto uuf1;
	
		}
		
		else
		{
			
			goto uuf1c;
		}
		}
		
		else if(choose=="3")
		{
		
			system("CLS");
			logo();
			goto jum1;
		}
		
		else
		{
		
			system("CLS");
			logo();
			goto j1;
		}
		
		
		
	}
	
	
	
	
	///////////////////////////////////////////////////////////////////////////////////////////////
	
	
		else if(select=="3")
	{
		j2:
			f1:
				f2:
		system("CLS");
		logo();
		cout<<"\n\t\t\t\t\t\t\tNeurologists\n\n";
		cout<<"\n\t\t\t\tMorning Shift 09:00 am to 12:00 pm";
		cout<<"\n\n\t\t\t\t\t1 ---->  Dr Imdad Ansari\n\t\t\t\t\t\t(M.B.B.S LUMHS)";
		cout<<endl<<endl;
		cout<<"\n\n\t\t\t\tEvening Shift 02:00 pm to 05:00 pm";
		cout<<"\n\n\t\t\t\t\t2 ---->  Dr Sanam Panhwar\n\t\t\t\t\t\t(M.B.B.S DUHS)";
		
		cout<<endl<<endl;
		
		cout<<"\t3 --->  Back     ";
		
		string choose;
		cout<<"\n\n\t\t\tSelect:    ";
		cin>>choose;
		
		if(choose=="1")
		{
			system("CLS");
			logo();
			appointment();
			
			f1c:
			string input;
			cout<<"\n\n\t\t1 ---->  Back:    ";
			cin>>input;
	
		if(input=="1")
		{
			system("CLS");
			logo();
			goto f1;
	
		}
		
		else
		{
			
			goto f1c;
		}
		}
		
		else if(choose=="2")
		{
			system("CLS");
			logo();
			appointment();
			
			f2c:
			string input;
			cout<<"\n\n\t\t1 ---->  Back:    ";
			cin>>input;
	
		if(input=="1")
		{
			system("CLS");
			logo();
			goto f2;
	
		}
		
		else
		{
			
			goto f2c;
		}
		}
		
		else if(choose=="3")
		{
	
			system("CLS");
			logo();
			goto jum2;
		}
		
		else
		{
		
			system("CLS");
			logo();
			goto j2;
		}
		
		
	}
	
	
	
	//////////////////////////////////////////////////////////////////////////////////////////////////
	
	
	
	else if(select=="4")
	{
		j3:
			f3:
				f4:
		system("CLS");
		logo();
		cout<<"\n\t\t\t\t\t\t\tPhysicians\n\n";
		cout<<"\n\t\t\t\tMorning Shift 09:00 am to 12:00 pm";
		cout<<"\n\n\t\t\t\t\t1 ---->  Dr Altaf Shaikh\n\t\t\t\t\t\t\t(M.B.B.S LUMHS)";
		cout<<endl<<endl;
		cout<<"\n\n\t\t\t\tEvening Shift 02:00 pm to 05:00 pm";
		cout<<"\n\n\t\t\t\t\t2 ---->  Dr Naila Rashid\n\t\t\t\t\t\t\t(M.B.B.S DUHS)";
		
		cout<<endl<<endl;
		
		cout<<"\t3 --->  Back     ";
		
		string choose;
		cout<<"\n\n\t\t\tSelect:    ";
		cin>>choose;
		
		if(choose=="1")
		{
			system("CLS");
			logo();
			appointment();
			
			
			f3c:
			string input;
			cout<<"\n\n\t\t1 ---->  Back:    ";
			cin>>input;
	
		if(input=="1")
		{
			system("CLS");
			logo();
			goto f3;
	
		}
		
		else
		{
			
			goto f3c;
		}
		}
		
		else if(choose=="2")
		{
			system("CLS");
			logo();
			appointment();
			
			f4c:
			string input;
			cout<<"\n\n\t\t1 ---->  Back:    ";
			cin>>input;
	
		if(input=="1")
		{
			system("CLS");
			logo();
			goto f4;
	
		}
		
		else
		{
			
			goto f4c;
		}
		}
		
		else if(choose=="3")
		{
		
			system("CLS");
			logo();
			goto jum3;
		}
		
		else
		{
		
			system("CLS");
			logo();
			goto j3;
		}
		
	}
	


	////////////////////////////////////////////////////////////////////////////////////////////
	
		else if(select=="5")
	{
		
		system("CLS");
		logo();
		goto o;
	
		
	}
	
	///////////////////////////////////////////////////////////////////////////////////////////////////
	

	else
	{
		
		cout<<"\n\n\t\tInvalid Input";
		Sleep(2000);
		system("CLS");
		logo();
		goto jump;
	}
	
	
						
						////////if end
							check=true;
							break;
						}
						///////////////////////////here pasted	
							else if(choose=="2")
							{
								nice:
								xd:
								system("CLS");
								logo();
								ifstream search;
								search.open("patient.txt");
								string name;
								string para,a;
								cout<<"\n\t\t1 -----> Back";
								cout<<"\n\n\n\t\tENTER YOUR FIRST NAME:     ";
								cin>>a;
								if(a=="1")
								{
									goto ttyl;
								}
								while(!search.eof())
								{
									getline(search,name);
									if(name=="First Name: "+a)
									{
										cout<<"\n\t\t\t"<<name<<endl;
										cout<<"\n\t\t\tYes you were found\n\n";
									//	doctors3(); placed from here
									
									
									
									
									jumpc:
		
	jumc:
	jum1c:
	jum2c:
	jum3c:
		
	//	page:
	
	cout<<"\n\t\t\t\t\t\t\t Doctors List\n\n";
	cout<<"\t---> 1    Cardiologists\n";
//	cout<<"\t---> 2    Physiotherapists\n";
	cout<<"\t---> 2    Surgeons\n";
//	cout<<"\t---> 4    Pediatrician\n";
	cout<<"\t---> 3    Neurologists\n";
//	cout<<"\t---> 6    Gynecologists\n";
//	cout<<"\t---> 7    Dermatologistst\n";
	cout<<"\t---> 4    Physicians\n";
//	cout<<"\t---> 9    Orthopedic Surgeon\n";
	cout<<"\t---> 5    Main Menu\n";


	string select;
	cout<<"\n\t\tSelect:     ";
	cin>>select;
	
	if(select=="1")
	{
	
		jk:	
		f5:
		f6:
			
		system("CLS");
		logo();
		cout<<"\n\t\t\t\t\t\t\tCardiologists\n\n";
		cout<<"\n\t\t\t\tMorning Shift 09:00 am to 12:00 pm";
		cout<<"\n\n\t\t\t\t\t1 ---->  Dr Farzana Shaikh\n\t\t\t\t\t\t\t(M.B.B.S LUMHS)";
		cout<<endl<<endl;
		cout<<"\n\n\t\t\t\tEvening Shift 02:00 pm to 05:00 pm";
		cout<<"\n\n\t\t\t\t\t2 ---->  Dr Shoaib Siddique\n\t\t\t\t\t\t\t(M.B.B.S DUHS)";
	
		cout<<endl<<endl;
		
		cout<<"\t3 --->  Back     ";
		
		string choose;
		cout<<"\n\n\t\t\tSelect:    ";
		cin>>choose;
		
		if(choose=="1")
		{
			system("CLS");
			logo();
			appointment2();
			
			f5c:
			string input;
			cout<<"\n\n\t\t1 ---->  Back:    ";
			cin>>input;
	
		if(input=="1")
		{
			system("CLS");
			logo();
			goto f5;
	
		}
		
		else
		{
			
			goto f5c;
		}
		}
		
		else if(choose=="2")
		{
			system("CLS");
			logo();
			appointment2();
			
			f6c:
			string input;
			cout<<"\n\n\t\t1 ---->  Back:    ";
			cin>>input;
	
		if(input=="1")
		{
			system("CLS");
			logo();
			goto f6;
	
		}
		
		else
		{
			
			goto f6c;
		}
		}
		
		else if(choose=="3")
		{
			cout<<"\n\n\t\t\tInvalid Try Again...\n\n";	
			system("CLS");
			logo();
			goto jumc;
		}
		
		else
		{
		
			system("CLS");
			logo();
			goto jk;
		}
	
	} 
	
	
////////////////////////////////////////////////////////////////////////////////////////////////	
	
	
	
	else if(select=="2")
	{
		jk1:
		f7:
		f8:
		system("CLS");
		logo();
		cout<<"\n\t\t\t\t\t\t\tSurgeons\n\n";
		cout<<"\n\t\t\t\tMorning Shift 09:00 am to 12:00 pm";
		cout<<"\n\n\t\t\t\t\t1 ---->  Dr Ratan Kumar\n\t\t\t\t\t\t\t(M.B.B.S LUMHS)";
		cout<<endl<<endl;
		cout<<"\n\n\t\t\t\tEvening Shift 02:00 pm to 05:00 pm";
		cout<<"\n\n\t\t\t\t\t2 ---->  Dr Afshan\n\t\t\t\t\t\t\t(M.B.B.S DUHS)";
		
		cout<<endl<<endl;
		cout<<"\t3 --->  Back     ";
		
		string choose;
		cout<<"\n\n\t\t\tSelect:    ";
		cin>>choose;
		
		if(choose=="1")
		{
			system("CLS");
			logo();
			appointment2();
			
			f7c:
			string input;
			cout<<"\n\n\t\t1 ---->  Back:    ";
			cin>>input;
	
		if(input=="1")
		{
			system("CLS");
			logo();
			goto f7;
	
		}
		
		else
		{
			
			goto f7c;
		}
		}
		
		else if(choose=="2")
		{
			system("CLS");
			logo();
			appointment2();
			f8c:
			string input;
			cout<<"\n\n\t\t1 ---->  Back:    ";
			cin>>input;
	
		if(input=="1")
		{
			system("CLS");
			logo();
			goto f8;
	
		}
		
		else
		{
			
			goto f8c;
		}
		}
		
		else if(choose=="3")
		{
			cout<<"\n\n\t\t\tInvalid Try Again...\n\n";	
			system("CLS");
			logo();
			goto jum1c;
		}
		
		else
		{
		
			system("CLS");
			logo();
			goto jk1;
		}
		
		
		
	}
	
	
	
	
	///////////////////////////////////////////////////////////////////////////////////////////////
	
	
		else if(select=="3")
	{
		jk2:
		f9:
		f10:
		system("CLS");
		logo();
		cout<<"\n\t\t\t\t\t\t\tNeurologists\n\n";
		cout<<"\n\t\t\t\tMorning Shift 09:00 am to 12:00 pm";
		cout<<"\n\n\t\t\t\t\t1 ---->  Dr Imdad Ansari\n\t\t\t\t\t\t\t(M.B.B.S LUMHS)";
		cout<<endl<<endl;
		cout<<"\n\n\t\t\t\tEvening Shift 02:00 pm to 05:00 pm";
		cout<<"\n\n\t\t\t\t\t2 ---->  Dr Sanam Panhwar\n\t\t\t\t\t\t\t(M.B.B.S DUHS)";
		
		cout<<endl<<endl;
		
		cout<<"\t3 --->  Back     ";
		
		string choose;
		cout<<"\n\n\t\t\tSelect:    ";
		cin>>choose;
		
		if(choose=="1")
		{
			system("CLS");
			logo();
			appointment2();
			
			f9c:
			string input;
			cout<<"\n\n\t\t1 ---->  Back:    ";
			cin>>input;
	
		if(input=="1")
		{
			system("CLS");
			logo();
			goto f9;
	
		}
		
		else
		{
			
			goto f9c;
		}
		}
		
		else if(choose=="2")
		{
			system("CLS");
			logo();
			appointment2();
			
			f10c:
			string input;
			cout<<"\n\n\t\t1 ---->  Back:    ";
			cin>>input;
	
		if(input=="1")
		{
			system("CLS");
			logo();
			goto f10;
	
		}
		
		else
		{
			
			goto f10c;
		}
		}
		
		else if(choose=="3")
		{
			cout<<"\n\n\t\t\tInvalid Try Again...\n\n";	
			system("CLS");
			logo();
			goto jum2c;
		}
		
		else
		{
			
			system("CLS");
			logo();
			goto jk2;
		}
		
		
	}
	
	
	
	//////////////////////////////////////////////////////////////////////////////////////////////////
	
	
	
	else if(select=="4")
	{
		jk3:
		f11:
		f12:
		system("CLS");
		logo();
		cout<<"\n\t\t\t\t\t\t\tPhysicians\n\n";
		cout<<"\n\t\t\t\tMorning Shift 09:00 am to 12:00 pm";
		cout<<"\n\n\t\t\t\t\t1 ---->  Dr Altaf Shaikh\n\t\t\t\t\t\t\t(M.B.B.S LUMHS)";
		cout<<endl<<endl;
		cout<<"\n\n\t\t\t\tEvening Shift 02:00 pm to 05:00 pm";
		cout<<"\n\n\t\t\t\t\t2 ---->  Dr Naila Rashid\n\t\t\t\t\t\t\t(M.B.B.S DUHS)";
		
		cout<<endl<<endl;
		
		cout<<"\t3 --->  Back     ";
		
		string choose;
		cout<<"\n\n\t\t\tSelect:    ";
		cin>>choose;
		
		if(choose=="1")
		{
			system("CLS");
			logo();
			appointment2();
			
			f11c:
			string input;
			cout<<"\n\n\t\t1 ---->  Back:    ";
			cin>>input;
	
		if(input=="1")
		{
			system("CLS");
			logo();
			goto f11;
	
		}
		
		else
		{
			
			goto f11c;
		}
		}
		
		else if(choose=="2")
		{
			system("CLS");
			logo();
			appointment2();
			
			f12c:
			string input;
			cout<<"\n\n\t\t1 ---->  Back:    ";
			cin>>input;
	
		if(input=="1")
		{
			system("CLS");
			logo();
			goto f12;
	
		}
		
		else
		{
			
			goto f12c;
		}
		}
		
		else if(choose=="3")
		{
			cout<<"\n\n\t\t\tInvalid Try Again...\n\n";	
			system("CLS");
			logo();
			goto jum3c;
		}
		
		else
		{
		
			system("CLS");
			logo();
			goto jk3;
		}
		
	}
	


	////////////////////////////////////////////////////////////////////////////////////////////
	
		else if(select=="5")
	{
		system("CLS");
		logo();
		goto s;
		check=true;
		break;	
	}
	
	///////////////////////////////////////////////////////////////////////////////////////////////////
	

	else
	{	
		cout<<"\n\n\t\tInvalid Input";
		Sleep(2000);
		system("CLS");
		logo();
		goto jumpc;
	}
							////////////////////////////////////////////contine
										cout<<"\n\t\t\t"<<name<<endl;
										while(!search.eof())
										{
											getline(search,para);
											if(para!="====================")
											{
												cout<<"\n\t\t\t"<<para<<endl;
											}
											else
											{
												break;
											}
										}
									}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////									
									//else
									//{
									//	goto nice;
									//}
		
								}
									string backf;
												cout<<"\n\n\n\t1 ---->  Back                2 ----> Enter Again\n";
												byebye:
												cout<<"\n\tType Here: ";
												cin>>backf;
											
												if(backf=="1")
												{
													system("CLS");
													logo();
													goto tie;
												}
												if(backf=="2")
												{
													goto xd;
												}
												else
												{
													cout<<"\n\tWrong Input";
													goto byebye;
												}
										

								 	
										cout<<"\n\t\t\t__________________________________________________________________________________\n";
										cout<<"\n\t\t\t\t\t\t\t\t\t\t\t Print\n";
									
									check=true;
									break;
									}
							
							
							else if(choose=="3")
							{
								system("CLS");
								logo();
								goto m;	
								check=true;
								break;
							}
							
							
							else
							{
								goto n;
								check=true;
								break;
							}
							
						}
						
						
						
						else if(user_selection=="2")
						{
							
							system("CLS");
							logo();				//function call
							cout<<"\n\t\t\t\t\t\t Doctor's List\n\n";
						//	doctors();
						
						//Paste Here
					
					
						jumped:
		pagee1:
	cout<<"\n\t\t\t\t\t\t\t Check Doctors\n\n";
	cout<<"\t---> 1    Cardiologists\n";
//	cout<<"\t---> 2    Physiotherapists\n";
	cout<<"\t---> 2    Surgeons\n";
//	cout<<"\t---> 4    Pediatrician\n";
	cout<<"\t---> 3    Neurologists\n";
//	cout<<"\t---> 6    Gynecologists\n";
//	cout<<"\t---> 7    Dermatologistst\n";
	cout<<"\t---> 4    Physicians\n";
//	cout<<"\t---> 9    Orthopedic Surgeon\n";
	cout<<"\t---> 5    back\n";


	string select;
	cout<<"\n\t\tSelect:     ";
	cin>>select;
	
	if(select=="1")
	{
		y1:
		system("CLS");
		logo();
		cout<<"\n\t\t\t\t\t\t\tCardiologists\n\n";
		cout<<"\n\t\t\t\t ----> 1  Morning Shift 09:00 am to 12:00 pm";
		cout<<"\n\n\t\t\t\t\tDr Farzana Shaikh\n\t\t\t\t\t\t\t(M.B.B.S LUMHS)";
		cout<<endl<<endl;
		cout<<"\n\n\t\t\t\t ----> 2  Evening Shift 02:00 pm to 05:00 pm";
		cout<<"\n\n\t\t\t\t\tDr Shoaib Siddique\n\t\t\t\t\t\t\t(M.B.B.S DUHS)";
		cout<<endl<<endl;
		
		string back;
	
		cout<<"\t3 --->  Back     ";
		cin>>back;
		if(back=="3")
		{
			system("CLS");
			logo();
			goto pagee1;
		}
		else
		{
			system("CLS");
			logo();
			goto y1;
		}
	
	} 
	
	
	/////////////////////////////////////////////////////////////////////////////////////////
	
	
	else if(select=="2")
	{
		y2:
		system("CLS");
		logo();
		cout<<"\n\t\t\t\t\t\t\tSurgeons\n\n";
		cout<<"\n\t\t\t\tMorning Shift 09:00 am to 12:00 pm";
		cout<<"\n\n\t\t\t\t\tDr Ratan Kumar\n\t\t\t\t\t\t(M.B.B.S LUMHS)";
		cout<<endl<<endl;
		cout<<"\n\n\t\t\t\tEvening Shift 02:00 pm to 05:00 pm";
		cout<<"\n\n\t\t\t\t\tDr Afshan\n\t\t\t\t\t\t(M.B.B.S DUHS)";
		
		cout<<endl<<endl;
		
		string back;
		cout<<"\t3 --->  Back     ";
		cin>>back;
		if(back=="3")
		{
			system("CLS");
			logo();
			goto pagee1;
		}
		else
		{
			system("CLS");
			logo();
			goto y2;
		}
	
	}
	
	////////////////////////////////////////////////////////////////////////////////////////
	
		else if(select=="3")
		{
			y3:
			system("CLS");
			logo();
			cout<<"\n\t\t\t\t\t\t\tNeurologists\n\n";
			cout<<"\n\t\t\t\tMorning Shift 09:00 am to 12:00 pm";
			cout<<"\n\n\t\t\t\t\tDr Imdad Ansari\n\t\t\t\t\t\t(M.B.B.S LUMHS)";
			cout<<endl<<endl;
			cout<<"\n\n\t\t\t\tEvening Shift 02:00 pm to 05:00 pm";
			cout<<"\n\n\t\t\t\t\tDr Sanam Panhwar\n\t\t\t\t\t\t(M.B.B.S DUHS)";
		
			cout<<endl<<endl;
		
			string back;
			cout<<"\t3 --->  Back     ";
			cin>>back;
			
			if(back=="3")
			{
				system("CLS");
				logo();			// function call
				goto pagee1;
			}
			
		else
		{
			system("CLS");
			logo();
			goto y3;
		}
	
		}
		
	////////////////////////////////////////////////////////////////////////////////
	
	
	else if(select=="4")
	{
		y4:
		system("CLS");
		logo();
		cout<<"\n\t\t\t\t\t\t\tPhysicians\n\n";
		cout<<"\n\t\t\t\tMorning Shift 09:00 am to 12:00 pm";
		cout<<"\n\n\t\t\t\t\tDr Altaf Shaikh\n\t\t\t\t\t\t(M.B.B.S LUMHS)";
		cout<<endl<<endl;
		cout<<"\n\n\t\t\t\tEvening Shift 02:00 pm to 05:00 pm";
		cout<<"\n\n\t\t\t\t\tDr Naila Rashid\n\t\t\t\t\t\t(M.B.B.S DUHS)";
		
		cout<<endl<<endl;
		
		string back;
		cout<<"\t3 --->  Back     ";
		cin>>back;
		if(back=="3")
		{
			system("CLS");
			logo();
			goto pagee1;
		}
		
		else
		{
			system("CLS");
			logo();
			goto y4;
		}
	}	
	
	
		else if(select=="5")
		{
			system("CLS");
			logo();
			goto goo;
		
		}
		

	


	
//////////////////////////////////////////////////////////////////////////////////	


	else
	{
		
		cout<<"\n\n\t\tInvalid Input";
		Sleep(2000);
		system("CLS");
		logo();
		goto jumped;
	}
					
					
					
					//////////////////////////////////////////////////////////////
							Sleep(2000);
			
							check=true;
							break;
						}
						
					
						
					
					
					
						else if(user_selection=="3")
						{
							
							system("CLS");
							logo();				//function call
							cout<<"\n\t\t\t\t\t\t\t Complaints\n\n";
							cout<<"\t\t+ ---->  Back\n\n";
						//	user_complain();
						
							string comp1,email, comp2;// comp1 for entering complaints, comp2 for checking them back
	
							//for entering complaints in user mode
							cout<<"\n\t\tEnter your Email/Name for complain:    ";
							cin.ignore();
							getline(cin,email);
							
							////////////////////////////////////////////////////////
							
							////////////////////////////////////////////////////////////	back 
							if(email=="+")
							{
								system("CLS");
								logo();
								goto main4;
							}
							/////////////////////////////////////////////////////////////////	
			
							cout<<endl;
							cout<<"\t\tEnter your Complain:    ";
							getline(cin,comp1);
							
							////////////////////////////////////////////////////////////	back 
							if(comp1=="+")
							{
								system("CLS");
								logo();
								goto main5;
							}
							
							ofstream out;
							out.open("file.txt",ios::app); //app means append: used to no delete previous complaints
							out<<"* Sent by: "<<email<<endl<<" Complain : "<<comp1<<endl;
							out<<"======================================================";
							out<<endl;
							out.close();
							cout<<"\n\n\t\t\t Complain Saved";
							
							Sleep(3000);
							
							goto back;
							

							check=true;
							break;
						}
						
						
						else if(user_selection=="4")
						{
							system("CLS");
							logo();				//function call
							program();			//back to main screen
							check=true;
							break;
					
						}
						
					
						else
						{
							cout<<"\n\t\t\t\tInvlaid Input";
							Sleep(1000);
							goto again;
							check=true;
							break;
						}
	}
					
	////////////////////////////////////////////////////////////////////////////////////////////
							// Receptionist Mode
										
	
				else if(modes=='r' || modes=='R')
				{
					again2:
						
					system("CLS");
					logo();				//function call
		
					cout<<"\n\t\t\t\t\t\t    Receptionist Portal\n\n\n";
					cout<<"\t\t\t+ ---->  Back \t\t\t Sign In\n\n";
						
									
					ifstream search;
					search.open("NewAccount.txt");
					string name,para,a;
					string username,password;
					cout<<"\n\n\t\t\t\t\t\tUsername:     ";
					cin>>username;
					
			////////////////////////////////////////////////////////////	back to main screen	
					if(username=="+")
					{
						system("CLS");
						logo();
						goto main2;
					}
			/////////////////////////////////////////////////////////////////	
			
					cout<<"\n\t\t\t\t\t\tPassword:     ";
					cin>>password;
					
			////////////////////////////////////////////////////////////	back to main screen	
					if(password=="+")
					{
						system("CLS");
						logo();
						goto main3;
					}
			/////////////////////////////////////////////////////////////////	
							
							
					while(!search.eof())
					{
						getline(search,name);
						if(name==username && para!="====================" )
						{
							while(!search.eof())
							{
								getline(search,para);
										
								if( username==name && password==para)
								{

									c:
									e:
									z:
									got:
									system("CLS");
									logo();			//function call
			
									cout<<"\n\t\t\t\t\t\t\tReceptionist Mode\n\n";
									cout<<"\n\n\t----> 1  Doctor's Appointment";
									cout<<"\t\t----> 2  Patient Records"; 
									cout<<"\t\t----> 3  Check availability\n";
									cout<<"\t----> 4  Main Menu\n";
								
									string option;
									cout<<"\n\n\n\t\t\tSelect:     ";
									cin>>option;
								
			                  		if(option=="1")			                	
			               			{ 
										system("cls");
			                    		logo();
			                  		//	doctors2();
			                  		//Paste Here
			                  		
			                  			jumppp:
		
	jummm:
	jummm1:
	jummm2:
	jummm3:
		
		pagedd:
	cout<<"\n\t\t\t\t\t\t\t Doctors List\n\n\n\n";
	cout<<"\t---> 1    Cardiologists\n";
//	cout<<"\t---> 2    Physiotherapists\n";
	cout<<"\t---> 2    Surgeons\n";
//	cout<<"\t---> 4    Pediatrician\n";
	cout<<"\t---> 3    Neurologists\n";
//	cout<<"\t---> 6    Gynecologists\n";
//	cout<<"\t---> 7    Dermatologistst\n";
	cout<<"\t---> 4    Physicians\n";
//	cout<<"\t---> 9    Orthopedic Surgeon\n";
	cout<<"\t---> 5    Back\n";


	string select;
	cout<<"\n\n\n\t\tSelect:     ";
	cin>>select;
		
	if(select=="1")
	{
		jt:
		b1:
		b2:	
		system("CLS");
		logo();
		cout<<"\n\t\t\t\t\t\t\tCardiologists\n\n";
		cout<<"\n\t\t\t\tMorning Shift 09:00 am to 12:00 pm";
		cout<<"\n\n\t\t\t\t\t1 ---->  Dr Farzana Shaikh\n\t\t\t\t\t\t\t(M.B.B.S LUMHS)";
		cout<<endl<<endl;
		cout<<"\n\n\t\t\t\tEvening Shift 02:00 pm to 05:00 pm";
		cout<<"\n\n\t\t\t\t\t2 ---->  Dr Shoaib Siddique\n\t\t\t\t\t\t\t(M.B.B.S DUHS)";
	
		cout<<endl<<endl;
		
		cout<<"\t3 --->  Back     ";
		
		string choose;
		cout<<"\n\n\n\t\t\tSelect:    ";
		cin>>choose;
		
		if(choose=="1")
		{
			system("CLS");
			logo();
			appointment();
			
			b1c:
			string input;
			cout<<"\n\n\t\t1 ---->  Back:    ";
			cin>>input;
	
		if(input=="1")
		{
			system("CLS");
			logo();
			goto b1;
	
		}
		
		else
		{
			
			goto b1c;
		}
		}
		
		else if(choose=="2")
		{
			system("CLS");
			logo();
			appointment();
			
			b2c:
			string input;
			cout<<"\n\n\t\t1 ---->  Back:    ";
			cin>>input;
	
		if(input=="1")
		{
			system("CLS");
			logo();
			goto b2;
	
		}
		
		else
		{
			
			goto b2c;
		}
		}
		
		else if(choose=="3")
		{
		
			system("CLS");
			logo();
			goto jummm;
		}
		
		else
		{
		
			system("CLS");
			logo();
			goto jt;
		}
	
	} 
	
	
////////////////////////////////////////////////////////////////////////////////////////////////	
	
	
	
	else if(select=="2")
	{
		jt1:
		b3:
		b4:
		system("CLS");
		logo();
		cout<<"\n\t\t\t\t\t\t\tSurgeons\n\n";
		cout<<"\n\t\t\t\tMorning Shift 09:00 am to 12:00 pm";
		cout<<"\n\n\t\t\t\t\t1 ---->  Dr Ratan Kumar\n\t\t\t\t\t\t\t(M.B.B.S LUMHS)";
		cout<<endl<<endl;
		cout<<"\n\n\t\t\t\tEvening Shift 02:00 pm to 05:00 pm";
		cout<<"\n\n\t\t\t\t\t2 ---->  Dr Afshan\n\t\t\t\t\t\t\t(M.B.B.S DUHS)";
		
		cout<<endl<<endl;
		cout<<"\t3 --->  Back     ";
		
		string choose;
		cout<<"\n\n\t\t\tSelect:    ";
		cin>>choose;
		
		if(choose=="1")
		{
			system("CLS");
			logo();
			appointment();
			
			b3c:
			string input;
			cout<<"\n\n\t\t1 ---->  Back:    ";
			cin>>input;
	
		if(input=="1")
		{
			system("CLS");
			logo();
			goto b3;
	
		}
		
		else
		{
			
			goto b3c;
		}
		}
		
		else if(choose=="2")
		{
			system("CLS");
			logo();
			appointment();
			
			b4c:
			string input;
			cout<<"\n\n\t\t1 ---->  Back:    ";
			cin>>input;
	
		if(input=="1")
		{
			system("CLS");
			logo();
			goto b4;
	
		}
		
		else
		{
			
			goto b4c;
		}
		}
		
		else if(choose=="3")
		{
		
			system("CLS");
			logo();
			goto jummm1;
		}
		
		else
		{
		
			system("CLS");
			logo();
			goto jt1;
		}
		
		
		
	}
	
	
	
	
	///////////////////////////////////////////////////////////////////////////////////////////////
	
	
		else if(select=="3")
	{
		jt2:
		b5:
		b6:
		system("CLS");
		logo();
		cout<<"\n\t\t\t\t\t\t\tNeurologists\n\n";
		cout<<"\n\t\t\t\tMorning Shift 09:00 am to 12:00 pm";
		cout<<"\n\n\t\t\t\t\t1 ---->  Dr Imdad Ansari\n\t\t\t\t\t\t(M.B.B.S LUMHS)";
		cout<<endl<<endl;
		cout<<"\n\n\t\t\t\tEvening Shift 02:00 pm to 05:00 pm";
		cout<<"\n\n\t\t\t\t\t2 ---->  Dr Sanam Panhwar\n\t\t\t\t\t\t(M.B.B.S DUHS)";
		
		cout<<endl<<endl;
		
		cout<<"\t3 --->  Back     ";
		
		string choose;
		cout<<"\n\n\t\t\tSelect:    ";
		cin>>choose;
		
		if(choose=="1")
		{
			system("CLS");
			logo();
			appointment();
			
			b5c:
			string input;
			cout<<"\n\n\t\t1 ---->  Back:    ";
			cin>>input;
	
		if(input=="1")
		{
			system("CLS");
			logo();
			goto b5;
	
		}
		
		else
		{
			
			goto b5c;
		}
		}
		
		else if(choose=="2")
		{
			system("CLS");
			logo();
			appointment();
			
			b6c:
			string input;
			cout<<"\n\n\t\t1 ---->  Back:    ";
			cin>>input;
	
		if(input=="1")
		{
			system("CLS");
			logo();
			goto b6;
	
		}
		
		else
		{
			
			goto b6c;
		}
		}
		
		else if(choose=="3")
		{
	
			system("CLS");
			logo();
			goto jummm2;
		}
		
		else
		{
		
			system("CLS");
			logo();
			goto jt2;
		}
		
		
	}
	
	
	
	//////////////////////////////////////////////////////////////////////////////////////////////////
	
	
	
	else if(select=="4")
	{
		jt3:
		b7:
		b8:
		system("CLS");
		logo();
		cout<<"\n\t\t\t\t\t\t\tPhysicians\n\n";
		cout<<"\n\t\t\t\tMorning Shift 09:00 am to 12:00 pm";
		cout<<"\n\n\t\t\t\t\t1 ---->  Dr Altaf Shaikh\n\t\t\t\t\t\t\t(M.B.B.S LUMHS)";
		cout<<endl<<endl;
		cout<<"\n\n\t\t\t\tEvening Shift 02:00 pm to 05:00 pm";
		cout<<"\n\n\t\t\t\t\t2 ---->  Dr Naila Rashid\n\t\t\t\t\t\t\t(M.B.B.S DUHS)";
		
		cout<<endl<<endl;
		
		cout<<"\t3 --->  Back     ";
		
		string choose;
		cout<<"\n\n\t\t\tSelect:    ";
		cin>>choose;
		
		if(choose=="1")
		{
			system("CLS");
			logo();
			appointment();
			
			b7c:
			string input;
			cout<<"\n\n\t\t1 ---->  Back:    ";
			cin>>input;
	
		if(input=="1")
		{
			system("CLS");
			logo();
			goto b7;
	
		}
		
		else
		{
			
			goto b7c;
		}
		}
		
		else if(choose=="2")
		{
			system("CLS");
			logo();
			appointment();
			
			b8c:
			string input;
			cout<<"\n\n\t\t1 ---->  Back:    ";
			cin>>input;
	
		if(input=="1")
		{
			system("CLS");
			logo();
			goto b8;
	
		}
		
		else
		{
			
			goto b8c;
		}
		}
		
		else if(choose=="3")
		{
		
			system("CLS");
			logo();
			goto jummm3;
		}
		
		else
		{
		
			system("CLS");
			logo();
			goto jt3;
		}
		
	}
	


	////////////////////////////////////////////////////////////////////////////////////////////
	
		else if(select=="5")
	{
		
		system("CLS");
		logo();
		goto got;
		
	
		
	}
	
	///////////////////////////////////////////////////////////////////////////////////////////////////
	

	else
	{
		
		cout<<"\n\n\t\tInvalid Input";
		Sleep(2000);
		system("CLS");
		logo();
		goto jumppp;
	}
	
			                  		
			                  		
			                  		
			                  		
			                  			check=true;
			                  			break;
							  		}
							  	
							  	
							  	
							  		else if(option=="2")
									{	
										b:
										f:
										x:
										q1:
										system("CLS");
										logo();
										cout<<"\n\t\t\t\t\t\t\tPatient Records\n\n\n\n";
							  			cout<<"\n\t\t1 ---->  All Patients Record";
							  			cout<<"\t\t\t\t2 ---->  Specific Patient Record\n";
							  			cout<<"\t\t3 ---->  Back\n";
							  		
							  			string opt;
							  			cout<<"\n\n\n\t\t\t\tSelect:     ";
							  			cin>>opt;
							  		
							  		if(opt=="1")
							  		{
							  			g:
							  			system("CLS");
							  			logo();
							  			cout<<"\n\t\t\t\t\t\t\t All Patients Record\n\n\n";	
							  			
							  			// Here Filing of All Patients Records
							  			ifstream in;
										in.open("patient.txt");
										string all_data;
										
										while(getline(in,all_data))
										{
											cout<<"\t"<<all_data<<"\n";
										}
											in.close();
											
											
											string back;
											cout<<"\n\t1 ---->  Back:    ";
											cin>>back;
											
											if(back=="1")
											{
												system("CLS");
												logo();
												goto f;
											}
											
											else
											{
												system("CLS");
												logo();
												goto g;
											}
											check=true;
											break;
							  			
							  			
									}




									
									else if(opt=="2")
									{
										w:
										hi:
										system("CLS");
							  			logo();
							  			cout<<"\n\t\t\t\t\t\t\t Specific Patient Record\n\n";
							  			cout<<"\n\t\t1 ---->  Back\n\n";
										  
										  // Here Filing of Specific Patients Records	
										  	//////////////   Searching for a specific Paient //////////////////
											ifstream search;
											search.open("patient.txt");
											string name;
											string para,a;
											cout<<"\n\n\t\t\tEnter Patient Name:     ";
											cin>>a;
										
											if(a=="1")
											{
												goto q1;
											}
											
											cout<<endl<<endl;
											while(!search.eof())
											{
												getline(search,name);
												
												if(name=="First Name: "+a)
												{
													cout<<"\t\t\t"<<name<<endl;
													while(!search.eof())
													{
														getline(search,para);
														if(para!="====================")
														{
															
															cout<<"\t\t\t"<<para<<endl;
														
															
														}
															else
															{
																break;
															}
													}
													
													check=true;
													break;		
												}
											
												
												//else
												//{
												//	cout<<"\t\tRecord Not Found";
												//	Sleep(3000);
												//	goto w;
												//}
													
											}
											
											
												string back1;
												cout<<"\n\n\n\t1 ---->  Back                2 ----> Enter Another Patient\n";
												bye:
												cout<<"\n\tType Here: ";
												cin>>back1;
											
												if(back1=="1")
												{
													system("CLS");
													logo();
													goto x;
												}
												if(back1=="2")
												{
													goto hi;
												}
												else
												{
													goto bye;
												}
										

											
									check=true;
									break;
									}
									
									
											else if(opt=="3")
											{
												system("CLS");
							  					logo();
							  					goto c;		
											}
									
												else
												{
													cout<<"\n\t\t Invalid Input Try Again....";
													system("CLS");
													logo();
													goto b;
										
												}
								}
								
								
								
								
								
								else if(option=="3")			                	
			               		{ 
			               			a:
			               			z1:
			               			y:
			               			k:
			           				l:
			               			d:
									system("cls");
			                    	logo();
			                    	cout<<"\n\t\t\t\t\t\t\t Rooms\n\n";
			                  		rooms();				// function call
			                  		
			                  		string option;
									cout<<"\n\n\n\t\t\tSelect:     ";
									cin>>option;
									
									if(option=="1")
									{
										y1c:
										system("CLS");
										logo();
										cout<<"\n\t\t\t\t\t\t\t ICU Room\n\n";
										cout<<"\n\t\t\t\t\t\t\t BOOKED\n\n";
										
										cout<<"\n\t\t\t\tPatient Name:   "<<"Shahzain\t\t Bed:   01\n";
										cout<<"\n\t\t\t\tDate:    "<<"23/12/2022\n\n\n";
										
										string rept;
										cout<<"\n\n\t\t1 ---->  Back:     ";
										cin>>rept;
										if(rept=="1")
										{
											system("CLS");
											logo();
											goto y;
										}
										else
										{
											goto y1c;
										}
										check=true;
										break;
									}
									
									
											else if(option=="2")
											{
												k1:
												system("CLS");
												logo();
												cout<<"\n\t\t\t\t\t\t\t Emergency Room\n\n";
												//	cout<<"\n\t\t\t\t\t BOOKED\n\n";
												cout<<"\n\n\t\t\tTotal Beds:         5\n";
												cout<<"\t\t\tBooked Beds:        2\n";
												cout<<"\t\t\tFree Beds:          3\n";
								
												cout<<"\n\n\n\t\t\t\tPatient Name:   "<<"Fahad Ahmed\t\t Bed:   01\n";
												cout<<"\n\t\t\t\tDate:    "<<"16/12/2022\n\n\n";
										
												cout<<"\n\n\n\t\t\t\tPatient Name:   "<<"Muzamil Ali\t\t Bed:   02\n";
												cout<<"\n\t\t\t\tDate:    "<<"11/12/2022\n\n\n";
												
												
												string rept1;
												cout<<"\t\t1 ---->  Back:    ";
												cin>>rept1;
												if(rept1=="1")
												{
													system("CLS");
													logo();
													goto k;
												}
													else
													{
														goto k1;
													}
										
												check=true;
												break;
										
											}
									
									
									
												else if(option=="3")
												{
													l1:
													system("CLS");
													logo();
													cout<<"\n\t\t\t\t\t\t\t Room 1\n\n";
													//	cout<<"\n\t\t\t\t\t BOOKED\n\n";
													cout<<"\n\n\t\t\tTotal Beds:         3\n";
													cout<<"\t\t\tBooked Beds:        1\n";
													cout<<"\t\t\tFree Beds:          2\n";
										
													cout<<"\n\n\n\t\t\t\tPatient Name:   "<<"Nawaz\t\t Bed:   01\n";
													cout<<"\n\t\t\t\tDate:    "<<"09/12/2022\n\n\n";
													
														string rept2;
														cout<<"\n\t\t1 ---->  Back:    ";
														cin>>rept2;
														if(rept2=="1")
														{
															system("CLS");
															logo();
															goto l;
														}
															else
															{
																goto l1;
															}
										
													check=true;
													break;
	
												}
									
									
														else if(option=="4")
														{
															d1:
															system("CLS");
															logo();
															cout<<"\n\t\t\t\t\t\t\t\t Room 2\n\n";
															cout<<"\n\t\t\t\t\t\t\t\t Empty\n\n\n";
															
															string rept3;
															cout<<"\n\t\t1 ---->  Back:    ";
															cin>>rept3;
															if(rept3=="1")
															{
																system("CLS");
																logo();
																goto d;
															}
																else
																{
																	goto d1;
																}
										
															check=true;
															break;					
														}
														
														
															else if(option=="5")
															{
																system("CLS");
																logo();
																goto z;
										
																check=true;
																break;					
															}
															
								
															else
															{
																system("CLS");
																logo();
																goto a;
																check=true;
																break;
															}
									
								
							  	}



							  	
							  	else if(option=="4")
							  	{
							  		system("CLS");
							  		logo();
							  		goto p;
							  		
								}
									
									else
									{
										goto e;
										check=true;
										break;
									}									
							}
							else
							{
								cout<<"\n\t\t\tInvalid Username and Password";
								
								goto again2;
								check=true;	
								break;
								
							}

				}

			}
							else
							{
								cout<<"\n\t\t\tInvalid Username and Password";
								
								goto again2;
								check=true;	
								break;
								
							}

				
		}
							     // Receptionist account filng 
								//	Which created by admin
								

				//	}
}

							
	/////////////////////////////////////////////////////////////////////////////////////
							// Admin Mode					
							
				else if(modes=='a' || modes=='A')
				{
					again3:
					
					system("CLS");
					logo();
					
					cout<<"\n\t\t\t\t\t\t\t    Admin Portal\n\n\n";
					
					cout<<"\n\t\t\t+ ---->  Back\n\n";
					
					cout<<"\n\t\t\t\t\t\tAdmin Username:    ";
					cin>>adusername;
					
			////////////////////////////////////////////////////////////	back to main screen	
					if(adusername=="+")
					{
						system("CLS");
						logo();
						goto main;
					}
			/////////////////////////////////////////////////////////////////		
					
					cout<<"\n\t\t\t\t\t\tAdmin Password:    ";
					cin>>adpass;
					
			//////////////////////////////////////////////////////////   back to main screen
					
					if(adpass=="+")
					{
						system("CLS");
						logo();
						goto main1;
					}
					
			///////////////////////////////////////////////////////////		
					
					if(adusername=="admin" && adpass=="123")
					{
						ok:
						up:
						u:
						h:
						i:
						i1:	
						system("CLS");
						
						logo();
						
						cout<<"\n\t\t\t\t\t\t\t\t Admin Mode\n\n\n\n";
						cout<<"\n\t1 ---->  Create a Receptionist Account";
						cout<<"\t\t2 ---->  Check Complains";
						cout<<"\t3 ---->  Survelliance Cameras\n";
						cout<<"\t4 ---->  Back\n\n";
						
						string input;
						cout<<"\n\n\t\tSelect:     ";
						cin>>input;
						if(input=="1")
						{
						
							system("CLS");
							logo();
							cout<<"\n\t\t\t\t\t\t\tCreate an Receptionist Account\n\n";
							cout<<"\t\t\t+ ---->  Back\n\n\n\n";
							
							// Here Receptionist account create filing
							string user,pass;
							cout<<"\t\t\t\t\t\tEnter the Information below to make a new account\n\n\n\n\n";
							cout<<"\t\t\t\tEnter Username:     ";
							cin>>user;
							
							if(user=="+")
							{
								goto i;
							}
							
							cout<<"\n\t\t\t\tEnter Password:     ";
							cin>>pass;
							
							if(pass=="+")
							{
								goto i1;
							}
							
							ofstream acc;
							acc.open("NewAccount.txt");///////Append Function to not delete previous Info
							acc<<user<<endl<<pass<<endl;//<<"===================="<<endl;
							acc.close();
							
							h1:
							system("CLS");
							logo();
							
							
							cout<<"\n\n\n\t\t\t\t\t\t\tAccount Created Successful";
							
							
							
							
							string input1;
							cout<<"\n\n\n\n\t\t1 ---->  Back:    ";
							cin>>input1;
							
							if(input1=="1")
							{
								goto h;
							}
								else
								{
									goto h1;
								}
							
							
							check=true;
							break;
							
						}
						
						else if(input=="2")
						{
							ok1:
							complain_check();	// filin function call
						
							string z;
							cout<<"\n 1 --->  Back   ";
							cin>>z;
							if(z=="1")
							{
								goto ok;
							}
						
							else
							{
								goto ok1;
							}
							
						check=true;
						break;
						
						}
						
						else if(input=="3")
						{
							
							
							system("CLS");
							logo();				// function call
							cameras();			//function call
						
							//v:
							//	cameras();
							v:
							string in;
							cout<<"\n\n\n\t1 ---->  Back:    ";
							cin>>in;
							if(in=="1")
							{
							
								system("CLS");
								logo();
								goto u;
							}
							
							else
							{
								goto v; 
							}
						
							//	else
							//	{
							//		system("CLS");
							//		logo();
							//		goto v;
							//	}
						
						
						check=true;
						break;
						
						}
						
						
						else if(input=="4")
						{
							system("CLS");
							logo();				// funtion call
							program();			// function call
						
							check=true;
							break;
						}
						
						else
						{						
							cout<<"\n\n\t\t\t\tInvalid Input";	
							Sleep(2000);
							goto up;
							check=true;
							break;
						}
						
						
	
					}
					
					else
					{					
						cout<<"\n\n\t\t\t\tInvalid Input";	
						Sleep(2000);
						goto again3;
						check=true;
						break;
						
					}
					
}
	///////////////////////////////////////////////////////////////////////////////////
						// Exit				
					
					
				//	case 'e':
				else if(modes=='e' || modes=='E')
				{
					cout<<"\n\n\n\t\t\tProgram is exitting.... Bye Bye\n\n\n";
					
					check=true;
					break;
							
				}
				//default:
				else
				{
					cout<<"\n\t\t\tInvalid input try Again!";
					Sleep(1000);
					system("cls");
					logo();
					goto go;
					check=false;
					break;
							
				}
						
								

			
			
	}
	while(check==false);
}





/////////////////////////////////////////////////////////////////////////////////////////////////////////


			//Main Body
			
			
	
int main()
{	
	system("COLOR F0");		// Console Screen and font color
	
	loading();				//Loading function call
	
	system("CLS");
		
	logo();					//logo function call	
					
	program();				//Main program call
	
					
/////////////////////////////////////////////////////////////////////////////////////////

												
	cout<<endl;
	system("PAUSE");
	return 0;
}
