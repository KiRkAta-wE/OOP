#ifndef STRING
#define STRING

class String
{
private:
	char* str;
public:
	String();
	String(const String& other);
	String(const char* str);
	String& operator= (const String& other);
	String& operator= (const char* str);
	~String();

	void copy(const char* str);
	void print();
};

#endif 