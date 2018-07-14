#ifndef STAFF_H
#define STAFF_H


class staff
{
    int staff_id;
    int code;
	char fname[20];
	char mname[20];
	char lname[20];
	char gender[10];
	int age;
	char qualification[10];
	char specialization[10];
	int experience;
	char state[50];
	char city[50];
	long long phone_no;
public:
    staff();
    virtual ~staff();
	int get_staff_id();
	void get_info();
	void get_fname();
	void get_mname();
	void get_lname();
	void get_gender();
	void get_age();
	//void get_code();
	void get_qualification();
	void get_specialization();
	void get_experience();
	void get_state();
	void get_city();
	void get_phone_no();
	void display_all(staff d);
	void display_info(staff d);
	void modify_info(staff d, int number,int size);

};

#endif // STAFF_H
