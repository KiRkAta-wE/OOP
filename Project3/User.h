#ifndef USER
#define USER
#include <string>
using namespace std;

class User
{
private:
	
	int id;
	string name;
	string password;
public:
	static int counter;
	User(const char* name, const char* password);
	void DeformPass();
	static int comparepass(const char* pass1, const char* pass2);
	int getid()
	{
		return id;
	}
	string getpass()
	{
		return password;
	}
	
};


#endif // !USER