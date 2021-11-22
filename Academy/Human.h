#pragma once
#include<iostream>
#include<string>
using namespace std;

//#define INHERITANCE

//////////////////////
//��ڨ������� ������//
/////////////////////
class Human
{
protected:
	std::string last_name;
	std::string first_name;
	unsigned int age;
public:
	const string& get_last_name()const;
	const string& get_first_name()const;
	unsigned int get_age()const;
	void set_last_name(const string& last_name);
	void set_first_name(const string& first_name);
	void set_age(unsigned int age);

	//Constructors:
	Human(const string& last_name, const string& first_name, unsigned int age);
	virtual ~Human();
	//Methods:
	virtual void print()const;
};

///////////////////////////
//����� ���������� ������//
///////////////////////////