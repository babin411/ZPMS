 #include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
#include<windows.h>
#include<iomanip>

#include<string.h>

int verify_alphabet(char* arr, int size);
long int get_size_of_the_file1();
long int get_size_of_the_file();

void gotoxy(short x,short y)
{
    static HANDLE h=NULL;
    if(!h)
        h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c={x,y};
    SetConsoleCursorPosition(h,c);
}

//MADE UP CLASS
#include "staff.h"
#include "animal.h"

using namespace std;
//for checking password
int pass_check()
{
        char e;
        string entered_username;
        string entered_password="";
        string Uword,Pword, Uword1,Pword1;

        ifstream passf;
            passf.open("admin_db.txt");
            passf.seekg(0);
            passf>>Uword>>Pword>>Uword1>>Pword1;
            passf.close();

    cout<<"ENTER CURRENT THE USERNAME : "<<endl;
    cin>>entered_username;

    cout<<"ENTER CURRENT THE PASSWORD : "<<endl;
    e = _getch();
	while (e != 13)
	{
		if (e == 8)
		{
            cout << "\b \b";
            entered_password.pop_back();
		}
		if (e != 8)
		{
			cout << "*";
			entered_password.push_back(e);
		}
		e = _getch();
	}
    cout<<endl;
    system("cls");
    if(entered_username==Uword &&entered_password==Pword)
    {
        return 1;
    }
    else if(entered_username==Uword1 &&entered_password==Pword1)
    {
       return 2;
    }
    else
    {
       return 0;
    }

}
//for changing password(takes argument ))
//if argument value 1 ;;changes main admin U/P
//if argument value 2 ,, changes normal admin U/P;
void change_UP(int arg)
{

    char cho;//cho = choice
     string Uword,Pword, Uword1,Pword1;

        ifstream passf;
            passf.open("admin_db.txt");
            passf.seekg(0);
            passf>>Uword>>Pword>>Uword1>>Pword1;
            passf.close();

    string new_U_word;
    string new_P_word;
    switch(arg)
    {
        case 1://FOR SUPER ADMIN
            if (pass_check() == 1)
            {
                ofstream outf;
                outf.open("admin_db.txt");
                cout<<"ENTER NEW USER NAME :" <<endl;
                cin>>new_U_word;
                cout<<"ENTER NEW PASSWORD :" <<endl;
                cin>>new_P_word;
                cout<<"(Y/N?)";
                cho=getch();
                if(toupper(cho)=='Y')
                {
                    outf<<new_U_word<<' '<<new_P_word<<' '<<Uword1<<' '<<Pword1<<endl;
                    outf.close();
                }
            }
            else
            {
                cout<<"ACESS DENIED "<<endl;
            }
            break;

        case 2://for NORMAL ADMIN
            if (pass_check() == 1)
            {
                ofstream outf;
                outf.open("admin_db.txt");
                cout<<"ENTER NEW USER NAME :" <<endl;
                cin>>new_U_word;
                cout<<"ENTER NEW PASSWORD :" <<endl;
                cin>>new_P_word;
                cout<<"(Y/N?)";
                cho=getch();
                if(toupper(cho)=='Y')
                    {
                        outf<<Uword<<' '<<Pword<<' '<<new_U_word<<' '<<new_P_word<<endl;
                        outf.close();
                    }
            }
            else
            {
                cout<<"ACESS DENIED "<<endl;
            }
            break;
    }

}


int verify_alphabet(char* arr, int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		if (isdigit(arr[i]))
		{
			return(1);
		}
	}
        return 0;
}
//void ticket_counter();
void add_staff_data();
int verify_alphabet(char* arr,int size);
void modify_staff_data();
void delete_contents();
void delete_contents1();
void display();
void delete_staff_data();
int display_staff_data();
int staff_number();
int staff_number()
{
	long int size;
	size = get_size_of_the_file();
	staff d;
	size = size / (sizeof(d));
	return(size);
}
void add_animal_data();
void modify_animal_data();
void delete_animal_data();
//void assign_animal();
void display1();
//void report();
//void bill();
int display_animal_data();
int number();

int main()
{
	int counter = 0,y=0;

START1:
	system("CLS");
	cout << "********************************************************************************\n";
	cout << "\n\t\tWELCOME TO P10 ZOOLOGICAL PARK MANAGEMENT SYSTEM\n\n";
	cout << "********************************************************************************\n";
	cout << "\n\t\t\t\t1.Main Menu\n";
    cout << "\n\t\t\t\t2.Ticket\n";
	cout << "\n\t\t\t\t3.Shut Down\n\n";
	cout << "********************************************************************************\n";
	int op,ch;
	//count=0,x;
	//char c;
	string pass;
	cout << "\nPlease Enter Your Choice :";
	cin >> op;
	cout << "\n\n";
	system("PAUSE");

	START3:
	switch (op)
	{
	case 1:

		system("CLS");
		cout << "********************************************************************************\n";
		cout << "\t\t\t\tMain Menu\n\n";
		cout << "********************************************************************************\n";
		cout << "\n\n\t\t1.Enter Into Staff's Database\n";
		cout << "\n\t\t2.Enter into Animal's Database\n";
		cout << "\n\t\t3.TICKET\n";
		cout << "\n\t\t4.Generate Animal's Bills\n";
		cout << "\n\t\t5.Exit\n\n";
		cout << "********************************************************************************";
		cout << "\n\n\tPlease Choose Your Choice :";
		cin >> ch;
		switch (ch)
		{
		case 1:
            START2:
			system("CLS");
			////
			if (pass_check() == 1)
			{
				cout << "\n\nAccess Granted ";
				cout << "\n\n";
				system("PAUSE");
				system("CLS");
				while (1)
				{
				    ADMIN_MENU:
					system("CLS");
					cout << "********************************************************************************\n";
					cout << "\n\t\t\tWelcome to Staff's Database\n";
					cout << "\n********************************************************************************\n";
					cout << "\n\t\t1.Add New Staff's Information\n";
					cout << "\n\t\t2.Edit Staff's Information\n";
					cout << "\n\t\t3.Display Staff's Information\n";
					cout << "\n\t\t4.Delete Staff's Information\n";
					cout << "\n\t\t5.Number Of Staffs In The ZOO\n";
					cout << "\n\t\t6.Clear All The Information In The Database\n";
					cout << "\n\t\t7.Display The Details Of All The Staffs\n";
                    cout << "\n\t\t8.Change Password\n";
					cout << "\n\t\t9.Exit\n";
					cout << "\n********************************************************************************\n";
					int opt;
					cout << "Please Choose Your Choice :";
					cin >> opt;
					int y;
					switch (opt)
					{
					case 1:
						system("CLS");
						add_staff_data();
						break;
					case 2:

							system("CLS");
							modify_staff_data();

						break;
					case 3:
						system("CLS");
							y = display_staff_data();
							if (y != 1)
							{
								cout << "\nNo Record To Display!!!\n";
								cout << "\n";
								system("PAUSE");
							}

						break;
					case 4:

							system("CLS");
							delete_staff_data();
							cout << "\n";
							system("PAUSE");

						break;
					case 5:
						system("CLS");
						cout << "\nNumber Of Staffs In The ZOO are :" << staff_number();
						cout << "\n\n";
						system("PAUSE");
						break;
					case 6:
						system("CLS");
						delete_contents();
						cout << "\nAll The Contents Of The Database Are Deleted ";
						cout << "\n\n";
						system("PAUSE");
						break;
					case 7:
						system("CLS");
						display();
						cout << "\n\n";
						system("PAUSE");
						break;
					case 8:
						system("CLS");
						cout<<"\n1.SUPER ADMIN";
						cout<<"\n2.NORMAL ADMIN\n";
						cout<<"3.Back\n";
                        cin>>y;
                        switch(y)
                        {
                            case 1:
                                system("cls");
                                change_UP(1);
                                system("PAUSE");
                                break;
                            case 2:
                                system("cls");
                                change_UP(2);
                                system("PAUSE");
                                break;
                            case 3:
                                system("cls");
                                goto ADMIN_MENU;
                                _getch();
                         }



                    case 9:
						system("CLS");
						goto START3;
						_getch();
					}
				}
			}
			else if(pass_check()==2)
            {
                cout << "\n\nAccess Granted ";
				cout << "\n\n";
				system("PAUSE");
				system("CLS");
				while(2)
				{
					system("CLS");
					cout << "********************************************************************************\n";
					cout << "\n\t\t\tWelcome to Staff's Database\n";
					cout << "\n********************************************************************************\n";
					cout << "\n\t\t1.Edit Staff's Information\n";
					cout << "\n\t\t2.Display Staff's Information\n";
					cout << "\n\t\t3.Number Of Staffs In The ZOO\n";
                    cout << "\n\t\t4.Display The Details Of All The Staffs\n";
					cout << "\n\t\t5.Exit\n";
					cout << "\n********************************************************************************\n";
					int opt;
					cout << "Please Choose Your Choice :";
					cin >> opt;
					int y;
					switch (opt)
					{

					case 1:

							system("CLS");
							modify_staff_data();

						break;
					case 2:
						system("CLS");
							y = display_staff_data();
							if (y != 1)
							{
								cout << "\nNo Record To Display!!!\n";
								cout << "\n";
								system("PAUSE");
							}

						break;
					case 3:
						system("CLS");
						cout << "\nNumber Of Staffs In ZOOLOGICAL PARK are :" << staff_number();
						cout << "\n\n";
						system("PAUSE");
						break;
					case 4:
						system("CLS");
						display();
						cout << "\n\n";
						system("PAUSE");
						break;
					case 5:
						system("CLS");
						goto START3;
						_getch();
					}
				}

            }
			else
			{
				if (counter >= 3)
				{
					system("CLS");
					cout << "\n\nAccess Denied!!!You Have Entered Wrong Password Too Many Times\n";
					cout << "\nThis System Will Shut Down.Please Come Back Again\n";
					cout << "\nThank You\n";
					cout << "\n";
					system("PAUSE");
					exit(0);
				}
				cout << "\n\nWrong Password.Access Denied!!!\n";
				system("pause");
				counter++;
				goto START2;
			}
		case 2:

		    //////////
		    START4:
			system("CLS");
            if (pass_check() == 1)
			{
				cout << "\n\nAccess Granted ";
				cout << "\n\n";
				system("PAUSE");
				system("CLS");
				while (1)
				{
					system("CLS");
					cout << "********************************************************************************\n";
					cout << "\n\t\t\tWelcome To Animal's Database\n\n";
					cout << "********************************************************************************\n";
					cout << "\n\t\t1.Add Animal's Information\n";
					cout << "\n\t\t2.Assign A Animal To A Staff\n";
					cout << "\n\t\t3.Edit Animal's Information\n";
					cout << "\n\t\t4.Display Animal's Information\n";
					cout << "\n\t\t5.Delete Animal's Information\n";
					cout << "\n\t\t6.No.Of Animals In The Zoological Park\n";
					cout << "\n\t\t7.Delete All The Contents In The Database\n";
					cout << "\n\t\t8.Display The Details Of All The Animals In The ZOO\n";
					cout << "\n\t\t9.Exit\n\n";
					cout << "********************************************************************************\n";
					int opt;
					cout << "\nPlease Choose Your Choice :";

					cin >> opt;
					int y;
					switch (opt)
					{
					case 1:
						system("CLS");
						add_animal_data();
						break;
					case 2:
						system("CLS");
						//assign_animal();
						cout<<"assign_animal(); aila declare garna ho"<<endl;
						break;
					case 3:
						system("CLS");
						modify_animal_data();
						break;
					case 4:
						system("CLS");
						y = display_animal_data();
						if (y != 1)
						{
							cout << "\nNo Record To Display!!!\n";
							cout << "\n";
							system("PAUSE");
						}
						break;
					case 5:
						system("CLS");
						delete_animal_data();
						cout << "\n";
						system("PAUSE");
						break;
					case 6:
						system("CLS");
						cout << "\nNo.Of Animal's In The ZOO are :" << number();
						cout << "\n\n";
						system("PAUSE");
						break;
					case 7:
						system("CLS");
						delete_contents1();
						cout << "\nAll The Contents Of The Database Are Deleted";
						cout << "\n\n";
						system("PAUSE");
						break;
					case 8:
						system("CLS");
						display1();
						cout << "\n\n";
						system("PAUSE");
						break;
                    case 9:
						system("CLS");
						goto START3;
						_getch();
					}
				}
			}
			else if(pass_check() ==2)
            {
                cout << "\n\nAccess Granted ";
				cout << "\n\n";
				system("PAUSE");
				system("CLS");
				while (1)
				{
					system("CLS");
					cout << "********************************************************************************\n";
					cout << "\n\t\t\tWelcome To Animal's Database\n\n";
					cout << "********************************************************************************\n";
					cout << "\n\t\t1.Assign A Animal To A Staff\n";
					cout << "\n\t\t2.Edit Animal's Information\n";
					cout << "\n\t\t3.Display Animal's Information\n";
					cout << "\n\t\t4.No.Of Animals In The ZOO\n";
					cout << "\n\t\t5.Display The Details Of All The Animals In The ZOO\n";
					cout << "\n\t\t6.Exit\n\n";
					cout << "********************************************************************************\n";
					int opt;
					cout << "\nPlease Choose Your Choice :";
					cin >> opt;
					int y;
					switch (opt)
					{

					case 1:
						system("CLS");
						//assign_animal();
						cout<<"assign_animal(); aila declare garna ho"<<endl;
						break;
					case 2:
						system("CLS");
						modify_animal_data();
						break;
					case 3:
						system("CLS");
						y = display_animal_data();
						if (y != 1)
						{
							cout << "\nNo Record To Display!!!\n";
							cout << "\n";
							system("PAUSE");
						}
						break;
					case 4:
						system("CLS");
						cout << "\nNo.Of Animal's In The ZOO are :" << number();
						cout << "\n\n";
						system("PAUSE");
						break;
					case 5:
						system("CLS");
						display1();
						cout << "\n\n";
						system("PAUSE");
						break;
                    case 6:
						system("CLS");
						goto START3;
						_getch();
					}
				}
            }
			else
			{
				if (counter >= 3)
				{
					system("CLS");
					cout << "\n\nAccess Denied!!!You Have Entered Wrong Password Too Many Times\n";
					cout << "\nThis System Will Shut Down.Please Come Back Again\n";
					cout << "\nThank You\n";
					cout << "\n";
					system("PAUSE");
					exit(0);
				}
				cout << "\n\nWrong Password.Access Denied!!!\n";
				counter++;
				goto START4;
			}

		case 3:
			system("CLS");
			cout << "\n\n";
			//report();
			cout<<"BILL WILL TICKET"<<endl;
			cout << "\n\n";
			system("PAUSE");
			goto START3;
			break;
		case 4:
			system("CLS");
			//bill();
			cout<<"BILL WILL TICKET"<<endl;
			cout << "\n\n";
			system("PAUSE");
			system("CLS");
			goto START3;
			break;

		case 5:
			cout << "\n";
			cout << "\n";
			goto START1;
		default:
			cout << "\nWrong Choice ";
		}
		break;
    case 2:
            cout<<"----------TICKET COUNTER -------"<<endl;
            //ticket_counter();
	case 3:
		cout << "\n\n";
		exit(0);
		break;
	default:
		cout << "\nWrong Choice ";
	}
	_getch();
	return 0;
}

	void add_staff_data()
	{
		staff d;
		ofstream myfile("staff8.txt",ios::in|ios::app);
		d.get_info();
		myfile.write((char*)&d, sizeof(d));
		myfile.close();
	}
	void display()
	{
		long int size = 0;
		size = get_size_of_the_file();
		int i = 0;
		staff d;
		size = size / (sizeof(d));
		if (size == 0)
		{
			cout << "\nDatabase Empty!!!";
			cout << "\n";
		}
		else
		{
			cout << "\n" ;
			cout << "********************************************************************************";
			cout << "\n\t\t\tDetails Of All The Staffs In The ZOO\n";
			cout << "********************************************************************************\n";
			cout <<"  "<< "ID" << "\t\t" <<"\tNAME\t"<<"\t\t"<< "gender "<< "\t\t" << "Age" << "\t\t"<<"QUALIFICATION"<<"\t\t" <<"Specialization" <<endl;
			ifstream myfile("staff8.txt");
			myfile.seekg(0);
			for (i = 0; i < size; i++)
			{
				myfile.read((char*)&d, sizeof(d));
				d.display_all(d);
			}
			cout << "********************************************************************************\n";
		}
	}
int display_staff_data()
	{
		long int size = 0;
		size = get_size_of_the_file();
		int i = 0, id, id1, count = 0;
		staff d1;
		size = size / (sizeof(d1));
		if (size == 0)
		{
			cout << "\nDatabase Empty!!!";
			cout << "\n";
            return 0;

		}
		else
		{
			cout << "\nEnter The ID Of the Staff You require :";
			cin >> id;
			ifstream myfile1("staff8.txt");
			for (i = 0; i < size; i++)
			{
				myfile1.clear();
				myfile1.read((char*)&d1, sizeof(d1));
				id1 = d1.get_staff_id();
				if (id == id1)
				{
					count = 1;
					d1.display_info(d1);
					cout << "\n";
					cout << "\n";
					system("PAUSE");
					cout << "\n";
					break;
				}
			}
			myfile1.close();
			return(count);
		}
	}

	void modify_staff_data()
	{
		int id1;
		long int size = 0;
		size = get_size_of_the_file();
		int i = 0, count = 0, id;
		staff d2;
		size = size / (sizeof(d2));
		if (size == 0)
		{
			cout << "\nDatabase Empty!!!\n";
			cout << "\nNo Record To Modify!!!";
			cout << "\n\n";
			system("PAUSE");
		}
		else
		{
			cout << "\nEnter The ID Of The Staff To Modify Data :";
			cin >> id1;
			ifstream myfile2("staff8.txt");
			for (i = 0; i < size; i++)
			{
				myfile2.clear();
				myfile2.read((char*)&d2, sizeof(d2));
				id = d2.get_staff_id();
				if (id == id1)
				{
					size = myfile2.tellg();
					size = size - sizeof(d2);
					count = 1;
					d2.display_info(d2);
					cout << "\n\n";
					system("PAUSE");
					cout << "\n";
					cout << "\nField's Which Can Be Modified\n";
					cout << "\n1.Name\n 2.\n 2.Age \n 3.Qualification\n";
					cout << "4.Specialization\n 5.Experience\n";
					cout << "6.City\n";
					int opt2;
					cout << "\nSelect The Field Which You Want To Modify :";
					cin >> opt2;
					switch (opt2)
					{
					case 1:
						d2.modify_info(d2, opt2, size);
						break;
					case 2:
						d2.modify_info(d2, opt2, size);
						break;
					case 3:
						d2.modify_info(d2, opt2, size);
						break;
					case 4:
						d2.modify_info(d2, opt2, size);
						break;
					case 5:
						d2.modify_info(d2, opt2, size);
						break;
					case 6:
						d2.modify_info(d2, opt2, size);
						break;
					case 7:
						d2.modify_info(d2, opt2, size);
						break;
					default:
						cout << "\nWrong Choice ";
					}
					break;
				}
			}
			myfile2.close();
			if (count == 0)
			{
				cout << "\nRecord Does'nt Exist!!!";
				cout << "\n";
				system("PAUSE");
			}
		}
	}
	void delete_contents()
	{
		ofstream myfile("staff8.txt");
		myfile.close();
	}
	void delete_contents1()
	{
		ofstream myfile("animal11.txt");
		myfile.close();
	}

	void delete_staff_data()
	{
		long int size;
		size = get_size_of_the_file();
		staff d;
		size = size / (sizeof(d));
		if (size == 0)
		{
			cout << "\nDatabase Empty!!!";
			cout << "\n\nNo Record To Delete!!!";
			cout << "\n";
		}
		else
		{
			ifstream myfile6("staff8.txt");
			ofstream myfile7("temp1.txt");
			int id, count = 0, id1, i;
			cout << "\nEnter The ID Of The Staff Whose Data You Want To Delete :";
			cin >> id;
			for (i = 0; i < size; i++)
			{
			myfile6.read((char*)&d, sizeof(d));
				id1 = d.get_staff_id();
				if (id != id1)
				{
					myfile7.write((char*)&d, sizeof(d));
				}
				else
				{
					count = 1;
				}
			}
			myfile6.close();
			myfile7.close();
			ofstream myfile9("staff8.txt");
			ifstream myfile8("temp1.txt");
			for (i = 0; i < size - 1; i++)
			{
				myfile8.read((char*)&d, sizeof(d));
				myfile9.write((char*)&d, sizeof(d));
			}
			if (count == 0)
			{
				cout << "\nNo Data Found ";
				cout << "\n\n";
				system("PAUSE");
			}
			else
			{
				cout << "\nData Successfully Deleted\n";
			}
		}
	}


	long int get_size_of_the_file()
	{
		 long int size=0;
         ifstream ifile("staff8.txt");
		 ifile.seekg(0, ios::end);
		 size = ifile.tellg();
		 ifile.close();
		 return(size);
	}

	void add_animal_data()
	{
		animal p;
		ofstream myfile("animal11.txt", ios::in | ios::app);
		p.get_info();
		myfile.write((char*)&p, sizeof(p));
		myfile.close();
	}
	void display1()
 	{
		long int size = 0;
		size = get_size_of_the_file1();
		int i = 0;
		animal p;
		size = size / (sizeof(p));
		if (size == 0)
		{
			cout << "\nDatabase Empty!!!";
			cout << "\n";
		}
		else
		{
            cout << "\n";
			cout << "********************************************************************************"<<endl;
			cout << "\n\t\t\tDetails Of All The Animals In The Zoological Park\n";
			cout << "********************************************************************************"<<endl;
			cout << "ID "   << "Scientific Name" << setw(10) << "Common Name" << setw(10)<< "Animal Name" << setw(10)<< "Class"<< setw(10) << "Age" << setw(10)<< "Height" << setw(10) << "Weight" << setw(10) << "Entry Date" << setw(10);
			cout << "Date of Birth" << setw(10) << "Expiry Date" << setw(10) << "Cage No" << endl;
			ifstream myfile("animal11.txt");
			myfile.seekg(0);
			for (i = 0; i < size; i++)
			{
				cout << "\n\n";
				myfile.read((char*)&p, sizeof(p));
				p.display_all(p);
			}
			cout << "********************************************************************************";
		}
	}

	int display_animal_data()
	{
		long int size = 0;
		size = get_size_of_the_file1();
		int i = 0, id, id1, count1 = 0;
		animal p1;
		size = size / (sizeof(p1));
		if (size == 0)
		{
			cout << "\nDatabase Empty!!!";
			cout << "\n";
			return 0;
		}
		else
		{
			cout << "\nEnter The ID Of The Animal You Require :";
			cin >> id;
			//ifstream myfile1("animal11.txt");
			fstream myfile1("animal11.txt", ios::in | ios::binary);
			for (i = 0; i < size; i++)
			{
				myfile1.clear();
				myfile1.read((char*)&p1, sizeof(p1));
				id1 = p1.get_animal_id();
				if (id == id1)
				{
					count1 = 1;
					p1.display_info(p1);
					cout << "\n\n";
					system("PAUSE");
					cout << "\n";
					break;
				}
			}
			myfile1.close();
			return(count1);

		}
	}

	/*void assign_animal()
	{
		animal p;
		int id;
		long int size;
		size = get_size_of_the_file1();
		int i = 0, count = 0, id1;
		size = size / (sizeof(p));
		if (size == 0)
		{
			cout << "\n Database Empty!!!\n";
			cout << "\nYou Need To Add Animal's Information First!!!";
			cout << "\n\n";
			system("PAUSE");
		}
		else
		{
			cout << "\nEnter ID Of The Animal :";
			cin >> id;
			ifstream myfile("animal11.txt");
			myfile.seekg(0);
			for (i = 0; i < size; i++)
			{
				myfile.read((char*)&p, sizeof(p));
				id1 = p.get_animal_id();
				if (id == id1)
				{
					count = 1;
					size = myfile.tellg();
					size = size - sizeof(p);
					p.assign_animal_to_staff( p, size);
					break;
				}
			}
			if (count == 0)
			{
				system("CLS");
				cout << "********************************************************************************";
				cout << "\nSorry!No Data Is Available Related To The Given ID\n";
				cout << "********************************************************************************";
				cout << "\n\n";
				system("PAUSE");
			}
		}
	}*/


	void modify_animal_data()
	{
		int id1;
		long int size = 0;
		size = get_size_of_the_file1();
		//cout << "SIZE of ANIMAL FILE = " << size;
		int i = 0, count = 0, id;
		animal p2;
		size = size / (sizeof(p2));
		if (size == 0)
		{
			cout << "\nDatabase Empty!!!\n";
			cout << "\nNo Record To Modify!!!";
			cout << "\n\n";
			system("PAUSE");
		}
		else
		{
			cout << "\nEnter The ID Of The Animal To Modify Data :";
			cin >> id1;
			ifstream myfile2("animal11.txt");
			myfile2.seekg(0);
			for (i = 0; i < size; i++)
			{
				myfile2.read((char*)&p2, sizeof(p2));
				id = p2.get_animal_id();
				if (id == id1)
				{
					size = myfile2.tellg();
					size = size - sizeof(p2);
					count = 1;
					p2.display_info(p2);
					cout << "\n";
					system("PAUSE");
					cout << "\n";
					cout << "\nField's Which Can Be Modified\n";
					cout << "\n1.Scientific Name\n2.Common Name\n3.Class\n4.Animal Name\n";
					cout << "5.Age\n6.Height\n7.Weight\n";
					cout << "8.Entry Date\n9.Date of Birth\n10.Expiration Date\n";
					cout << "11.Animal Cage\n";
					int opt2;
					cout << "\nSelect The Field Which You Want To Modify :";
					cin >> opt2;
					switch (opt2)
					{
					case 1:
						p2.modify_info(p2, opt2, size);
						break;
					case 2:
						p2.modify_info(p2, opt2, size);
						break;
					case 3:
						p2.modify_info(p2, opt2, size);
						break;
					case 4:
						p2.modify_info(p2, opt2, size);
						break;
					case 5:
						p2.modify_info(p2, opt2, size);
						break;
					case 6:
						p2.modify_info(p2, opt2, size);
						break;
					case 7:
						p2.modify_info(p2, opt2, size);
						break;
					case 8:
						p2.modify_info(p2, opt2, size);
						break;
					case 9:
						p2.modify_info(p2, opt2, size);
						break;
					case 10:
						p2.modify_info(p2, opt2, size);
						break;
					case 11:
						p2.modify_info(p2, opt2, size);
						break;
					default:
						cout << "\nWrong Choice ";
					}
					break;
				}
			}
			myfile2.close();
			if (count == 0)
			{
				cout << "\nRecord Does'nt Exist!!!";
				cout << "\n";
				system("PAUSE");
			}
		}
	}
	void delete_animal_data()
	{
		long int size;
		size = get_size_of_the_file1();
		animal p;
		size = size / (sizeof(p));
		if (size == 0)
		{
			cout << "\nDatabase Empty!!!";
			cout << "\n\nNo Record To Delete!!!";
			cout << "\n";
		}
		else
		{
			ifstream myfile6("animal11.txt");
			ofstream myfile7("temp4.txt");
			int id, count = 0, id1, i;
			cout << "\nEnter The ID Of The Animal Whose Data You Want To Delete :";
			cin >> id;
			for (i = 0; i < size; i++)
			{
				myfile6.read((char*)&p, sizeof(p));
				id1 = p.get_animal_id();
				if (id != id1)
				{
					myfile7.write((char*)&p, sizeof(p));
				}
				else
				{
					count = 1;
				}
			}
			myfile6.close();
			myfile7.close();
			ofstream myfile9("animal11.txt");
			ifstream myfile8("temp4.txt");
			for (i = 0; i < size - 1; i++)
			{
				myfile8.read((char*)&p, sizeof(p));
				myfile9.write((char*)&p, sizeof(p));
			}
			if (count == 0)
			{
				cout << "\nNo Data Found ";
				cout << "\n\n";

			}
			else
			{
				cout << "\nData Successfully Deleted ";
				cout << "\n\n";

			}
		}

	}
	long int get_size_of_the_file1()
	{
		long int size = 0;
		ifstream ifile("animal11.txt");
		ifile.seekg(0, ios::end);
		size = ifile.tellg();
		ifile.close();
		return(size);
	}

	int number()
	{
		long int size;
		animal p;
		size = get_size_of_the_file1();
		size = size / (sizeof(p));
		return(size);
	}

	/*void report()
	{
		animal p;
		int id, id1, count = 0;
		long int size;
		size = get_size_of_the_file1();
		size = size / (sizeof(p));
		if (size == 0)
		{
			cout << "\nAnimal Database Empty!!!";
			cout << "\nAdd Some Animal's Info First!!!";
			cout << "\n\n";
			system("PAUSE");
		}
		else
		{
			cout << "\nEnter The ID Of The Animal You Require :";
			cin >> id;
			ifstream myfile1("animal11.txt");
			for (int i = 0; i < size; i++)
			{
				myfile1.clear();
				myfile1.read((char*)&p, sizeof(p));
				id1 = p.get_animal_id();
				if (id == id1)
				{
					count = 1;
					p.report1(p);
					break;
				}
			}
			if (count == 0)
			{
				cout << "\nData Not Available!!!";
			}
		}
	}
	*/
	/*
	void bill()
	{
		long int size = 0;
		size = get_size_of_the_file1();
		int i = 0, id, id1, count1 = 0;
		animal p1;
		size = size / (sizeof(p1));
		if (size == 0)
		{
			cout << "\nDatabase Empty!!!";
			cout << "\n";
		}
		else
		{
			cout << "\nEnter The ID Of The Animal You Require :";
			cin >> id;
			ifstream myfile1("animal11.txt");
			for (i = 0; i < size; i++)
			{
				myfile1.clear();
				myfile1.read((char*)&p1, sizeof(p1));
				id1 = p1.get_animal_id();
				if (id == id1)
				{
					count1 = 1;
					p1.bill1(p1);
					break;
				}
			}
			if (count1 == 0)
			{
				cout << "\nData Not Found!!!";
			}
			myfile1.close();
		}
	}
*/
