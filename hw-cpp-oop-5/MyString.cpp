#include "MyString.h"
#include <iostream>


MyString::MyString()
{
	l = 80;
	str = new char[l];
}


MyString::MyString(int size)
{
	l = size;
	str = new char[l];
}


MyString::MyString(const char* st)
{
	l = strlen(st);
	str = new char[l + 1];
	strcpy_s(str, l + 1, st);
}


MyString::~MyString()
{
	delete[] str;
}


void MyString::MyStrcpy(MyString& obj)
{
	if (l != 0)
		delete[] str;


	l = obj.l;
	str = new char[obj.l + 1];
	strcpy_s(str, l + 1, obj.str);
}


void MyString::Print()
{
	std::cout << str << std::endl;
}


bool MyString::MyStrStr(const char* st)
{
	int j = 0;
	for (int i = 0; i < l; i++)
	{
		if (str[i] == st[j])
		{
			j++;
		}
		else
		{
			j = 0;
		}


		if (j == strlen(st))
		{
			return true;
		}
	}
	return false;
}


int MyString::MyChr(char c)
{
	int i = 0;
	bool isfound = false;
	for (; i < l; i++)
	{
		if (str[i] == c)
		{
			isfound = true;
			break;
		}
	}


	if (!isfound)
	{
		std::cout << -1;
	}
	else
		std::cout << "Index of \"" << c << "\" is " << i << std::endl;
}


int MyString::MyStrLen()
{
	return strlen(str);
}


void MyString::MyStrCat(MyString& b)
{
	char* newstr;
	int j = 0;
	newstr = new char[l + b.l + 1];
	strcpy_s(newstr, l + b.l + 1, str);


	for (int i = l; i < l + b.l; i++)
	{
		newstr[i] = b.str[j++];
	}
}


void MyString::MyDelChr(char c)
{
	char* newstr;
	newstr = new char[l];
	int j = 0;


	for (int i = 0; i < l; i++)
	{
		if (str[i] == c)
		{
			j++;
		}
		else
		{
			newstr[i - j] = str[i];
		}
	}
}


int MyString::MyStrCmp(MyString& b)
{
	if (l > b.l)
		return 1;
	else if (l < b.l)
		return -1;
	else
		return 0;
}