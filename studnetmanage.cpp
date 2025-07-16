#include "pch.h"
#include <iostream>
#include <string>
#include "studnetmanage.h"
using namespace std;
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
void students::sort()
{
    bool swapped;
    do{
        swapped = false;
        students* current = this;
        while (current->next != NULL)
        {
            students* nextNode = current->next;
            if (current->lastname > nextNode->lastname)
            {
                swap(current->name, nextNode->name);
                swap(current->lastname, nextNode->lastname);
                swap(current->score, nextNode->score);
                swapped = true;
            }
            current = current->next;
        }
    }while (swapped);
}
