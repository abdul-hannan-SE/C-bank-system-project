
#include <iostream>
#include<cstring>
#include<sstream>
#include<limits>
#include<stdlib.h>
Using namespace std;
Class Person{
	Protected:
		String name,mobile,cnic;
	Public:
	Person()	// Default Constructer
	{
		}	
	Person(string name,string mobile,string cnic)// Parametrized constructer
	{
		This->name=name;
		This->mobile=mobile;
		This->cnic=cnic;
		}
	Void setName(string name)
	{
		This->name=name;
		}
	Void setMobile(string mobile)
	{
		This->mobile=mobile;
		}
	Void setCnic(string cnic)
	{
		This->cnic=cnic;
		}
	String getName()
	{
		Return name;
		}
	String getMobile()
	{
		Return mobile;
		}
	String getCnic()
	{
		Return cnic;
		}
	String toString()
	{
		String str;
		Str=”Name : “+getName()+”\nMobile : “+getMobile()+”\nCnic : “+getCnic()+”\n”;
		Return str;
		}							
};
Class Shedule{
	String id,time;
	 Int h;
	Public:
	Shedule()
	{
		H=0;
		}	
	Template<class Tikets>
		Tikets getTickets(Tikets ticket)
		{
			Return ticket;
		}
		////////////////////////////////////////////
	Void setShedule(string id,string time)
	{
		This->id=id;
		This->time=time;
			}
//		///////////////////////////////////////////////
//		//////// SetShedule ///////////////////////////	
	String getId()
	{
		Return id;
		}
	String getTime()
	{
	Return time;	
		}
	Void display()
	{
	++h;
	Cout<<”Code : “<<id<<”-“<<h<<endl;
	Cout<<”Time : “<<time<<endl<<endl;
		}
	Void display_for_User(int timee)
	{
	H=timee;
	Cout<<”Code : “<<id<<”-“<<h<<endl;
	Cout<<”Time : “<<time<<endl<<endl;
		}	
	Template<class Tikets>	
	Void addTicket(Tikets t)
	{	
	t.display();
		}
String toString()
{
	String str;
	Str=”Code : “+id+”\nTime : “+time+”\n”;
	Return str;
	}							
};

/////////////////////////////////////////////////////////////////
////////////////// Ticket Class /////////////////////////////////
Class Ticket{
	Private:
		Int ticket_id;
		String date;
		String ticket_type;
		Double price;
		Shedule shedule;
	Public:
		Ticket()
		{
		}
	Ticket(int ticket_id,string date,string ticket_type,double price)
	{
		This->ticket_id=ticket_id;
		This->price=price;
		This->ticket_type=ticket_type;
		This->date=date;
		}
		
	Void setId(int ticket_id)
	{
			This->ticket_id=ticket_id;
		}
	
	Void setDate(string date)
	{
			This->date=date;
	}
	Void setType(string ticket_type)
	{
		This->ticket_type=ticket_type;
		}
	
	Void setprice(double price)
	{
			This->price=price;
		}
	Int getId()
	{
		Return ticket_id;
	}
	String getdate()
	{
		Return date;
	}
	String getType()
	{
		Return ticket_type;
	}
	Double getprice()
	{
		Return price;
	}
	Void setShedule(Shedule s)
	{
	  This->shedule=s;	
	}
	Void display(Shedule s)
	{	
		Cout<<”Id of ticket : “<<ticket_id<<endl;
		Cout<<”Issued date : “<<date<<endl;
		Cout<<”Type of ticket : “<<ticket_type<<endl;
	//	s.display();
		Cout<<”Price : “<<price<<endl;
	}
	Void display()
	{	
		Cout<<”Id of ticket : “<<ticket_id<<endl;
		Cout<<”Issued date : “<<date<<endl;
		Cout<<”Type of ticket : “<<ticket_type<<endl;
		Cout<<”Price : “<<price<<endl;
	}											
};
/////////////////////////////////////////////////////////////////////
/////////////////// Train Class ///////////////////////////////////////
Class Train{
	Private:
		String name;
		Int train_no;
		String destination;
		Shedule timing[100];
		 Int I,j;
		 Int get_time;		
	Public:
//	Shedule t;
	Train()
	{
		I=0;
		J=0;
	
		}
	Void setTrain(string name,int train_no,string destination)
	{
	 This->name=name;
	 This->train_no=train_no;
	 This->destination=destination;
			}
			Void setname(string name)
			{
				This->name=name;
			}
			Void setno(int no)
			{
				This->train_no=no;
			}
			Void setdestinaion(string de)
			{
			  Destination=de;	
			}
	String getName()
	{
		Return name;
	}
	String getDestination()
	{
		Return destination;
	}
	Int getId()
	{
		Return train_no;
		}
	Void addShedule(string time)
	{
	Timing[i].setShedule(name,time);
	I++;
	}
	Shedule *getTiming()
	{
		Return timing;
		}
	Void display()
	{
	Cout<<”Name : “<<name<<endl;
	Cout<<”Trian No : “<<train_no<<endl;
	Cout<<”Destination : “<<destination<<endl;	
		}
	Void displayTimings()
	{ 
	Cout<<”\nTiming of :”<<name<<”-“<<j+1<<endl;
	For(int k=0;k<3;k++)
	Timing[k].display();
		
		}		
	String toString()
	{
	String s;
	Stringstream ss;
	Ss<<train_no;
	S=ss.str();
	String combine;
	Combine=”Name : “+name+”\nTrain No : “+s+”\nDestination : “+destination;
	Return combine;	
	}									
};
/////////////////////////////////////////////////////////////////////////////
/////////////////////// Class User /////////////////////////////////////////
//// Inheritence with Person class ///////////////////
////////// Association witj Ticket class ////////////
Class User:public Person{
	Private:
	Ticket tickets[10];
	Train tt[20];
	Int times[100];
	Int I;
	Int j;
	Int get_time;
	Double total_cost;
	Int price_of_one_ticket;
	Int number_of_tickets;
	Public:
		User(){
			 I=0;
			 J=0;
		}
		User(string name,string mobile,string cnic)
		{
		This->name=name;
		This->mobile=mobile;
		This->cnic=cnic;
		}
	Void buyTickets(Train t,int time,int num)
	{
		
		Get_time=time;
		Ticket t1[12];
		Number_of_tickets=num;
		Price_of_one_ticket=200;
		For(int h=0;h<num;h++)
		{
		//Ticket Type or Info of Ticket can be User defined
		T1[i]=Ticket(rand(),”02-Aug-2021”,”1st Class”,200);
		Tickets[i]=t1[i];
		Times[i]=time-1;
		++I;
	} 
		}
	Void displayTickets(Train t)
	{
		Shedule*p;
		Cout<<toString()<<endl;
		P=t.getTiming();
		For(int k=0;k<I;k++)
		{
		Tickets[k].display();	
		P[times[k]].display_for_User(get_time);
		Cout<<”_____________________________________”<<endl;
		Cout<<”_____________________________________”<<endl;
	}
	Cout<<”\nTotal cost = “<<number_of_tickets*price_of_one_ticket<<”$”<<endl;
	Cout<<”_________________________________________”<<endl;
	Cout<<”_________________________________________”<<endl;
	}
			
};
Int main(int argc, char** argv) {
////	Person p(“Abdul Hannan”,”03144702520”,”34601-2445193-7”);
////	string str=p.toString();
////	cout<<str;
//   // Shedule s;
////	s.setShedule(“426626”,”12:30”);
//	//s.display();
////	//str=s.toString();
////	//cout<<str;
////	Ticket t(4266,”7/17/2021”,”A-Class”,422);
////	s.setShedule(“426626”,”12:30”);
//////	s.addTicket(t,s);
////Train tt;
////tt.setTrain(“Iqbal”,4566,”Lahore to islamabad”);
////tt.addShedule(“8pm”);
////tt.displayTimings();
//cout<<”These following trains are operational\n1 :Allama Iqbal Express\n2: Karachi Express\n3: Shalima Express”<<endl;
Train t1;
Train t2;
Train t3;
T1.setTrain(“Allama Iqbal Express”,86,”Rawalpindi To Karachi”);
T2.setTrain(“Karachi Express”,87,”Karachi To Lahore”);
T3.setTrain(“Shalima Express”,90,”Lahore To Rawalpindi”);
T1.addShedule(“8:00 am”);
T1.addShedule(“1:00 pm”);
T1.addShedule(“9:00 pm”);
T2.addShedule(“10:00 am”);
T2.addShedule(“3:00 pm”);
T2.addShedule(“7:00 pm”);
T3.addShedule(“8:00 am”);
T3.addShedule(“12:00 pm”);
T3.addShedule(“8:00 pm”);
User u1(“Ali”,”03466623522”,”34601-2445891-9”);
User u2(“Abdullah”,”03465523522”,”34601-2193891-7”);
User u3(“Usman”,”03207823522”,”34011-9847891-6”);
User u4(“Ahmad”,”034466623522”,”34601-2445891-9”);
User u5(“Imtiyaz Ali”,”03205523522”,”34601-2193891-7”);
User u6(“Usama Mughal”,”03007823522”,”34011-9847891-6”);
U1.buyTickets(t1,2,2);
U2.buyTickets(t3,2,1);
U3.buyTickets(t1,3,3);
U4.buyTickets(t3,3,2);
U5.buyTickets(t2,2,3);
U6.buyTickets(t2,3,5);
Int c=0;
Start:
Do{
	Cout<<endl<<”*******************************************”<<endl;
	Cout<<”\n1. Check details of Allama Iqbal Express”<<endl;
	Cout<<”2. Check details of Karachi Express”<<endl;
	Cout<<”3. Check details of Shalimar Express”<<endl;
	Cout<<”******************************************”<<endl;
	Cout<<”4. Check details of user1 “<<endl;
	Cout<<”5. Check details of user2 “<<endl;
	Cout<<”6. Check details of user3 “<<endl;
	Cout<<”7. Check details of user4 “<<endl;
	Cout<<”8. Check details of user5 “<<endl;
	Cout<<”9. Check details of user6 “<<endl;
	Cout<<”******************************************”<<endl;
	Cout<<”10. Display All\n”;
	Cout<<”******************************************”<<endl;
	Try{
		Cout<<”Your choice<1-10> : “;
		Cin>>c;
		If(cin.fail())
		Throw 1;
		}catch(int)
	{
		Cout<<”\nError : Exception occurred in choice…..\n”;
		Cin.clear();
		Cin.ignore(numeric_limits<streamsize>::max(),’\n’);
		Goto start;
	}
	Switch©
	{
	Case 1:
		T1.display();
		T1.displayTimings();
		Break;
	Case 2:
		T2.display();
		T2.displayTimings();
		Break;
	Case 3:
		T3.display();
		T3.displayTimings();
		Break;
	Case 4:
		Cout<<”Ticket of : “<<u1.getName()<<endl;
		U1.displayTickets(t1);
		Break;
	Case 5:
		Cout<<”Ticket of : “<<u2.getName()<<endl;
		U2.displayTickets(t3);
		Break;
	Case 6:
		Cout<<”Ticket of : “<<u3.getName()<<endl;
		U3.displayTickets(t1);
		Break;
	Case 7:
		Cout<<”Ticket of : “<<u4.getName()<<endl;
		U4.displayTickets(t3);
		Break;	
	Case 8:
		Cout<<”Ticket of : “<<u5.getName()<<endl;
		U5.displayTickets(t2);
		Break;				
	Case 9:
		Cout<<”Ticket of : “<<u6.getName()<<endl;
		U6.displayTickets(t2);
		Break;				
	Case 10:
		Cout<<”*****************************”<<endl;
		Cout<<”\nAll Details are \n”;
		Cout<<”*****************************”<<endl;
		Cout<<”Train No 1”<<endl;
		Cout<<”*****************************”<<endl;
		T1.display();
		T1.displayTimings();
		Cout<<”*****************************”<<endl;
		Cout<<”*****************************”<<endl;
		Cout<<”Train No 2”<<endl;
		Cout<<”*****************************”<<endl;
		T2.display();
		T2.displayTimings();
		Cout<<”*****************************”<<endl;
		Cout<<”*****************************”<<endl;
		Cout<<”Train No 3”<<endl;
		Cout<<”*****************************”<<endl;
		T3.display();
		T3.displayTimings();
		Cout<<”*****************************”<<endl;
		Cout<<”*****************************”<<endl;
		Cout<<”Ticket of : “<<u1.getName()<<endl;
		U1.displayTickets(t1);
		Cout<<”Ticket of : “<<u2.getName()<<endl;
		U2.displayTickets(t3);
		Cout<<”Ticket of : “<<u3.getName()<<endl;
		U3.displayTickets(t1);
		Cout<<”Ticket of : “<<u4.getName()<<endl;
		U4.displayTickets(t3);
		Cout<<”Ticket of : “<<u5.getName()<<endl;
		U5.displayTickets(t2);
		Cout<<”Ticket of : “<<u6.getName()<<endl;
		U6.displayTickets(t2);
		Break;
		Case 0:
		Cout<<”We are exiting”;
		Break;
		Default:
			Cout<<”Wrong choice try again”;
			Goto start;
	}
}while(c!=0);

return 0;
}
