#pragma once
#include <string>
class BasePassKey
{
protected:
	std::string FIO; //ФИО
	std::string ID; //АЙДИ
	std::string Org; //Орг
public:
	BasePassKey(std::string OIF, std::string Gro);
	virtual bool Pass();
};

