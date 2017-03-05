#pragma once


void correctLogIn(User user)
{
	system("cls");

	cout << "\n\t\tYou successfully logined !\n";
	cout << "\nIf you want to view all your advertisement , enter 1 ";
	cout << "\nIf you want to create new advertisement ,enter 2 ";
	cout << "\nIf you want to edit your advertisement  , enter 3 ";
	cout << "\nIf you want to return to the main menu , enter 4 ";
	cout << " \n Action : ";

	char action;
	cin >> action;

	bool checkCorrectInput = false;

	while (!checkCorrectInput)
	{
		switch (action)
		{
		case '1':
		{
			checkCorrectInput = true;
			// here we nned to call function which will open all advertisement  of this user with status 1	
			system("cls");				
			
			
			break;
		}
		case '2':
		{
			checkCorrectInput = true;
			putAdvertisementInformationIntoTxtFile(user);// this part is work
		
			break;
		}
		case '3':
		{
			checkCorrectInput = true;
			
			// here we need to edit advertisement  of this user with status 0
			break;

		}
		case '4':
		{
			checkCorrectInput = true;
			// it works
			break;

		}
		
		default:
		{
			cout << "enter action (1,2,3) : ";
			cin >> action;
		}
		}
	}


}
