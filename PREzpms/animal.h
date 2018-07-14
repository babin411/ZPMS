#ifndef ANIMAL_H
#define ANIMAL_H

class animal
{
    char scientific_name[30];
    char common_name[30];
    char classes[20];
    char animal_name[30];
    int animal_id;
    int age;
    int weight;
    int height;
    char date_admitted[20];
    char dateofbirth[20];
    char dateofdeath[20];
    int cage_no;

public:
    animal();
    virtual ~animal();
    void get_info();
    int get_animal_id();
    void get_animal_scientific_name();
    void get_animal_name();
    void get_animal_common_name();
    void get_animal_class();
    void get_weight();
    void get_age();
    void get_height();
    void get_admitted_date();
    void get_date_of_birth();
    void get_date_of_death();
    void get_cage_no();
    void assign_animal_to_staff(animal p, int size);
    void display_all(animal d);
	void display_info(animal d);
	void modify_info(animal d, int number,int size);

};

#endif // ANIMAL_H
