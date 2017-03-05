#include <iostream>
#include <fstream> 
#include<windows.h> 
#include<vector>
#include<string>

using namespace std;

#include"../Entity/User.h"

#include"../DTO/DtoUser.h"

#include"../Entity/Advertisement.h"

#include"../DTO/DtoAdvertisement.h"

#include"../AUTH/CorrectLogIn.h"

#include"../AUTH/Registration.h"

#include"../AUTH/ViewAllBeforeLogIn.h"

#include"../AUTH/LogIn.h"

#include"../AUTH/Exit.h"

#include"../AUTH/MainMenu.h"

int main()
{
	cout << "\t\t\tHello \n";
	mainMenu();
	return 0;
}