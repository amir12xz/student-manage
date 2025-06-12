#pragma once
class students{
public:
	students* next;
	CString name, lastname;
	float score;
	students * addstudnet(CString,CString,float);
	void searchstudent(CString);
	void deletestudent(CString);
	students* sort();
	students()
	{
		next = nullptr;
	}
};