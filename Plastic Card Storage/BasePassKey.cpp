#include "BasePassKey.h"
#include <cstdlib>
#include <ctime>

BasePassKey::BasePassKey(std::string OIF, std::string Gro)
{
	FIO = OIF;
    Org = Gro;
    ID = "";
    for (int i = 0; i < 10; ++i)
    {
        int ra = rand() % 10;
        ID += std::to_string(ra);
    }
}
bool BasePassKey::Pass() { return true; }