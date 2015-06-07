#pragma once
#include "stdafx.h"
#include <string>
#include <iostream>
#include <fstream>
#include <map>
#include <memory>

using namespace std;

class CLoader
{
public:
	enum typeLexem
	{
		OperatorsAssign = 1,
		OperatorsNonAssign = 2,
		Separators = 3,
		Varibles = 4
	};

	CLoader(string const & operatorsAssignPath,
		string const & operatorsNonAssignPath,
		string const & separatorsPath,
		string const & variblesPath);

	~CLoader();
	
	map<string, string> m_operatorsAssign;
	map<string, string> m_operatorsNonAssign;
	map<string, string> m_separators;
	map<string, string> m_varibles;

private:

	void LoadFromFile(string const &path,
		typeLexem type);
};

