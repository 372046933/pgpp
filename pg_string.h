#pragma once
#include <libpq-fe.h>
#include <string>

class PGString {
public:
    PGString(PGresult* result, const std::string& str);
    operator double();
    operator int();
    operator unsigned int();
    operator long();
    operator unsigned long();
    operator std::string ();
private:
    PGresult* result_ = nullptr;
    std::string str_;
};
