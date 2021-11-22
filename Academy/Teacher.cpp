#include"Teacher.h"
const string& Teacher::get_subject()const
{
	return subject;
}
unsigned int Teacher::get_experience()const
{
	return experience;
}
void Teacher::set_subject(const string& subject)
{
	this->subject = subject;
}
void Teacher::set_experience(unsigned int experience)
{
	this->experience = experience;
}

//Constructor:
Teacher::Teacher
(
	const string& last_name, const string& first_name, unsigned int age,
	const string& subject, unsigned int experience
) :Human(last_name, first_name, age) //делегируем конструктор базового класса
{
	set_subject(subject);
	set_experience(experience);
	cout << "TConstructor:\t" << this << endl;
}
Teacher::~Teacher()
{
	cout << "TDestructor:\t" << this << endl;
}

//Methods:
void Teacher::print()const
{
	Human::print();
	cout << "Предмет: " << subject << " Преподавательский стаж: " << experience << endl;
}