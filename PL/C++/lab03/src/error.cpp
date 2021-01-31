#include "error.h"

Index_Error::Index_Error(const char* message)
{
	this->message = _strdup(message);
}

Index_Error::~Index_Error()
{
	delete this->message;
}

char* Index_Error::get_message()
{
	return message;
}