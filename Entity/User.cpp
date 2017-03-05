#pragma once

#include"../Entity/User.h"

User::User()
{
	email = "";
	password = "";
}

User::User(string email, string password)
{
	this->email = email;
	this->password = password;

}

string User::getEmail()
{
	return email;
}

string User::getPassword()
{
	return password;
}

void User::setEmail(string s)
{
	this->email = s;
}

void User::setPassword(string s)
{
	this->password = s;
}

void User::inputInformationAboutUser()
{
	cout << "email : ";
	cin >> email;
	cout << "password : ";
	cin >> password;
}