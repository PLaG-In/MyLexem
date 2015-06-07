#include "stdafx.h"
#include "Loader.h"


CLoader::CLoader(string const & operatorsAssignPath,
	string const & operatorsNonAssignPath,
	string const & separatorsPath,
	string const & variblesPath)
{
	LoadFromFile(operatorsAssignPath, OperatorsAssign);
	LoadFromFile(operatorsNonAssignPath, OperatorsNonAssign);
	LoadFromFile(separatorsPath, Separators);
	LoadFromFile(variblesPath, Varibles);
}


CLoader::~CLoader()
{
}

void CLoader::LoadFromFile(string const &path,
	typeLexem type)
{
	ifstream file;
	try
	{
		file.open(path);
	}
	catch (exception &e)
	{
		e.what();
		exit(0);
	}

	while (!file.eof())
	{
		string view, lexem;
		file >> view >> lexem;

		switch (type)
		{
		case CLoader::OperatorsAssign:
			m_operatorsAssign[view] = lexem;
			break;
		case CLoader::OperatorsNonAssign:
			m_operatorsNonAssign[view] = lexem;
			break;
		case CLoader::Separators:
			m_separators[view] = lexem;
			break;
		case CLoader::Varibles:
			m_varibles[view] = lexem;
			break;
		}
	}
}