 #pragma once
#include<vector>
void putAdvertisementInformationIntoTxtFile(User &obj)
{
	Advertisement advertisement;
	advertisement.input();
	ofstream putAdvertisementInformationIntoFile("advertisements.txt", ios_base::app);

	advertisement.setEmail(obj.getEmail());

	putAdvertisementInformationIntoFile << "\n";
	putAdvertisementInformationIntoFile << advertisement.getTitle();
	putAdvertisementInformationIntoFile << "\n";
	putAdvertisementInformationIntoFile << advertisement.getMainText();
	putAdvertisementInformationIntoFile << "\n";
	putAdvertisementInformationIntoFile << advertisement.getStatus();
	putAdvertisementInformationIntoFile << "\n";
	putAdvertisementInformationIntoFile << advertisement.getEmail();
	putAdvertisementInformationIntoFile.close();

}



void getAllAdvertisementWith1FromFile(vector<Advertisement> &allAdvertisementWithStatus1)
{
	

	ifstream advertisement;
	advertisement.open("../Lnu/advertisements.txt");
	if (!advertisement.is_open())
	{
		cout << "\ndata base is empty!!! ...";
		Sleep(1400);
	}
	else{
		string s;
		int lineNumber = 0;
		
	Advertisement obj;

	bool checkStatus = false;

		while (!advertisement.eof())
		{
			
			getline(advertisement, s);

			if (lineNumber != 0)// бо перша строка в файлі пуста/first line at file is empty
			{
				if (lineNumber % 4 == 1) 
				{
					obj.setTitle(s);

				}
				if (lineNumber % 4 == 2)
				{
					obj.setMainText(s);

				}

				if (lineNumber %4==3)
				{
					if (s == "1")
					{
						obj.setStatus(1);
						checkStatus = true;
					}
					else
					{
						checkStatus = false;
					}
				}
				if (lineNumber%4 == 0  && checkStatus==1 )
				{
					
					obj.setEmail(s);
					allAdvertisementWithStatus1.push_back(obj);
					
			
				}			
					
				
			}
			lineNumber++;

		
		
		}	
	}


}
