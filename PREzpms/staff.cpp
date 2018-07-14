#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
#include<windows.h>
#include<string.h>
#include<iomanip>

#include "staff.h"
#include "animal.h"
using namespace std;
//int verify_alphabet(char* arr, int size);
int verify_alphabet(char* arr, int size);
long int get_size_of_the_file1();
long int get_size_of_the_file();


staff::staff()
{
    staff_id = 0 ;
}

staff::~staff()
{
    //dtor
}

void staff::get_info()
	{
        cout << "\nEnter Staff's ID:";
        cin >> staff_id;
        FIRST_NAME:
        cout << "\nEnter Staff's First Name :";
        cin.ignore();
        cin.getline(fname, 50);
        int flag;
        int size=strlen(fname);
        flag=verify_alphabet(fname,size);
        if (flag  == 1)
        {
            cout << "\n\nName should consist of only alphabets or min of three alphabets!!!\n";
            cout << "\n";
                //system("PAUSE");
                goto FIRST_NAME;
        }

        MIDDLE_NAME:
        cout << "\nEnter Staff's Middle Name :";
        cin.ignore();
        cin.getline(mname, 50);
        size=strlen(mname);
        flag=verify_alphabet(mname,size);
        if (flag  == 1)
        {
            cout << "\n\nName should consist of only alphabets or min of three alphabets!!!\n";
            cout << "\n";
                //system("PAUSE")
                goto MIDDLE_NAME;
        }

        LAST_NAME:
        cout << "\nEnter Staff's Last Name :";
        cin.ignore();
        cin.getline(lname, 50);
        size=strlen(lname);
        flag=verify_alphabet(lname,size);
        if (flag == 1)
        {
            cout << "\n\nName should consist of only alphabets or min of three alphabets!!!\n";
            cout << "\n";
                system("PAUSE");
                goto LAST_NAME;
        }



        GENDER:
        cout << "\nEnter Staff's Gender :";
        cin.ignore();
        cin.getline(gender, 50);
        size=strlen(gender);
        flag=verify_alphabet(gender,size);
        if (flag  == 1)
        {
            cout << "\n\nName should consist of only alphabets or min of three alphabets!!!\n";
            cout << "\n";
                system("PAUSE");
                goto GENDER;
        }


        cout << "\nEnter Staff's Age: ";
        cin >> age;

        QUALIFICATION:
        cout << "\nEnter Staff's Qualification :";
        cin.ignore();
        cin.getline(qualification, 50);
        size=strlen(qualification);
        flag=verify_alphabet(qualification,size);
        if (flag  == 1)
        {
            cout << "\n\nName should consist of only alphabets or min of three alphabets!!!\n";
            cout << "\n";
                system("PAUSE");
                goto QUALIFICATION;
        }

        SPECIALIZATION:
        cout << "\nEnter Staff's Specialization :";
        cin.ignore();
        cin.getline(specialization, 50);
        size=strlen(specialization);
        flag=verify_alphabet(specialization,size);
        if (flag  == 1)
        {
            cout << "\n\nName should consist of only alphabets or min of three alphabets!!!\n";
            cout << "\n";
                system("PAUSE");
                goto SPECIALIZATION;
        }

        cout << "\nEnter Staff's Experience: ";
        cin >> experience;


        STATE:
        cout << "\nEnter STATE :";
        cin.ignore();
        cin.getline(state, 50);
        size=strlen(state);
        flag=verify_alphabet(state,size);
        if (flag  == 1)
        {
            cout << "\n\nName should consist of only alphabets or min of three alphabets!!!\n";
            cout << "\n";
                system("PAUSE");
                goto STATE;
        }


        CITY:
        cout << "\nEnter CITY:";
        cin.ignore();
        cin.getline(city, 50);
        size=strlen(city);
        flag=verify_alphabet(city,size);
        if (flag  == 1)
        {
            cout << "\n\nName should consist of only alphabets or min of three alphabets!!!\n";
            cout << "\n";
                //system("PAUSE");
                goto CITY;
        }

        cout << "\nEnter Staff's Phone Number: ";
        cin >> phone_no;
    }


    int staff::get_staff_id()
    {
        return staff_id;
    }

	void staff::get_fname()
	{
        FIRST_NAME:
        cout << "\nEnter Staff's First Name :";
        cin.ignore();
        cin.getline(fname, 50);
       int size=strlen(fname);
         int flag=verify_alphabet(fname,size);
        if (flag  == 1)
        {
            cout << "\n\nName should consist of only alphabets or min of three alphabets!!!\n";
            cout << "\n";
                //system("PAUSE");
                goto FIRST_NAME;
        }
	}
	void staff::get_mname()
	{
        MIDDLE_NAME:
        cout << "\nEnter Staff's Middle Name :";
        cin.ignore();
        cin.getline(mname, 50);
        int size=strlen(mname);
        int flag=verify_alphabet(mname,size);
        if (flag  == 1)
        {
            cout << "\n\nName should consist of only alphabets or min of three alphabets!!!\n";
            cout << "\n";
                //system("PAUSE")
                goto MIDDLE_NAME;
        }
	}
	void staff::get_lname()
	{
        LAST_NAME:
        cout << "\nEnter Staff's Last Name :";
        cin.ignore();
        cin.getline(lname, 50);
        int size=strlen(lname);
         int flag=verify_alphabet(lname,size);
        if (flag  == 1)
        {
            cout << "\n\nName should consist of only alphabets or min of three alphabets!!!\n";
            cout << "\n";
                //system("PAUSE");
                goto LAST_NAME;
        }

	}

	void staff::get_gender()
	{
        GENDER:
        cout << "\nEnter Staff's Gender :";
        cin.ignore();
        cin.getline(gender, 50);
         int size=strlen(gender);
         int flag=verify_alphabet(gender,size);
        if (flag  == 1)
        {
            cout << "\n\nName should consist of only alphabets or min of three alphabets!!!\n";
            cout << "\n";
                //system("PAUSE");
                goto GENDER;
        }
	}
	void staff::get_age()
	{
        cin.ignore();
        cout << "\nEnter New Age :";
        cin >> age;
        }

	void staff::get_qualification()
	{
        QUALIFICATION:
        cout << "\nEnter Staff's Qualification :";
        cin.ignore();
        cin.getline(qualification, 50);
         int size=strlen(qualification);
         int flag=verify_alphabet(qualification,size);
        if (flag  == 1)
        {
            cout << "\n\nName should consist of only alphabets or min of three alphabets!!!\n";
            cout << "\n";
                //system("PAUSE");
                goto QUALIFICATION;
        }
	}
void staff::get_specialization()
{
SPECILIZATION:
	cin.ignore();
	cout << "\nEnter New specialization :";
	cin >> specialization;
	int flag;
	int size = strlen(specialization);
	flag = verify_alphabet(specialization, size);
	if (flag == 1)
	{
		cout << "\nspecialization should consist of only alphabets or min of three alphabets!!!\n";
		cout << "\n";
		system("PAUSE");
		goto SPECILIZATION;
	}
	cout << "********************************************************************************";
	cout << "\nCodes For Various specialization\n";
	cout << "********************************************************************************";
	cout << "1.General Medicine\n2.Cardiology\n3.Neurology\n4.ENT\n";
	cout << "********************************************************************************";
	cout << "\nSelect The Code Basing On The specialization ";
	cin >> code;
}
	void staff::get_experience()
	{
        cin.ignore();
        cout << "\nEnter New Experience :";
        cin >> experience;
    }
	void staff::get_state()
	{
        STATE:
        cout << "\nEnter STATE :";
        cin.ignore();
        cin.getline(state, 50);
         int size=strlen(state);
         int flag=verify_alphabet(state,size);
        if (flag  == 1)
        {
            cout << "\n\nName should consist of only alphabets or min of three alphabets!!!\n";
            cout << "\n";
                //system("PAUSE");
                goto STATE;
        }
	}
	void staff::get_city()
	{
        CITY:
        cout << "\nEnter CITY:";
        cin.ignore();
        cin.getline(city, 50);
         int size=strlen(city);
         int flag=verify_alphabet(city,size);
        if (flag == 1)
        {
            cout << "\n\nName should consist of only alphabets or min of three alphabets!!!\n";
            cout << "\n";
                //system("PAUSE");
                goto CITY;
        }
	}
	void staff::get_phone_no()
	{
        cin.ignore();
        cout << "\nEnter New Phone Number:";
        cin >> phone_no;
	}
	void staff::display_all(staff d)
	{
         cout << ' ' << d.staff_id << ' ' << d.fname << ' ' << d.mname << ' ' << d.lname << ' ' << d.gender << ' ' << d.age << ' ' << d.qualification << ' ' << d.specialization << ' ' << endl;
	}
	void staff::display_info(staff d)
	{
        cout << "\nStaff's ID:\t "<< d.staff_id;
        cout << "\nStaff's Name :\t" << d.fname;
        cout << "\nStaff's Age:\t" << d.age;
        cout << "\nStaff's Qualification :\t" << d.qualification;
        cout << "\nStaff's Specilization :\t" << d.specialization;
        cout << "\nStaff's Experience:\t" << d.experience;
        cout << "\nStaff's State :\t" << d.state;
        cout << "\nStaff's City :\t" << d.city;
        cout << "\nStaff's Phone Number:\t" << d.phone_no;
	}
    void staff::modify_info(staff d, int number,int size)
    {
        if (number == 1)
        {
            fstream myfile6("Staff8.txt",ios::in|ios::out);
            staff d1 = d;
            d1.get_fname();
            myfile6.seekp(size, ios::beg);
            myfile6.write((char*)&d1, sizeof(d1));
            cout << "\n";
            cout << "\n";
            system("PAUSE");
            system("CLS");
            cout << "\nData Successfully Modified\n";
            myfile6.close();
            cout << " \n";
            system("PAUSE");
        }
        else if (number == 2)
        {
            fstream myfile6("Staff8",ios::in|ios::out);
            staff d1 = d;
            d1.get_age();
            myfile6.seekp(size,ios::beg);
            myfile6.write((char*)&d1, sizeof(d1));
            system("PAUSE");
            system("CLS");
            cout << "\nData Successfully Modified\n";
            myfile6.close();
            cout << "\n";
            system("PAUSE");
        }
        else if (number == 3)
        {
            fstream myfile6("Staff8.txt", ios::in | ios::out);
            staff d1 = d;
            d1.get_qualification();
            myfile6.seekp(size, ios::beg);
            myfile6.write((char*)&d1, sizeof(d1));
            system("PAUSE");
            system("CLS");
            cout << "\nData Successfully Modified\n";
            myfile6.close();
            cout << "\n";
            system("PAUSE");
        }

        else if (number == 4)
        {
            fstream myfile6("Staff8.txt", ios::in | ios::out);
            staff d1 = d;
            d1.get_specialization();
            myfile6.seekp(size, ios::beg);
            myfile6.write((char*)&d1, sizeof(d1));
            system("PAUSE");
            system("CLS");
            cout << "\nData Successfully Modified\n";
            myfile6.close();
            cout << "\n";
            system("PAUSE");

        }
        else if (number == 5)
        {
            fstream myfile6("Staff8.txt", ios::in | ios::out);
            staff d1 = d;
            d1.get_experience();
            myfile6.seekp(size, ios::beg);
            myfile6.write((char*)&d1, sizeof(d1));
            system("PAUSE");
            system("CLS");
            cout << "\nData Successfully Modified\n";
            myfile6.close();
            cout << "\n";
            system("PAUSE");
        }
        else if (number == 6)
        {
            fstream myfile6("Staff8.txt", ios::in | ios::out);
            staff d1 = d;
            d1.get_state();
            myfile6.seekp(size, ios::beg);
            myfile6.write((char*)&d1, sizeof(d1));
            system("PAUSE");
            system("CLS");
            cout << "\nData Successfully Modified\n";
            myfile6.close();
            cout << "\n";
            system("PAUSE");
        }
        else if (number == 7)
        {
            fstream myfile6("Staff8.txt", ios::in | ios::out);
            staff d1 = d;
            d1.get_city();
            myfile6.seekp(size, ios::beg);
            myfile6.write((char*)&d1, sizeof(d1));
            system("PAUSE");
            system("CLS");
            cout << "\nData Successfully Modified\n";
            myfile6.close();
            cout << "\n";
            system("PAUSE");
        }

    }
