#include"Human.h"
#include"Student.h"
#include"Teacher.h"
#include"Graduated.h"
#include<fstream>
//---------------------------------------------------------------------------------------//

void main()
{
	setlocale(LC_ALL, "ru");
#ifdef INHERITANCE

	Human h("Montana", "Antonio", 35);
	h.print();


	Student s("Pinkman", "Jessi", 22, "Chemistry", "WW_01", 83);
	s.print();

	Teacher t("Walter", "White", 47, "Chemistry", 20);
	t.print();

	Graduated g("Pinkman", "Jessi", 22, "Chemistry", "WW_01", 83, "How to brew the purest methamphetamine", "91%");
	g.print();
#endif // INHERITANCE

	

	//Generalization:
	Human* group[] =
	{
		new Student("Pinkman", "Jessi", 22, "Chemistry", "WW_01", 83),			//upcast
		new Student("Vercetti", "Tommy", 30, "Criminal","Vice",90),				//upcast
		new Teacher("Walter", "White", 47, "Chemistry", 20),					//upcast
		new Student("Diaz","Ricardo",55,"Weapons distribution", "Vice", 92),	//upcast
		new Graduated("Pinkman", "Jessi", 22, "Chemistry", "WW_01", 83, 
		"How to brew the purest methamphetamine", "91%"),						//upcast
		new Teacher("Einstein","Albert",143,"Astronomy",120)					//upcast
	};

	/*for (int i = 0; i < sizeof(group) / sizeof(Human*); i++)
	{
		cout << "\n---------------------------------\n";
		group[i]->print();
	}
	cout << "\n---------------------------------\n";

	for (int i = 0; i < sizeof(group)/sizeof(Human*); i++)
	{
		delete[] group[i];
	}*/

	ofstream fout("FileGroup.txt", std::ios_base::app);		//создаем и открываем поток
	for (int i = 0; i < sizeof(group) / sizeof(Human*); i++)
	{
		cout << "\n---------------------------------\n";
		group[i]->print();
	}
	//fout << sizeof(group) << endl;
	for (int i = 0; i < sizeof(group) / sizeof(Human*); i++)
	{
		delete[] group[i];
	}
	fout.close();
	system("notepad FileGroup.txt");

	//const int SIZE = 256;
	//char buffer[SIZE] = {};

	//ifstream fin("FileGroup.txt");
	//if (fin.is_open())
	//{
	//	while (!fin.eof())			//пока не конец файл(end of file)
	//	{
	//		//fin >> buffer;
	//		fin.getline(buffer, SIZE);
	//		cout << buffer << endl;
	//	}
	//}
	//else {
	//	cerr << "File not found" << endl;
	//}
	//fin.close();
}