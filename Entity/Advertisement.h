#include <iostream>
#include<string>
using namespace std;

class Advertisement
{
private:
	string title;
	string mainText;
	bool status;
	string email;
public:
	Advertisement();
	
	Advertisement(string title, string mainText, bool status , string email);

	Advertisement(const Advertisement&x) ;
	
	string getTitle();
	
	string getMainText();
	
	void setStatus(bool status);
	
	bool getStatus();
	
	string getEmail();
	
	void setEmail(string email);

	void setMainText(string mainText);
	
	void setTitle(string title);

	void input();
	
	void print();
};