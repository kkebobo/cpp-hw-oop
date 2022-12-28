#pragma once
class MyString
{
	char* str;
	int l;
public:
	MyString();
	MyString(int size);
	MyString(const char* st);
	~MyString();


	void MyStrcpy(MyString& obj); //копирование строк
	void Print();
	bool MyStrStr(const char* str); 
	int MyChr(char c); 
	int MyStrLen();
	void MyStrCat(MyString& b); 
	void MyDelChr(char c);  
	int MyStrCmp(MyString& b);
};

