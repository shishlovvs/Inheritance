#include"Human.h"
//////////////////////
//����������� ������//
/////////////////////

//#define DEBUG

const string& Human::get_last_name()const
{
	return last_name;
}
const string& Human::get_first_name()const
{
	return first_name;
}
unsigned int Human::get_age()const
{
	return age;
}
void Human::set_last_name(const string& last_name)
{
	this->last_name = last_name;
}
void Human::set_first_name(const string& first_name)
{
	this->first_name = first_name;
}
void Human::set_age(unsigned int age)
{
	this->age = age;
}

//Constructors:
Human::Human(const string& last_name, const string& first_name, unsigned int age)
{
	set_last_name(last_name);
	set_first_name(first_name);
	set_age(age);
#ifdef DEBUG
	cout << "HConstructor:\t" << this << endl;
#endif // DEBUG

}
/*virtual*/ Human::~Human()
{
#ifdef DEBUG
	cout << "HDestructor:\t" << this << endl;
#endif // DEBUG

}
//Methods:
/*virtual*/ void Human::print()const
{
	cout << last_name << " " << first_name << " " << age << " ���.\n";
}

ostream& operator<<(ostream& os, const Human& obj)
{
	return os << obj.get_last_name() << " " << obj.get_first_name() << " " << obj.get_age() << " ���.";
}
/////////////////////////////
//����� ����������� ������//
////////////////////////////