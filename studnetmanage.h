#pragma once
class students{
public:
	students* next;
	CString name, lastname;
	float score;
	void addstudnet(CString,CString,float);
	void searchstudent(CString);
	void deletestudent(CString);
	students *sort(); //new
	students()
	{
		next = nullptr;
	}
};