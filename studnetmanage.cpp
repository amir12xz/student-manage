#include "pch.h"
#include <iostream>
#include <string>
#include "studnetmanage.h"
students *students::addstudnet(CString name, CString lastname, float scor)
{
	students* newnode = new students;
	newnode->name = name;
	newnode->lastname = lastname;
	newnode->score = scor;
    if (this == NULL)
    {
       return newnode;
    }
	if (next == nullptr)
	{
		next = newnode;
	}
	else
	{
		students* temp = next;
		while (temp->next!=nullptr)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
    return this;
}
void students::searchstudent(CString name)
{
	CString massage;
	students* temp = next;
	while (temp != nullptr)
	{
		if (temp->name.CompareNoCase(name) == 0)
		{
			massage.Format(_T("student found:\nNAME:%s\nLAST NAME:%s\nSCore:%.2f"), temp->name, temp->lastname, temp->score);
			AfxMessageBox(massage);
			return;
		}
		temp = temp->next;
	}
	AfxMessageBox(_T("not found"));
}
void students::deletestudent(CString name)
{
    students* current = this;
    students* previous = nullptr;
    while (current != nullptr)
    {
        if (current->name ==name)
        {
            if (previous == nullptr)
            {
                if (current->next != nullptr)
                {
                    students* temp = current->next;
                    current->name = temp->name;
                    current->lastname = temp->lastname;
                    current->score = temp->score;
                    current->next = temp->next;
                    delete temp;
                    AfxMessageBox(_T("deleted."));
                }
                else
                {
                    AfxMessageBox(_T("error"));
                }
            }
            else
            {
                previous->next = current->next;
                delete current;
                AfxMessageBox(_T("deleted"));
            }
            return;
        }

        previous = current;
        current = current->next;
    }

    AfxMessageBox(_T("not found"));
}
students* students::sort()  //new
{
    students * pre = this;
    students* temp = this;
    students* head = this;
    students* temp_next = this->next;
    if (temp_next != NULL && temp->name >temp_next->name )
    {

        head = temp_next;
        temp->next = temp_next->next;
        temp_next->next = this;
        temp_next = temp;
        temp = this->next;
        
    }
    while (temp_next != NULL)
    {
        if (temp->name > temp_next->name)
        {
            auto t = temp_next->next;
            pre->next = temp_next;
            temp_next->next = temp;
            temp->next = t;
            pre = temp_next;
            temp = t;
            temp_next = temp;
            continue;
        }
        pre = temp;
        temp = temp_next;
        temp_next = temp_next->next;
    }
    return head;
}