////////////////////////////////Hospital Management System/////////////////////////////////////////
 #include<iostream>
 #include<conio.h>
 #include<fstream>
 #include<iomanip>
 #include<cstring> 
 #include<windows.h>
 #include<string> 
 #include<unistd.h>
 
 ///////////////////////Function Declaration///////////////////////////////////

 void menu();
 void pascode();
 void cpascode();
 
 using namespace std;
 
 ///////////////////////////Class One//////////////////////////////////////////////
 
 class one
 {
 	public:
 		virtual void get()=0;
 		virtual void show()=0;
 		
 };
 
 //////////////////////////////////class information///////////////////
 
 class info:public one
 {
 	public:
 		char name[50],time[50];
 		int num,age;
 		void get()
 		{
 			 
            
 			system("cls");
 			cin.sync();
 			cout<<"\n Enter the patient name::";
 			cin.getline(name,50);
 			
 			cout<<"\n Enter the Appointment Time::";
 			cin.getline(time,50);
 			
 			cout<<"\n Enter the Age::";
 			cin>>age;
 			
 			cout<<"\n Enter the Appointment No::";
 			cin>>num;
 			
		 }
		 void show()
		 {
		 	cout<<"\nName::"<<name;
		 	cout<<"\n Age::"<<age;
		 	cout<<"\nNo::"<<num;
		 	cout<<"\nTime::"<<time;
		 	
		 }
		 
 		
 };
 
 //////////////////////////////////////class rana/////////////////////////////////////
 
 class rana:public info
 {
 	public:
 		info a1;
 		void get()
 		{
 			system("cls");
 			ofstream out("Rana.txt",ios::app|ios::binary);
 			a1.get();
 			out.write((char*)&a1,sizeof(info));
 			out.close();
 			cout<<"\nYour Entry Has been Saved...";
 			getch();
 			menu();
 		}
 		void show()
 		{
 			ifstream in("rana.txt");
 			if(in==NULL)
 			{
 				cout<<"\n\n No Data In the file";
 				cout<<"\n\n\t\t Press any key to continue:";
 				getch();
 				menu();
			 }
			 else
			 {
			 	while(!in.eof())
			 	{
			 		in.read((char*)&a1,sizeof(a1));
			 		a1.show();
			 	}
				in.close();
				cout<<"Press Enter To Continue...";
				getch();
				menu();
			 }
 			
		}
		 
 };
 
 //////////////////////////////////////////class dr Patil///////////////////////////////////////////////////////////
 
 class Patil:public info
 {
 	public:
 		info a1;
 		void get()
 		{
 			system("cls");
 			ofstream out("Patil.txt",ios::app|ios::binary);
 			a1.get();
 			out.write((char*)&a1,sizeof(info));
 			out.close();
 			cout<<"\nYour Entry Has been Saved...";
 			getch();
 			menu();
 		}
 		void show()
 		{
 			ifstream in("Patil.txt");
 			if(in==NULL)
 			{
 				cout<<"\n\n No Data In the file";
 				cout<<"\n\n\t\t Press any key to continue:";
 				getch();
 				menu();
			 }
			 else
			 {
			 	while(!in.eof())
			 	{
			 		in.read((char*)&a1,sizeof(a1));
			 		a1.show();
			 	}
				in.close();
				cout<<"Press Enter To continue...";
				getch();
				menu();
			 }
 			
		}
		
 };
 
 ////////////////////////////////////////////////////class Dr.Sharma/////////////////////////////////////////////////////////////
 
 class Sharma:public info
 {
 	
 	public:
 		info a1;
 		void get()
 		{
 			system("cls");
 			ofstream out("Sharma.txt",ios::app|ios::binary);
 			a1.get();
 			out.write((char*)&a1,sizeof(info));
 			out.close();
 			cout<<"\nYour Entry Has been Saved...";
 			getch();
 			menu();
 		}
 		void show()
 		{
 			ifstream in("Sharma.txt");
 			if(in==NULL)
 			{
 				cout<<"\n\n No Data In the file";
 				cout<<"\n\n\t\t Press any key to continue:";
 				getch();
 				menu();
			 }
			 else
			 {
			 	while(!in.eof())
			 	{
			 		in.read((char*)&a1,sizeof(a1));
			 		a1.show();
			 	}
				in.close();
//				cout<<"Press Enter To continue...";
//				getch();
//				menu();
			 }
 			
		}
		 
 };
 
 ///////////////////////////////////////class staff///////////////////////////////////////
 class staff:public one
 {
 	public:
 		char all[999];
 		char name[50],age[20],sal[30],pos[20],SR[50];
 	
 		void get()
 		{
 			ofstream out("staff.txt",ios::app);
 			{
 				system("cls");
 				cin.sync();
 				
 				cout<<"\nEnter SR.NO::";
 				cin.getline(SR,50);
 				
 				cout<<"\nEnter Name::";
 				cin.getline(name,50);
 				
 				cout<<"\nEnter Age::";
 				cin.getline(age,20);
 				
 				cout<<"\nEnter Salary::";
 				cin.getline(sal,30);
 				
 				cout<<"\nEnter Working Position::";
 				cin.getline(pos,20);
 			}
 				
			 out<<"\nSR.NO::"<<SR<<"\n------";
			 out<<"\nName::"<<name<<"\nAge::"<<age<<"\nSalary::"<<sal<<"\nWorking Position::"<<pos;
			 out<<"\n";
			 
			 out.close();
			 cout<<"\nYour Information has been saved:\n\t\tPress any key to continue";
			 getch();
			 menu();
			 
		 }
		 void show()
		 {
		 	ifstream in("staff.txt");
		 	if(!in)
		 	{
		 		cout<<"File open Error";
		 		
			 }
			 while(!(in.eof()))
			 {
			 	cout<<"\n";
			 	
			 	in.getline(all,999);
			 	cout<<all<<endl;
			 	
			 }
			 cout<<"\n";
			 cout<<"\n--------------------------------\n";
			 in.close();
			 cout<<"\n\n\t\tPress Any Key to Continue";
			 getch();
			 menu();
		 }
 };
 ///////////////////////////////////////////class Information////////////////////////
 
 class Information
 {
 	public:
 		void dr_info()
 		{
 			system("cls");
 			system("color F3");
            cout<<"\n==============================================================================\n";
            cout<<"\n\n\t\t(Three Doctor Available)\n\n\t\t[Information and Timing Are Given Below]\n";
            cout<<"------------------------------------------------------\n";
            cout<<"\t\tDr Available::\n";
			cout<<"\t\tDr.Rana (skin specialist)\n\n";
			cout<<"\t\t\t[[Timing]]:\n\n";
			cout<<"\tMonday To Friday\t\t9AM To 5PM\n";
			cout<<"\t Saturday        \t\t9AM To 1PM\n";
			cout<<"\tSunday            \t\t Off\n";
			cout<<"\n----------------------------------------------------\n";
			cout<<"\t\tDr.Patil (Child specialist)\n\n";
			cout<<"\t\t\t[[Timing]]:\n\n";
			cout<<"\tMonday To Friday\t\t2PM To 10PM\n";
			cout<<"\t Saturday        \t\t8AM To 1PM\n";
			cout<<"\tSunday            \t\t12PM To 9PM \n";
			cout<<"\n----------------------------------------------------\n";
			cout<<"\t\tDr.Sharma (DVM)\n\n";
			cout<<"\t\t\t[[Timing]]:\n\n";
			cout<<"\tMonday To Friday\t\t8AM To 5PM\n";
			cout<<"\t Saturday        \t\t10AM To 1PM\n";
			cout<<"\tSunday            \t\tOff\n";
			cout<<"\n----------------------------------------------------\n";
			cout<<"\nPress Any Key For Continue...";
			getch();
			menu();
	    }
};
/////////////////////////////////////////////////////////void call doctor//////////////////////////////
void call_dr()
{
	system("cls");
	int choice;
	cout<<"\n\n\n\t\tPress 1 for Dr.Rana   \n\n\t\tPress 2 for Dr.Patil   \n\n\t\tPress 3 for Dr.Sharma";
	cin>>choice;
	
	one *ptr;
	rana s3;
	Patil s4;
	Sharma s5;
	if(choice==1)
	{
		ptr=&s3; 
//		info p1[100];
//		info*ptr=new info;
//            int n;
//            cout << "\n Enter the No. of Patient records do you want to take\t: ";
//            cin >> n;
//		
//		
//      for(int i=0;i<n;i++)
//    {
//  	ptr->get();
//  	std::cout<<"\n";
//	}
		ptr->get();
	}
	
	if(choice==2)
	{
		ptr=&s4;
		
//		info p2[100];
//		info*ptr=new info;
//            int n;
//            cout << "\n Enter the No. of Patient records do you want to take\t: ";
//            cin >> n;
//		
//		
//      for(int i=0;i<n;i++)
//    {
//  	ptr->get();
//  	std::cout<<"\n";
//	}
		ptr->get();
		
	}
	
	if(choice==3)
	{
		ptr=&s5;
//		info p3[100];
//		info*ptr=new info;
//            int n;
//            cout << "\n Enter the No. of Patient records do you want to take\t: ";
//            cin >> n;
//		
//		
//      for(int i=0;i<n;i++)
//    {
//  	ptr->get();
//  	std::cout<<"\n";
//	}
		ptr->get();
		
	}
    else
	{
		cout<<"Sorry invalid choice...";
    }
		
}

//////////////////////////////show_call_dr//////////////////////////////////////////
	    
void Show_call_dr()
{
	system("cls");
	int choice;
	cout<<"Please Enter Your Choice:";
	cin>>choice;
	one *ptr;
	rana s3;
	Patil s4;
	Sharma s5;
	if(choice==1)
	{
//		int n;
//		info*ptr=new info;
		ptr=&s3;
//		for(int i=0;i<n;i++)
//	{
//		 ptr->show();
//		std::cout<<"\n\n";
//	}
		ptr->show();
	}
	
	if(choice==2)
	{
		ptr=&s4;
		ptr->show();
	}
	
	if(choice==3)
	{
		ptr=&s5;
		ptr->show();
	}
    else
	{
		cout<<"Sorry invalid choice...";
		getch();
//		menu();
    }
	menu();
	
} 
//////////////////////////////////////////////////////////menu//////////////////////////////////////////
void menu()
{
	system("cls");
	system("color FC");
	
	cout<<"\n";
	cout<<"\n";
	
	cout<<"\t\t   |    +++++++++++++MAIN MENU+++++++++++++    |  \n";
	cout<<"\t\t   |         Hospital Management System        |\n";
	cout<<"\t\t   |   ====================================    |  \n";
	
	cout<<"\n----------------------------------------------------------------------------------------\n";
	cout<<"\t\t       Please Select Any Option                \n";
	
	cout<<"\n\n\t1-\t\tPress1 For Available Doctor Information\n\n";
	cout<<"\t2-\t\tPress 2 for Doctor Appointment\n\n";
	cout<<"\t3-\t\tPress 3 for Saving Staff information\n\n";
	cout<<"\t4-\t\tPress 4 for Checking Patient Appointment Menu\n\n";
	cout<<"\t5-\t\tPress 5 for Checking Staff Information Menu\n\n";
	cout<<"\t6-\t\tPress 6 for Change Password or Create Password  :\n\n";
	cout<<"\t7-\t\t[     Press 7 for Logout     ]\n\n";
	
	cout<<"\n==================================================================\n";
	cout<<"\n\n\t\tPlease Enter Your Choice::";
	
	Information a1;
	one *ptr;
	staff a2;
	info a3;
    
	int a;
	cin>>a;
	if(a==1)
	{
		a1.dr_info();
	}
	
	else if(a==2)
	{
		call_dr();
	}
	
	else if(a==3)
	{
		cout<<"\n";
        ptr=&a2;
        ptr->get();
	}
	
	else if(a==4)
	{
//		pinfoshow();
        ptr=&a3;
        ptr->show();
    }
	
	else if(a==5)
	{
		cout<<"\n";
		ptr=&a2;
		ptr->show();
		cout<<"\n--------------------------------\n";
	}
	
	else if(a==6)
	{
		cpascode();

	}
	
	else if(a==7)
	{
		
		
		pascode();
	}
	
	else
	{
		cout<<"Sorry invalid choice...";
	}
}



   
   		
			void pascode()
			{
				system("cls");
				char p1[50],p2[50],p3[50];
				
				system("color Fc");
				 
				 fstream line;
//				ifstream in("Password.txt");
				line.open("Password.txt");
				{
					cin.sync();
					cout<<"\n\n\n\n\n\n\n\n\t\t\tEnter the Password:: ";
					cin.getline(p1,50); 
					cin.getline(p2,50);
//					cin.getline(p3,50);
					if(strcmp(p2,p1)==0)
					{
						menu();
						
					}
					else
					{
						cout<<"\n\n\t\t\tIncorrect Passcode Please Try Again\n";
						sleep(1000);
						pascode();
					}
				}
//				in.close();
			}
			
			void cpascode()
			{
				char n[50];
				system("cls");
				ofstream out("Password.txt");
				{
					cin.sync();
					cout<<"\n\n\n\n\t\t\tEnter The New password";
					cin.getline(n,50);
					out<<n;
				}
				out.close();
				cout<<"\nYour Password has been Saved.";
				getch();
				menu();
			}

			int main()
			{
				
				 menu();
//				pascode();
//				
				system("pause");
				
			}
			


//class student s[100], s2;
//      int i,n,ch;
//      cout << "\n Enter the No. of Student records do you want to read\t: ";
//      cin >> n;
////read_data
//      for(i=0;i<n;i++)
//    {
//  	s[i].read_data();
//  	std::cout<<"\n";
//	}
//
////display_data
//    std::cout<<"\tunsorted data\n\n";
//    std::cout<<"Roll No.\t\t\tName\t\t\tSGPA\n\n";
//
//     	for(i=0;i<n;i++)
//	{
//		s[i].display_data();
//		std::cout<<"\n\n";
//	}
//
