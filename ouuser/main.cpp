#include <iostream>
#include <string.h>
#include "include/user.h"

using namespace std;

int main()
{
user *usr = new user(0, "luz0r", true);
    cout << usr->name << endl;
    return 0;
}
