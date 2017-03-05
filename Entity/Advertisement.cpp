#pragma once

#include"../Entity/Advertisement.h"
#include<windows.h> 
#include <vector>

Advertisement::Advertisement()
{
	this->title = "";
	this->mainText = "";
	this->status = 0;
	this->email = "";
}

Advertisement::Advertisement(string title, string mainText, bool status , string email ) 
{
	this->title = title;
	this->mainText = mainText;
	this->status = status;
	this->email = email;
}

Advertisement::Advertisement(const Advertisement&x) 
{
	this->title = x.title;
	this->mainText = x.mainText;
	this->status = x.status;
	this->email = x.email;
}

string Advertisement::getTitle()
{
	return this->title;
}

string Advertisement::getMainText()
{
	return this->mainText;
}

void Advertisement::setStatus(bool status)
{
	this->status = status;
}

bool Advertisement::getStatus()
{
	return this->status;
}

string Advertisement::getEmail()
{
	return this->email;
}

void Advertisement::setEmail(string email)
{
	this->email = email;
}

void Advertisement::setTitle(string title)
{
	this->title = title;
}

void Advertisement::setMainText(string mainText)
{
	this->mainText = mainText;
}


void Advertisement::input()
{
	system("cls");
	cout << " \t\t\t Welcome! \n" << "\t Here you can create an advertisement \n ";
			cout << "enter title: \n";
			cin >> title;
			cout << "enter advertisement : \n";
			
			cin.clear();

			_flushall();
			
			getline(cin, this->mainText);
			
			cout << "Do you want to save or send your advertisement to server? \n enter 1 or 2 :\n";
			
			cout << "Action :  ";
			char action;
			cin >> action;
			    switch (action)
			    {
			    case '1':
			    {
				    this->status = 0;
				    break;
			    }
			    case '2':
			    {
				    this->status = 1;
				    break;
			    }
			    default:
			    {
				    cout << "\n You will be retnrned to previos page \n";

			    }
			Sleep(3000);
			break;
			}

	
}


void Advertisement::print()
{
	cout << "\n_________________________________\n";
	cout <<"\t\t "<< this->title << "\n";
	cout << this->mainText << "\n";
//	cout << "\n" << this->status<<"\n";
	cout <<this-> email<<"\n" ;
	
}
