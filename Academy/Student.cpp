#include"Student.h"
//#define DEBUG
const string& Student::get_speciality()const
{
	return speciality;
}
const string& Student::get_group()const
{
	return group;
}
double Student::get_rating()const
{
	return rating;
}
void Student::set_speciality(const string& speciality)
{
	this->speciality = speciality;
}
void Student::set_group(const string& group)
{
	this->group = group;
}
void Student::set_rating(double rating)
{
	this->rating = rating;
}

//Constructors:
Student::Student
(
	const string& last_name, const string& first_name, unsigned int age,
	const string& speciality, const string& group, double rating
) :Human(last_name, first_name, age) //делегируем конструктор базового класса
{
	set_speciality(speciality);
	set_group(group);
	set_rating(rating);
#ifdef DEBUG
	cout << "SConstructor:\t" << this << endl;
#endif // DEBUG

}
Student::~Student()
{
#ifdef DEBUG
	cout << "SDestructor:\t" << this << endl;
#endif // DEBUG

}
//Methods
void Student::print()const
{
	Human::print();
	cout << "Специальность: " << speciality << " Группа: " << group << " Успеваемость: " << rating << endl;
}

ostream& operator<<(ostream& os, const Student& obj)
{
	os << (Human)obj;
	return os << " , спец:" << obj.get_speciality() << ", группа:" << obj.get_group() << ", рейтинг:" << obj.get_rating();
}