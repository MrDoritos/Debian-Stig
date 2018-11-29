#include "cmdrunner.h"
#include <string>
#include <stdio.h>

cmdrunner::cmdrunner(string* name, string* args)
{
this->_commandname = name;
this->_args = args;
_stderr = new string();
_stdout = new string();
_errorcode = 0;
}

int cmdrunner::run()
{
    FILE *handle = popen(name, "r");
}

cmdrunner::get_errorcode() {
return _errorcode;
}

cmdrunner::get_commandname() {
return _commandname;
}

cmdrunner::~cmdrunner()
{
    //dtor
}
