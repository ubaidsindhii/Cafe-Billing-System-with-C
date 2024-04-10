#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>
using namespace std;
class account 
{
   public : 
   int n,accno;char cname[100];float op;
   void get()
   {   
         cout<<"\nEnter Customer Name : ";cin>>cname;
         srand(time(0));
         accno = rand()%5;
         cout<<"\nEnter Opening Balance : ";cin>>op;
   }
   void display()
    {
      cout<<endl<<accno<<"\t"<<cname<<"\t"<<op;
    }
};
account a;
void read()
{
    ifstream fin;
    fin.open("Bank.dat",ios::in|ios::binary);
    while(fin.read((char*)&a,sizeof(a)))
    {
        a.display();
    }
    fin.close();
}
void write()
{
    ofstream fout;
    fout.open("Bank.dat",ios::app| ios::binary);
    a.get();
    fout.write((char*)&a,sizeof(a));
    fout.close();
    cout<<"\n\n\nSuccessful...\n\n\n";
}
void search()
{
    ifstream fin;int ac,f=0;
    fin.open("Bank.dat",ios::in|ios::binary);
    cout<<"\nEnter Account number that you want to Search : ";
    cin>>ac;
    while(fin.read((char*)&a,sizeof(a)))
    {
        if(a.accno==ac)
        {
            f=1;
            cout<<"\nRecord Found ";
            a.display();
            break;
        }
    }
    if(f==0)
    {
        cout<<"\nNo Record Found";
    }
    fin.close();
}
void update()
{
    int ac,amt,fl=0;
    fstream f;
    f.open("Bank.dat",ios::out|ios::in|ios::binary);
    cout<<"\nEnter account number for which you want to change Opening Balance : ";
    cin>>ac;
    while(f.read((char*)&a,sizeof(a)))
    {
        if(a.accno==ac)
        {
            fl=1;
            cout<<"\nRecord Found ";
            cout<<"\nEnter New Opening Balance : ";
            cin>>amt;
            int t=f.tellp();
            a.op=amt;
            f.seekp(t-sizeof(a));
            f.write((char*)&a,sizeof(a));
            cout<<"\nData Updated Successfully.....";
            break;
        }
    }
    if(fl==0)
    {
        cout<<"\nNo Record Found";
    }
    f.close();
}
void delete_specific()
{
    int ac,amt,fl=0;
    fstream f;
    f.open("Bank.dat",ios::in|ios::binary);
    ofstream fout;
    fout.open("new.dat",ios::app|ios::binary);
    cout<<"\nEnter the account that you want to delete ";
    cin>>ac;
    while(f.read((char*)&a,sizeof(a)))
    {
        if(a.accno!=ac)
        {
            fout.write((char*)&a,sizeof(a));
        }
        else{
            fl=1;
        }
    }
    f.close();
    fout.close();
    remove("Bank.dat");
    rename("new.dat","bank.dat");
    cout<<"\nSuccessful";
}
void withdraw()
{
	int acc_no,wamt,flag=0;
	cout<<"\nEnter Account Number : ";
	cin>>acc_no;
	fstream fin;
	fin.open("Bank.dat",ios::in|ios::binary|ios::out);
	while(fin.read((char*)&a,sizeof(a)))
	{
		if(acc_no==a.accno)
		{
			int tell=fin.tellp();
			flag++;
			m1:
			cout<<"\nEnter the Amount you want to withdraw : ";
			cin>>wamt;
			if(wamt>a.op)
			{
				cout<<endl<<"Insufficient Balance....";
				goto m1;
			}
			cout<<endl<<wamt<<" withdrawal successfully....";
			a.op-=wamt;
			fin.seekp(tell-sizeof(a));
			fin.write((char*)&a,sizeof(a));
			break;
		}
	}
	fin.close();
	if(flag==0){
		cout<<"\nData Not Found........";
	}
}
void deposit()
{
	int acc_no1,flag=0,damt;
	cout<<"\nEnter Account Number : ";
	cin>>acc_no1;
	fstream fin;
	fin.open("Bank.dat",ios::in|ios::binary|ios::out);
	while(fin.read((char*)&a,sizeof(a)))
	{
		if(acc_no1==a.accno)
		{
			int tell=fin.tellp();
			flag++;
			m1:
			cout<<"\nEnter the amount you want to Deposit : ";
			cin>>damt;
			cout<<endl<<damt<<"Deposit successfull....";
			a.op+=damt;
			fin.seekp(tell-sizeof(a));
			fin.write((char*)&a,sizeof(a));
			break;
		}
	}
	fin.close();
		if(flag==0){
		cout<<"\nData Not Found....";
	}
}
int main()
{
    int ch;
    remove("Bank.dat");
    while(1)
    {
        cout<<"\n1.Create new account \n2.Display All\n3.Search Specific Customer\n4.Set New Opening Balance\n5.Close the Account\n6.Deposit Money\n7.Withdraw Money\n0.Exit";
        cout<<"\n\nEnter Your Choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1:write();break;
            case 2:read();break;
            case 3:search();break;
            case 4:update();break;
            case 5:delete_specific();break;
            case 6:deposit();break;
            case 7:withdraw();break;
            case 0:exit(0);
            default:cout<<"\nInvalid Choice";
        }
    }
}
