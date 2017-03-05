#pragma once

#include<vector>

bool ifExist(User myUser);

void putInformationIntoTxtFile(User user);

void getAllUsersFromFile(vector<User> &passAndEmailOfAllUsers);


bool ifExist(User myUser)
{
	ifstream emailAndPassword("user password and email.txt", ios_base::in);
	if (!emailAndPassword.is_open())
	{
		return false;
	}
	else{
		vector<User> passAndEmailOfAllUsers;// ������ ����� �� �����/ for log and pas
		bool ifExist = false;

		string s;
		int lineNumber = 0;
		int vectorIterator = 0;
		//��������� �� ����� � ����� ��������� ������������(�� �������)
		User obj;// � ��� ���� �������� ���� � ����� � ���� ���� �������� � ������, ����� �� ���������� �����/
		//it is a temporary variable for log and pass , we just put and save it at our vector  

		while (!emailAndPassword.eof())
		{
			getline(emailAndPassword, s);

			if (lineNumber != 0)// �� ����� ������ � ���� �����/first line at file is empty
			{
				if (lineNumber % 2 != 0)// �� �� ������ �������� �����/email 
				{
					obj.setEmail(s);
				}
				else// ���� �� ��� ����� /pass
				{
					obj.setPassword(s);
				}

				if (lineNumber % 2 == 0)
				{
					passAndEmailOfAllUsers.push_back(obj);
				}

			}
			lineNumber++;
		}
		for (int i = 0; i < passAndEmailOfAllUsers.size(); i++)
		{
			if (myUser.getEmail() == passAndEmailOfAllUsers[i].getEmail())
			{
				ifExist = true;
				break;
			}
		}
		return ifExist;
	}
}




void putInformationIntoTxtFile(User user)
{

	

while (ifExist(user))
{
cout << "Enter another email\n";
user.inputInformationAboutUser();
}

string s;

ofstream putInformationIntoFile("user password and email.txt", ios_base::app);

if (!putInformationIntoFile.is_open())
{
cout << "problems with RegistrationAtOurSystem.h ";
}
else{
	putInformationIntoFile << "\n";
	putInformationIntoFile << user.getEmail();
	putInformationIntoFile << "\n";
	putInformationIntoFile << user.getPassword();
}
putInformationIntoFile.close();

}


void getAllUsersFromFile(vector<User> &passAndEmailOfAllUsers)
{
	// ������ ����� �� �����/ for log and pas

	ifstream emailAndPassword;
	emailAndPassword.open("../Lnu/user password and email.txt");
	if (!emailAndPassword.is_open())
	{

		cout << "\tData base is empty ...";
		Sleep(1400);
		
		
	}
	else{
		string s;
		int lineNumber = 0;
		int vectorIterator = 0;

		User obj;

		while (!emailAndPassword.eof())
		{
			getline(emailAndPassword, s);

			if (lineNumber != 0)// �� ����� ������ � ���� �����/first line at file is empty
			{
				if (lineNumber % 2 != 0)// �� �� ������ �������� �����/email 
				{
					obj.setEmail(s);
				}
				else// ���� �� ��� ����� /pass
				{
					obj.setPassword(s);
				}

				if (lineNumber % 2 == 0)
				{
					passAndEmailOfAllUsers.push_back(obj);
				}

			}
			lineNumber++;

		}
	}
	
	
}