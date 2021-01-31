#ifndef ERROR_H
#define ERROR_H
#include <iostream>

class Index_Error
{
private:
	char* message;
public:
	Index_Error(const char* message);
	~Index_Error();
	char* get_message();
};
#endif // !ERROR_H
