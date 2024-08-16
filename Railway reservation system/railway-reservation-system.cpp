#include <cstdlib>
#include <iostream>
#include<iomanip>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class products
{  protected:
  int price;
  string name;
  string brand;
  int quantity;
  int total;
  int gtotal;
public:
  	virtual void get(){
	  }
	virtual void display(){
	}
};
class menu{
	public:
		menu(){
			cout<<"===================WELCOME TO ELECTRONIC STORE================="<<endl;
			cout<<"\t\t\tMENU"<<endl;
			cout<<"Product name\t Brand\t\tPrice"<<endl;
			cout<<"LAPTOP \t\t SAMSUNG\t$30000"<<endl;
			cout<<"MOBILE \t\t APPLE\t\t$10000"<<endl;
			cout<<"TV \t\t SONY\t\t$8000"<<endl;
			cout<<"SMART WATCH \t APPLE\t\t$25000"<<endl;
			cout<<"PC \t\t DELL\t\t$20000"<<endl;
			cout<<"=============================================================="<<endl;
		}
};
class laptop:public products{
	protected:
		char choicel;
	public:
		laptop(){price=30000;name="Laptop";quantity=0;brand="Samsung";
			cout<<"\n********************************************************\n";
			cout<<"\nDo you want to buy Laptop :(y/n)";
			cin>>choicel;
			if (choicel=='y')
			{   cout<<"\nPrice of 1 Laptop:"<<price<<endl;
				cout<<"\nEnter quantity: ";
				cin>>quantity;
				total=quantity*price;
				
			}
			 
			 	
		}
		void display(){
			cout<<name<<"\t\t"<<brand<<"\t\t"<<price<<"\t\t"<<quantity<<"\t\t"<<total<<endl;
		}
};
class mobile: public products{	
      protected:
		char choicem;
	public:
		mobile(){price=10000;name="Mobile";quantity=0;brand="Apple";
			cout<<"\n********************************************************\n";
			cout<<"\nDo you want to buy Mobile :(y/n)";
			cin>>choicem;
			if (choicem=='y')
			{   cout<<"\nPrice of 1 Mobile:"<<price<<endl;
				cout<<"\nEnter quantity: ";
				cin>>quantity;
				total=quantity*price;
				
			}
			 
			 	
		}
		void display(){
			cout<<name<<"\t\t"<<brand<<"\t\t"<<price<<"\t\t"<<quantity<<"\t\t"<<total<<endl;
		}

	
};
class tv: public products{	
    protected:
		char choicet;
	public:
		tv(){price=8000;name="tv";quantity=0;brand="Sony";
			cout<<"\n********************************************************\n";
			cout<<"\nDo you want to buy TV :(y/n)";
			cin>>choicet;
			if (choicet=='y')
			{   cout<<"\nPrice of 1 TV:"<<price<<endl;
				cout<<"\nEnter quantity: ";
				cin>>quantity;
				total=quantity*price;
				
			}
			 
			 	
		}
		void display(){
			cout<<name<<"\t\t"<<brand<<"\t\t"<<price<<"\t\t"<<quantity<<"\t\t"<<total<<endl;
		}

	
};

class watch: public products{	
    protected:
		char choicew;
	public:
		watch(){price=25000;name="Smart Watch";quantity=0;brand="Apple";
			cout<<"\n********************************************************\n";
			cout<<"\nDo you want to buy Watch :(y/n)";
			cin>>choicew;
			if (choicew=='y')
			{   cout<<"\nPrice of 1 Smart Watch:"<<price<<endl;
				cout<<"\nEnter quantity: ";
				cin>>quantity;
				total=quantity*price;
				
			}
			 
			 	
		}
		void display(){
			cout<<name<<"\t"<<brand<<"\t\t"<<price<<"\t\t"<<quantity<<"\t\t"<<total<<endl;
		}

	
};

class pc: public products{	
    protected:
		char choicep;
	public:
		pc(){price=20000;name="PC";quantity=0;brand="Dell";
			cout<<"\n********************************************************\n";
			cout<<"\nDo you want to buy PC :(y/n)";
			cin>>choicep;
			if (choicep=='y')
			{   cout<<"\nPrice of 1 PC:"<<price<<endl;
				cout<<"\nEnter quantity: ";
				cin>>quantity;
				total=quantity*price;
				
			}
			 
			 	
		}
		void display(){
			cout<<name<<"\t\t"<<brand<<"\t\t"<<price<<"\t\t"<<quantity<<"\t\t"<<total<<endl;
		}

	
};
class bill:public menu,public laptop,public mobile,public tv,public watch,public pc{
	public:
	void display(){
		cout<<"-------------------------------------------------------------------"<<endl;
		if (choicel=='y'&&choicem=='n'&&choicet=='n'&&choicew=='n'&&choicep=='n'){
		cout<<"Product name\tBrand     \tprice\t\tquantity\ttotal"<<endl;
	    laptop::display();
		int btotal=laptop::total;
		cout<<"                                          \t\tgtotal = "<<btotal<<endl;}
	    else if (choicel=='y'&&choicem=='y'&&choicet=='n'&&choicew=='n'&&choicep=='n'){
		cout<<"Product name\tBrand     \tprice\t\tquantity\ttotal"<<endl;
	    laptop::display();
		mobile::display();
		int btotal=laptop::total+mobile::total;
		cout<<"                                          \t\tgtotal = "<<btotal<<endl;}
	    
		else if (choicel=='y'&&choicem=='y'&&choicet=='y'&&choicew=='n'&&choicep=='n'){
		cout<<"Product name\tBrand     \tprice\t\tquantity\ttotal"<<endl;
	    laptop::display();
		mobile::display();
		tv::display();
		int btotal=laptop::total+mobile::total+tv::total;
		cout<<"                                          \t\tgtotal = "<<btotal<<endl;}
		else if (choicel=='y'&&choicem=='y'&&choicet=='y'&&choicew=='y'&&choicep=='n'){
		cout<<"Product name\tBrand     \tprice\t\tquantity\ttotal"<<endl;
	    laptop::display();
		mobile::display();
		tv::display();
		watch::display();
		int btotal=laptop::total+mobile::total+tv::total+watch::total;
		cout<<"                                          \t\tgtotal = "<<btotal<<endl;}
	
	else if (choicel=='y'&&choicem=='y'&&choicet=='y'&&choicew=='y'&&choicep=='y'){
		cout<<"Product name\tBrand     \tprice\t\tquantity\ttotal"<<endl;
	    laptop::display();
		mobile::display();
		tv::display();
		watch::display();
		pc::display();
		int btotal=laptop::total+mobile::total+tv::total+watch::total+pc::total;
		cout<<"                                          \t\tgtotal = "<<btotal<<endl;}
    else if (choicel=='n'&&choicem=='y'&&choicet=='y'&&choicew=='y'&&choicep=='y'){
		cout<<"Product name\tBrand     \tprice\t\tquantity\ttotal"<<endl;
		mobile::display();
		tv::display();
		watch::display();
		pc::display();
			int btotal=mobile::total+tv::total+watch::total+pc::total;
		cout<<"                                          \t\tgtotal = "<<btotal<<endl;}
	else if (choicel=='n'&&choicem=='n'&&choicet=='y'&&choicew=='y'&&choicep=='y'){
		cout<<"Product name\tBrand     \tprice\t\tquantity\ttotal"<<endl;
	    
		tv::display();
		watch::display();
		pc::display();
			int btotal=tv::total+watch::total+pc::total;
		cout<<"                                          \t\tgtotal = "<<btotal<<endl;}
	else if (choicel=='n'&&choicem=='n'&&choicet=='n'&&choicew=='y'&&choicep=='y'){
		cout<<"Product name\tBrand     \tprice\t\tquantity\ttotal"<<endl;
	   
		watch::display();
		pc::display();
			int btotal=watch::total+pc::total;
		cout<<"                                          \t\tgtotal = "<<btotal<<endl;}
	else if (choicel=='n'&&choicem=='n'&&choicet=='n'&&choicew=='n'&&choicep=='y'){
		cout<<"Product name\tBrand     \tprice\t\tquantity\ttotal"<<endl;
	    
		pc::display();
			int btotal=pc::total;
		cout<<"                                          \t\tgtotal = "<<btotal<<endl;}
	else if (choicel=='y'&&choicem=='n'&&choicet=='y'&&choicew=='y'&&choicep=='y'){
		cout<<"Product name\tBrand     \tprice\t\tquantity\ttotal"<<endl;
	    laptop::display();
		tv::display();
		watch::display();
		pc::display();
			int btotal=laptop::total+tv::total+watch::total+pc::total;
		cout<<"                                          \t\tgtotal = "<<btotal<<endl;}
	else if (choicel=='y'&&choicem=='y'&&choicet=='n'&&choicew=='y'&&choicep=='y'){
		cout<<"Product name\tBrand     \tprice\t\tquantity\ttotal"<<endl;
	    laptop::display();
		mobile::display();
		watch::display();
		pc::display();
			int btotal=laptop::total+mobile::total+watch::total+pc::total;
		cout<<"                                          \t\tgtotal = "<<btotal<<endl;}
	else if (choicel=='y'&&choicem=='y'&&choicet=='y'&&choicew=='n'&&choicep=='y'){
		cout<<"Product name\tBrand     \tprice\t\tquantity\ttotal"<<endl;
	    laptop::display();
		mobile::display();
		tv::display();
		pc::display();
			int btotal=laptop::total+mobile::total+tv::total+pc::total;
		cout<<"                                          \t\tgtotal = "<<btotal<<endl;}
	else if (choicel=='n'&&choicem=='y'&&choicet=='n'&&choicew=='n'&&choicep=='n'){
		cout<<"Product name\tBrand     \tprice\t\tquantity\ttotal"<<endl;
	    
		mobile::display();
			int btotal=mobile::total;
		cout<<"                                          \t\tgtotal = "<<btotal<<endl;
		}
		else if (choicel=='n'&&choicem=='n'&&choicet=='y'&&choicew=='n'&&choicep=='n'){
		cout<<"Product name\tBrand     \tprice\t\tquantity\ttotal"<<endl;
	    
		tv::display();
			int btotal=tv::total;
		cout<<"                                          \t\tgtotal = "<<btotal<<endl;
		}
		else if (choicel=='n'&&choicem=='n'&&choicet=='n'&&choicew=='y'&&choicep=='n'){
		cout<<"Product name\tBrand     \tprice\t\tquantity\ttotal"<<endl;
	    watch::display();
			int btotal=watch::total;
		cout<<"                                          \t\tgtotal = "<<btotal<<endl;}
		else if (choicel=='y'&&choicem=='n'&&choicet=='n'&&choicew=='y'&&choicep=='y'){
		cout<<"Product name\tBrand     \tprice\t\tquantity\ttotal"<<endl;
	    laptop::display();
		
		watch::display();
		pc::display();
			int btotal=laptop::total+watch::total+pc::total;
		cout<<"                                          \t\tgtotal = "<<btotal<<endl;}
		else if (choicel=='y'&&choicem=='n'&&choicet=='n'&&choicew=='n'&&choicep=='y'){
		cout<<"Product name\tBrand     \tprice\t\tquantity\ttotal"<<endl;
	    laptop::display();
		pc::display();
			int btotal=laptop::total+pc::total;
		cout<<"                                          \t\tgtotal = "<<btotal<<endl;}
		else if (choicel=='n'&&choicem=='y'&&choicet=='n'&&choicew=='y'&&choicep=='n'){
		cout<<"Product name\tBrand     \tprice\t\tquantity\ttotal"<<endl;
	    
		mobile::display();
		watch::display();
			int btotal=mobile::total+watch::total;
		cout<<"                                          \t\tgtotal = "<<btotal<<endl;}
		else if (choicel=='y'&&choicem=='n'&&choicet=='y'&&choicew=='n'&&choicep=='y'){
		cout<<"Product name\tBrand     \tprice\t\tquantity\ttotal"<<endl;
	    laptop::display();
		
		tv::display();
		
		pc::display();
			int btotal=laptop::total+tv::total+pc::total;
		cout<<"                                          \t\tgtotal = "<<btotal<<endl;}
		else if (choicel=='n'&&choicem=='n'&&choicet=='y'&&choicew=='y'&&choicep=='n'){
		cout<<"Product name\tBrand     \tprice\t\tquantity\ttotal"<<endl;
	    tv::display();
		watch::display();
			int btotal=tv::total+watch::total;
		cout<<"                                          \t\tgtotal = "<<btotal<<endl;}
		else if (choicel=='n'&&choicem=='y'&&choicet=='y'&&choicew=='n'&&choicep=='n'){
		cout<<"Product name\tBrand     \tprice\t\tquantity\ttotal"<<endl;
	    
		mobile::display();
		tv::display();
			int btotal=mobile::total+tv::total;
		cout<<"                                          \t\tgtotal = "<<btotal<<endl;}
		else if (choicel=='y'&&choicem=='y'&&choicet=='n'&&choicew=='n'&&choicep=='y'){
		cout<<"Product name\tBrand     \tprice\t\tquantity\ttotal"<<endl;
	    laptop::display();
		mobile::display();
	
		pc::display();
			int btotal=laptop::total+mobile::total+pc::total;
		cout<<"                                          \t\tgtotal = "<<btotal<<endl;}
		else if (choicel=='n'&&choicem=='y'&&choicet=='n'&&choicew=='n'&&choicep=='y'){
		cout<<"Product name\tBrand     \tprice\t\tquantity\ttotal"<<endl;
	    
		mobile::display();
		pc::display();
			int btotal=mobile::total+pc::total;
		cout<<"                                          \t\tgtotal = "<<btotal<<endl;}
		else if (choicel=='n'&&choicem=='n'&&choicet=='y'&&choicew=='n'&&choicep=='y'){
		cout<<"Product name\tBrand     \tprice\t\tquantity\ttotal"<<endl;
	    tv::display();
		pc::display();
			int btotal=tv::total+pc::total;
		cout<<"                                          \t\tgtotal = "<<btotal<<endl;}
		else if (choicel=='y'&&choicem=='n'&&choicet=='y'&&choicew=='y'&&choicep=='n'){
		cout<<"Product name\tBrand     \tprice\t\tquantity\ttotal"<<endl;
	    laptop::display();
	
		tv::display();
		watch::display();
		int btotal=laptop::total+tv::total+watch::total;
		cout<<"                                          \t\tgtotal = "<<btotal<<endl;
	}
		else if (choicel=='y'&&choicem=='y'&&choicet=='n'&&choicew=='y'&&choicep=='n'){
		cout<<"Product name\tBrand     \tprice\t\tquantity\ttotal"<<endl;
	    laptop::display();
		mobile::display();
		
		watch::display();
			int btotal=laptop::total+mobile::total+watch::total;
		cout<<"                                          \t\tgtotal = "<<btotal<<endl;
		}
		else if (choicel=='y'&&choicem=='n'&&choicet=='n'&&choicew=='n'&&choicep=='y'){
		cout<<"Product name\tBrand     \tprice\t\tquantity\ttotal"<<endl;
	    laptop::display();
		pc::display();
			int btotal=laptop::total+pc::total;
		cout<<"                                          \t\tgtotal = "<<btotal<<endl;}
		else if (choicel=='n'&&choicem=='y'&&choicet=='y'&&choicew=='y'&&choicep=='n'){
		cout<<"Product name\tBrand     \tprice\t\tquantity\ttotal"<<endl;
	    
		mobile::display();
		tv::display();
		watch::display();
			int btotal=mobile::total+tv::total+watch::total;
		cout<<"                                          \t\tgtotal = "<<btotal<<endl;
		}
		else if (choicel=='n'&&choicem=='y'&&choicet=='y'&&choicew=='n'&&choicep=='y'){
		cout<<"Product name\tBrand     \tprice\t\tquantity\ttotal"<<endl;
	    
		mobile::display();
		tv::display();
		pc::display();
		int btotal=mobile::total+tv::total+pc::total;
		cout<<"                                          \t\tgtotal = "<<btotal<<endl;}
    else if (choicel=='y'&&choicem=='n'&&choicet=='n'&&choicew=='y'&&choicep=='n'){
		cout<<"Product name\tBrand     \tprice\t\tquantity\ttotal"<<endl;
	    laptop::display();
		watch::display();
		int btotal=laptop::total+watch::total;
		cout<<"                                          \t\tgtotal = "<<btotal<<endl;}
    
		else if (choicel=='n'&&choicem=='n'&&choicet=='n'&&choicew=='n'&&choicep=='n'){
			cout<<"You can Leave if you don't want to buy anything! "<<endl;
		}
		cout<<"-----------------------------------------------------------------"<<endl;
		cout<<"\n\nTHANK YOU for coming here!"<<endl;
   }
};
int main()
{bill *l1;
bill l2;
l1=&l2;
l2.display();
	system("pause");
	return 0;
}