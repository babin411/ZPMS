#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
#include<windows.h>
#include<iomanip>
#include<string.h>
#include "staff.h"
#include "animal.h"

using namespace std;
//int verify_alphabet(char* arr, int size);
int verify_alphabet(char* arr, int size);
long int get_size_of_the_file1();
long int get_size_of_the_file();


animal::animal()
{
    animal_id = 0 ;
}

animal::~animal()
{

}
void animal::get_info()
{
	cout << "\nEnter Animal's ID"<< setw(20) << ": " ;
	cin >> animal_id;

	SCIENTIFIC_NAME:
        cout << "\nEnter Animal's Scientific Name" << setw(7)<<": " ;
        cin.ignore();
        cin.getline(scientific_name, 30);
        int flag;
        int size=strlen(scientific_name);
       flag=verify_alphabet(scientific_name,size);
        if (flag == 1)
        {
            cout << "\n\nName should consist of only alphabets or min of three alphabets!!!\n";
            cout << "\n";
            //system("PAUSE");
            goto SCIENTIFIC_NAME;
        }

	COMMON_NAME:
        cout << "\nEnter Animal's Common Name" << setw(11) << ": ";

        //cin.ignore();
        cin.getline(common_name, 30);
        size=strlen(common_name);
        flag=verify_alphabet(common_name,size);
        if (flag == 1)
        {
            cout << "\n\nName should consist of only alphabets or min of three alphabets!!!\n";
            cout << "\n";
            //system("PAUSE");
            goto COMMON_NAME;
        }

	ANIMAL_CLASS:
        cout << "\nEnter Animal's Class" << setw(17) << ": " ;
        //cin.ignore();
        cin.getline(classes, 20);
        size=strlen(classes);
        flag=verify_alphabet(classes,size);
        if (flag == 1)
        {
            cout << "\n\nName should consist of only alphabets or min of three alphabets!!!\n";
            cout << "\n";
            //system("PAUSE");
            goto ANIMAL_CLASS;
        }

	NAME:
        cout << "\nEnter Animal's Name" << setw(18) << ": " ;
        //cin.ignore();
        cin.getline(animal_name, 30);
        size=strlen(animal_name);
        flag=verify_alphabet(animal_name,size);
        if (flag  == 1)
        {
            cout << "\n\nName should consist of only alphabets or min of three alphabets!!!\n";
            cout << "\n";
            //system("PAUSE");
            goto NAME;
        }

	//cout << "\nEnter Animal's Id: ";
	//cin >> animal_id;

	cout << "\nEnter Animal's Age" << setw(19) << ": " ;
	cin >> age;

	cout << "\nEnter Animal's Height" << setw(16) << ": ";
	cin >> height;

	cout << "\nEnter Animal's Weight" << setw(16) << ": ";
	cin >> weight;

	cout << "\nEnter Animal's Entry Date" << setw(12) << ": ";
	cin.ignore();
	cin.getline(date_admitted, 20);

	cout << "\nEnter Animal's Birth Of Date" << setw(9) << ": ";
	cin.getline(dateofbirth, 20);

	cout<< "\nEnter Animal's Expiry Date" << setw(11) << ": ";
	cin.getline(dateofdeath,20);

    cout << "\nEnter Animal's Cage No: " << setw(12) << ":";
    cin>>cage_no;

}
int animal::get_animal_id()
{
    return animal_id;
}
void animal::get_animal_scientific_name()
{
    cout << "\nEnter Animal's ID:";
	cin >> animal_id;
	SCIENTIFIC_NAME:
        cout << "\nEnter Animal's Scientific Name :";
        cin.ignore();
        cin.getline(scientific_name, 50);
        int size=strlen(scientific_name);
        int flag=verify_alphabet(scientific_name,size);
        if (flag == 1)
        {
            cout << "\n\nName should consist of only alphabets or min of three alphabets!!!\n";
            cout << "\n";
            //system("PAUSE");
            goto SCIENTIFIC_NAME;
        }
}

void animal::get_animal_common_name()
{
    COMMON_NAME:
        cout << "\nEnter Animal's Common Name :";
        cin.ignore();
        cin.getline(common_name, 50);
        int size=strlen(common_name);
        int flag=verify_alphabet(common_name,size);
        if (flag == 1)
        {
            cout << "\n\nName should consist of only alphabets or min of three alphabets!!!\n";
            cout << "\n";
            //system("PAUSE");
            goto COMMON_NAME;
        }
}

void animal::get_animal_name()
{
    NAME:
        cout << "\nEnter Animal's Name :";
        cin.ignore();
        cin.getline(animal_name, 50);
        int size=strlen(animal_name);
        int flag=verify_alphabet(animal_name,size);
        if (flag == 1)
        {
            cout << "\n\nName should consist of only alphabets or min of three alphabets!!!\n";
            cout << "\n";
            //system("PAUSE");
            goto NAME;
        }
}
void animal::get_animal_class()
{
    ANIMAL_CLASS:
        cout << "\nEnter Animal's Class:";
        cin.ignore();
        cin.getline(classes, 50);
        int size=strlen(classes);
        int flag=verify_alphabet(classes,size);
        if (flag == 1)
        {
            cout << "\n\nName should consist of only alphabets or min of three alphabets!!!\n";
            cout << "\n";
            //system("PAUSE");
            goto ANIMAL_CLASS;
        }
}
void animal::get_age()
{
    cin.ignore();
	cout << "\nEnter New Weight :";
	cin >> age;
}
void animal::get_weight()
{
    cin.ignore();
	cout << "\nEnter New Weight :";
	cin >> weight;
}
void animal::get_height()
{
    cin.ignore();
	cout << "\nEnter New Height :";
	cin >> height;
}
void animal::get_admitted_date()
{
	cin.ignore();
	cout << "\nEnter New Entry Date Of Animal:";
	cin.getline(date_admitted, 30);
}
void animal::get_date_of_birth()
{
	cin.ignore();
	cout << "\nEnter New Date Of Birth: ";
	cin.getline(dateofbirth, 30);
}
void animal::get_date_of_death()
{

	cin.ignore();
	cout << "\nEnter New Date Of Death:";
	cin.getline(dateofdeath, 30);
}
void animal::get_cage_no()
{
	cin.ignore();
	cout << "\nEnter New Animal Cage :";
	cin>>cage_no;
}

void animal::display_all(animal d)
{
    //cout << d.animal_id << setw(20) << setw(15) << d.scientific_name<< setw(15) << d.common_name << setw(15) << d.animal_name << d.classes;
	//cout <<"\t"<< d.animal_id << "\t\t" << d.animal_scientific << "\t\t\t" << d.qualification << "\t\t\t" << d.age<<"\n";

	cout << d.animal_id << setw(5) << d.scientific_name << setw(5) << d.common_name << setw(5) << d.animal_name << setw(5) << d.classes << setw(5) << d.age << endl;
}

void animal::display_info(animal d)
{
	cout << "\nAnimal's ID" << setw(14) << ": "<< d.animal_id;
	cout << "\nAnimals Scientific Name" << setw(1) << ": " << d.scientific_name;
	cout << "\nAnimal's Common Name" << setw(5) << ": " << d.common_name;
	cout << "\nAnimal's Class" << setw(11) << ": " << d.classes;
	cout << "\nAnimal's Name" << setw(12) << ": " << d.animal_name;
	cout << "\nAnimal's Age" << setw(13) << ": " << d.age;
	cout << "\nAnimal's Height" << setw(10) << ": " << d.height;
	cout << "\nAnimal's Weight" << setw(10) << ": " << d.weight;
	cout << "\nAnimal's Entry Date" << setw(6) << ": " << d.date_admitted;
	cout << "\nAnimal's Date Of Birth" << setw(3) << ": " << d.dateofbirth;
	cout << "\nAnimal's Date of Death" << setw(3) << ": " << d.dateofdeath;
	cout << "\nAnimal's Cage No:" << setw(8) << ": " << d.cage_no;
}

void animal::modify_info(animal d, int number,int size)
{

	if (number == 1)
	{
		fstream myfile6("animal11.txt",ios::in|ios::out);
		animal d1 = d;
		d1.get_animal_scientific_name();
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
		fstream myfile6("animal11",ios::in|ios::out);
		animal d1 = d;
		d1.get_animal_common_name();
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
		fstream myfile6("animal11.txt", ios::in | ios::out);
		animal d1 = d;
		d1.get_animal_class();
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
		fstream myfile6("animal11.txt", ios::in | ios::out);
		animal d1 = d;
		d1.get_animal_name();
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
		fstream myfile6("animal11.txt", ios::in | ios::out);
		animal d1 = d;
		d1.get_age();
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
		fstream myfile6("animal11.txt", ios::in | ios::out);
		animal d1 = d;
		d1.get_height();
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
		fstream myfile6("animal11.txt", ios::in | ios::out);
		animal d1 = d;
		d1.get_weight();
		myfile6.seekp(size, ios::beg);
		myfile6.write((char*)&d1, sizeof(d1));
		system("PAUSE");
		system("CLS");
		cout << "\nData Successfully Modified\n";
		myfile6.close();
		cout << "\n";
		system("PAUSE");
	}
	else if (number == 8)
	{
		fstream myfile6("animal11.txt", ios::in | ios::out);
		animal d1 = d;
		d1.get_admitted_date();
		myfile6.seekp(size, ios::beg);
		myfile6.write((char*)&d1, sizeof(d1));
		system("PAUSE");
		system("CLS");
		cout << "\nData Successfully Modified\n";
		myfile6.close();
		cout << "\n";
		system("PAUSE");
	}
	else if (number == 9)
	{
		fstream myfile6("animal11.txt", ios::in | ios::out);
		animal d1 = d;
		d1.get_date_of_birth();
		myfile6.seekp(size, ios::beg);
		myfile6.write((char*)&d1, sizeof(d1));
		system("PAUSE");
		system("CLS");
		cout << "\nData Successfully Modified\n";
		myfile6.close();
		cout << "\n";
		system("PAUSE");
	}
	else if (number == 10)
	{
		fstream myfile6("animal11.txt", ios::in | ios::out);
		animal d1 = d;
		d1.get_date_of_death();
		myfile6.seekp(size, ios::beg);
		myfile6.write((char*)&d1, sizeof(d1));
		system("PAUSE");
		system("CLS");
		cout << "\nData Successfully Modified\n";
		myfile6.close();
		cout << "\n";
		system("PAUSE");
	}
	else if (number == 11)
	{
		fstream myfile6("animal11.txt", ios::in | ios::out);
		animal d1 = d;
		d1.get_cage_no();
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
