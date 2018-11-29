
#include <string.h>
#ifndef USER_H
#define USER_H


class User
{
    public:
        User();
        virtual ~User();
        int id;
        string name;
        bool root;
    protected:

    private:
};

#endif // USER_H
