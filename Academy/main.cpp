#include<iostream>
#include<string>
using namespace std;

class Human
{
	std::string last_name;
	std::string first_name;
	unsigned int age;
public:
	const string& get_last_name()const
	{
		return last_name;
	}
	const string& get_first_name()const
	{
		return first_name;
	}
	unsigned int get_age()const
	{
		return age;
	}
	void set_last_name(const string& last_name)
	{
		this->last_name = last_name;
	}
	void set_first_name(const string& first_name)
	{
		this->first_name = first_name;
	}
	void set_age(unsigned int age)
	{
		this->age = age;
	}

				//Constructors:
	Human(const string& last_name, const string& first_name, unsigned int age)
	{
		set_last_name(last_name);
		set_first_name(first_name);
		set_age(age);
		cout << "HConstructor:\t" << this << endl;
	}
	~Human()
	{
		cout << "HDestructor:\t" << this << endl;
	}
			//Methods:
	void print()const
	{
		cout << last_name << " " << first_name << " " << age << " лет.\n";
	}
};

class Student :public Human
{
	string speciality;
	string group;
	double rating;
public:
	const string& get_speciality()const
	{
		return speciality;
	}
	const string& get_group()const
	{
		return group;
	}
	double get_rating()const
	{
		return rating;
	}
	void set_speciality(const string& speciality)
	{
		this->speciality = speciality;
	}
	void set_group(const string& group)
	{
		this->group = group;
	}
	void set_rating(double rating)
	{
		this->rating = rating;
	}

			//Constructors:
	Student
	(
		const string& last_name, const string& first_name, unsigned int age,
		const string& speciality, const string& group, double rating
	):Human(last_name, first_name, age) //делегируем конструктор базового класса
	{
		set_speciality(speciality);
		set_group(group);
		set_rating(rating);
		cout << "SConstructor:\t" << this << endl;
	}
	~Student()
	{
		cout << "SDestructor:\t" << this << endl;
	}
				//Methods
	void print()const
	{
		Human::print();
		cout << "Специальность: " << speciality << " Группа: " << group << " Успеваемость: " << rating << endl;
	}
};

class Teacher :public Human
{
	string subject;		//предмет, который он ведет
	unsigned int experience; //преподавательский стаж
public:
	const string& get_subject()const
	{
		return subject;
	}
	unsigned int get_experience()const
	{
		return experience;
	}
	void set_subject(const string& subject)
	{
		this->subject = subject;
	}
	void set_experience(unsigned int experince)
	{
		this->experience = experience;
	}

	//Constructor:
	Teacher
	(
		const string& last_name, const string& first_name, unsigned int age,
		const string& subject, unsigned int experience
	) :Human(last_name, first_name, age) //делегируем конструктор базового класса
	{
		set_subject(subject);
		set_experience(experience);
		cout << "TConstructor:\t" << this << endl;
	}
	~Teacher()
	{
		cout << "TDestructor:\t" << this << endl;
	}

			//Methods:
	void print()const
	{
		Human::print();
		cout << "Предмет: " << subject << " Преподавательский стаж: " << experience << endl;
	}
};

class Graduated :public Student
{
	string main_theme_of_diploma;	//тема диплома
	string readiness;				//готовность написания
public:
	const string& get_main_theme_of_diploma()const
	{
		return main_theme_of_diploma;
	}
	const string& get_readiness()const
	{
		return readiness;
	}
	void set_main_theme_of_diploma(const string& main_theme_of_diploma)
	{
		this->main_theme_of_diploma = main_theme_of_diploma;
	}
	void set_readiness(const string& readiness)
	{
		this->readiness = readiness;
	}

			//Constructor
	Graduated
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
	~Graduated()
	{
		cout << "GConstructor:\t" << this << endl;
	}
			//Methods:
	void print()const
	{
		Student::print();
		cout << "Название диплома: " << main_theme_of_diploma << " Готовность: " << readiness << endl;
	}
};

void main()
{
	setlocale(LC_ALL, "ru");

	Human h("Montana", "Antonio", 35);
	h.print();


	Student s("Pinkman", "Jessi", 22, "Chemistry", "WW_01", 83);
	s.print();

	Teacher t("Walter", "White", 47, "Chemistry", 20);
	t.print();

	Graduated g("Pinkman", "Jessi", 22, "Chemistry", "WW_01", 83, "How to brew the purest methamphetamine", "91%");
	g.print();
}