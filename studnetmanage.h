#pragma once
class students{
public:
	students* next;
	CString name, lastname;
	float score;
	void addstudnet(CString,CString,float);
	void searchstudent(CString);
	void deletestudent(CString);

	students()
	{
		next = nullptr;
	}
};