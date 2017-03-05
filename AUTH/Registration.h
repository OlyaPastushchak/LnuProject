#pragma once 

void registration()
{
	system("cls");
	cout << " \t\t\t Welcome! \n" << "\t You need to fill a few fields to create an account \n ";
		
		User user;
		user.inputInformationAboutUser();
		putInformationIntoTxtFile(user);
		cout << " \n \t\t Registration successfully completed ! \n";
	Sleep(3000); //затримка на 3 секунди

}
