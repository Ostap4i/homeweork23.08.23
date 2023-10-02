#pragma once
class Student : public Person
{
public:
	string* students1;
	string* students2;
	string* students3;
	string* students4;
	string* students5;
	string* students6;


	Student(int students) {
		this->students1 = new string[5];

		int students2[] = { 8,10,8,8,9 };
		int students3[] = { 8,6,10,10,9 };
		int students4[] = { 10,11,12,11,10};
		int students5[] = { 9,7,8,10,7 };
		int students6[5] = { 11,12,11,12,12};


	}


};

