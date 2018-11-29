#include <string.h>
#include "../include/user.h"

user::user(int id, string name, bool isroot)
{
this->id = id;
this->name = name;
this->isroot = isroot;
}

user::~user()
{
    //dtor
}
