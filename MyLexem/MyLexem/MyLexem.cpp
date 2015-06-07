// MyLexem.cpp: определяет точку входа для консольного приложения.
//
#pragma once
#include "stdafx.h"
#include <string>
#include <iostream>
#include <map>
#include <queue>
#include <memory>

using namespace std;

struct Token
{
	int strNumber;
	shared_ptr<map<string, string>> ptrToMap;
	string value;
};


int _tmain(int argc, _TCHAR* argv[])
{
	queue<Token> tokens;

	return 0;
}

