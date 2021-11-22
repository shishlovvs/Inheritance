#pragma once
#include"Student.h"
class Graduated :public Student
{
	string main_theme_of_diploma;	//тема диплома
	string readiness;				//готовность написания
public:
	const string& get_main_theme_of_diploma()const;
	const string& get_readiness()const;
	void set_main_theme_of_diploma(const string& main_theme_of_diploma);
	void set_readiness(const string& readiness);

	//Constructor
	Graduated
	(
		const string& last_name, const string& first_name, unsigned int age,
		const string& speciality, const string& group, double rating,
		const string& main_theme_of_diploma, const string& readiness
	);
	~Graduated();
	//Methods:
	void print()const;
};