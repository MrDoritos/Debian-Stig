#include "User.h"
#include <string.h>

User::User(bool isroot, string name, int id)
{
this->id = id;
this->root = isroot;
this->name = name;
}

User::~User()
{
    //dtor
}
