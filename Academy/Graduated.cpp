#include"Graduated.h"
const string& Graduated::get_main_theme_of_diploma()const
{
	return main_theme_of_diploma;
}
const string& Graduated::get_readiness()const
{
	return readiness;
}
void Graduated::set_main_theme_of_diploma(const string& main_theme_of_diploma)
{
	this->main_theme_of_diploma = main_theme_of_diploma;
}
void Graduated::set_readiness(const string& readiness)
{
	this->readiness = readiness;
}

//Constructor
Graduated::Graduated
(
	const string& last_name, const string& first_name, unsigned int age,
	const string& speciality, const string& group, double rating,
	const string& main_theme_of_diploma, const string& readiness
) :Student(last_name, first_name, age, speciality, group, rating)  //делегируем конструктор базового класса
{
	set_main_theme_of_diploma(main_theme_of_diploma);
	set_readiness(readiness);
	cout << "GConstructor:\t" << this << endl;
}
Graduated::~Graduated()
{
	cout << "GConstructor:\t" << this << endl;
}
//Methods:
void Graduated::print()const
{
	Student::print();
	cout << "Название диплома: " << main_theme_of_diploma << " Готовность: " << readiness << endl;
}