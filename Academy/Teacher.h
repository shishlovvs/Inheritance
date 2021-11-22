#pragma once
#include"Human.h"
class Teacher :public Human
{
	string subject;		//�������, ������� �� �����
	unsigned int experience; //����������������� ����
public:
	const string& get_subject()const;
	unsigned int get_experience()const;
	void set_subject(const string& subject);
	void set_experience(unsigned int experience);

	//Constructor:
	Teacher
	(
		const string& last_name, const string& first_name, unsigned int age,
		const string& subject, unsigned int experience
	);
	~Teacher();

	//Methods:
	void print()const;
};