#include<fstream>
#include<iostream>
#include<string.h>
using namespace std;
class employee
{
	public:
		char name[20];
		int id;
		int days_actually_worked;
		int total_working_days;
		int total_salary;
		char designation[20];
		int age;
		char gender[20];
};
class details:public employee
{
	public:
		int mth;
		char month[20];
		
		void days_worked()
{

    
	
    cout<<"enter your designation\n";
    cin>>designation;
    if(strcmp(designation,"manager"))
    {
    	cout<<"enter the number of days worked\n";
    	cin>>days_actually_worked;
    	total_salary=days_actually_worked*1500;
	}
	else if(strcmp(designation,"engineer"))
	{
		cout<<"enter the number of days worked\n";
		cin>>days_actually_worked;
		total_salary=days_actually_worked*1200;
	}
	
    
}		
		
		void fun1(int m)
		{
			mth=m;
		switch(mth)
		{
		case 1:
			strcpy(month,"january");
			 cout<<"total_working_day=31\n";
			break;
		case 2:
			strcpy(month,"february");
			 cout<<"total_working_day=28\n";
			break;
		case 3:
			strcpy(month,"march");
			 cout<<"total_working_day=31\n";
			break;
		case 4:
			strcpy(month,"april");
			 cout<<"total_working_day=30\n";
		    break;
		case 5:
			strcpy(month,"may");
			 cout<<"total_working_day=31\n";
			break;
		case 6:
			strcpy(month,"june");
			 cout<<"total_working_day=30\n";
			break;
		case 7:
			strcpy(month,"july");
			 cout<<"total_working_day=31\n";
			break;
		case 8:
			strcpy(month,"august");
			 cout<<"total_working_day=31\n";
			break;
		case 9:
			strcpy(month,"september");
			 cout<<"total_working_day=30\n";
			break;
		case 10:
			strcpy(month,"october");
			 cout<<"total_working_day=31\n";
			break;
		case 11:
			strcpy(month,"november");
			 cout<<"total_working_day=30\n";
			break;
		case 12:
			strcpy(month,"december");
			 cout<<"total_working_day=31\n";
			break;
		default:
			cout<<"choose from one to twelve";
			break;
			
		}
		this->days_worked();
	
	}

};

class payement_slip:public details
{
	public:
		payement_slip()
		{
			cout<<"\n enter your  name"<<endl;
			cin>>name;
			cout<<"\n enter age"<<endl;
			cin>>age;
		    cout<<"enter your gender \n";
			cin>>gender;
			cout<<"enter the month \n";
			cin>>mth;
            this->fun1(mth);
            
																		
		}
			void print()
			{
				cout<<"--------------------------------------------SALARY SLIP-----------------------------------------------------------\n\n";
			    cout<<"name :"<<"\t\t"<<"age :"<<"\t\t"<<"gender :"<<"\t"<<"month is :"<<"\t"<<"designation :"<<"\t"<<"number of days worked :"<<"\n";
			    cout<<name<<"\t\t"<<age<<"\t\t"<<gender<<"\t\t"<<mth<<"\t\t"<<designation<<"\t\t"<<days_actually_worked<<"\n\n";
			    cout<<"--------------------------------------------SALARY SLIP-----------------------------------------------------------\n";
			    cout<<"total salary  :"<<"\t"<<total_salary<<"\n";
		     	char data[100];
		        ofstream outfile;
	            outfile.open("afile.dat");
		        outfile<<name<<endl;
	        	outfile<<age<<endl;
	        	outfile<<gender<<endl;
	        	outfile<<designation<<endl;
	        	outfile<<days_actually_worked<<endl;
				outfile<<total_working_days<<endl;
				outfile<<total_salary<<endl;
				outfile<<month<<endl;
		        outfile.close();
																		
		    }
};
int main()
{
	payement_slip pr;

	pr.print();
	
};


