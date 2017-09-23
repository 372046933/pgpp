#include "./pg_string.h"
PGString::PGString(PGresult* result, const std::string& str) : result_(result), str_(str)
{
}

PGString::operator double()
{
    try {
        return std::stod(str_);
    } catch(std::exception& e) {
        return 0;
    }
}

PGString::operator int()
{
    try {
        return std::stoi(str_);
    } catch(std::exception& e) {
        return 0;
    }
}

PGString::operator unsigned int()
{
    try {
        return std::stoul(str_);
    } catch(std::exception& e) {
        return 0;
    }
}

PGString::operator long()
{
    try {
        return std::stol(str_);
    } catch(std::exception& e) {
        return 0;
    }
}

PGString::operator unsigned long()
{
    try {
        return std::stoul(str_);
    } catch(std::exception& e) {
        return 0;
    }
}

PGString::operator std::string()
{
    return str_;
}
//gzrd_Lib_CPP_Version_ID--start
#ifndef GZRD_SVN_ATTR
#define GZRD_SVN_ATTR "0"
#endif
static char gzrd_Lib_CPP_Version_ID[] __attribute__((used))="$HeadURL$ $Id$ " GZRD_SVN_ATTR "__file__";
// gzrd_Lib_CPP_Version_ID--end

