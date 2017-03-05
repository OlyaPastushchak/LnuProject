#pragma once
void mainMenu()
{
	system("cls");
	cout << " \tif you want to create a new profile ,  enter 1 . \n ";
	cout << " \tif you want to log in ,  enter 2 . \n ";
	cout << " \tif you want to view all adverrisement ,  enter 3 . \n ";
	cout << " \tif you want to exit ,  enter 4 . \n ";
	cout << "  Action : ";
	char symbol;
	vector<char> SymbolsList;
	bool checkCorrectInput = false;
	while (!checkCorrectInput)
	{
		do
		{
			cin.get(symbol);

			SymbolsList.push_back(symbol);
		} while (symbol != '\n');
	
		if (SymbolsList.size() == 2)
		{
			symbol = SymbolsList[0];
		}
		
		SymbolsList.clear();

		switch (symbol)
		{
		case '1':
		{
			checkCorrectInput = true;
			registration();
			mainMenu();

		}
		case '2':
		{
			checkCorrectInput = true;

			system("cls");
			cout << " \t\t\t Log in \n ";
			User user;
			string pass, email; 
			cout << " enter your email  : \n";
			cout << "\t";
			cin >> email;
			cout << " enter your password : \n\t";
			cin >> pass;


			
			if (checkIfCorrect(email, pass) == true)
			{
				User user(email, pass);
				correctLogIn(user);
			}
			else
			{
				
				cout << "\n you will  be returned to main menu after 2 sec .";
				Sleep(2000);
			}
			
			mainMenu();
			break;
		}
		case '3':
		{
			checkCorrectInput = true;
			viewAllBeforeLogIn();
			mainMenu();
			break;
		}

		case '4':
		{
			checkCorrectInput = true;
			exit();
			break;
		}
		default:

		{
			cout << "enter action (1,2,3,4) : ";
			}


		}
	}
}