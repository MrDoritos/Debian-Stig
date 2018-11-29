#include <string>

#ifndef USER_H
#define USER_H

using namespace std;
class user
{
    public:
        user(int id, string name, bool isroot);
        virtual ~user();
        int id;
        string name;
        bool isroot;
    protected:

    private:
};

#endif // USER_H
