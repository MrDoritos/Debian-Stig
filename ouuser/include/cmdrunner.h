#ifndef CMDRUNNER_H
#define CMDRUNNER_H


class cmdrunner
{
    public:
        cmdrunner(string *name, string *args);
        virtual ~cmdrunner();
        int run();
        int get_errorcode();
        string* get_commandname();
        string* get_args();
        string* get_stderr();
        string* get_stdout();
    protected:
    private:
        int _errorcode;
        string *_commandname;
        string *_args;
        string *_stdout;
        string *_stderr;
};

#endif // CMDRUNNER_H
