#include <libpq-fe.h>
#include "./pg_row.h"

PGRow::PGRow(PGresult* result, int row) : result_(result), row_(row)
{
}

PGString PGRow::operator[](const char *column_name)
{
    int j = PQfnumber(result_, column_name);
    if (j == -1 || row_ == -1) {
        return PGString(result_, "");
    }
    std::string str = PQgetvalue(result_, row_, j);
    return PGString(result_, str);
}

PGString PGRow::operator[](int column)
{
    if (column >= PQnfields(result_) || row_ == -1) {
        return PGString(result_, "");
    }

    return PGString(result_, PQgetvalue(result_, row_, column));
}

//gzrd_Lib_CPP_Version_ID--start
#ifndef GZRD_SVN_ATTR
#define GZRD_SVN_ATTR "0"
#endif
static char gzrd_Lib_CPP_Version_ID[] __attribute__((used))="$HeadURL$ $Id$ " GZRD_SVN_ATTR "__file__";
// gzrd_Lib_CPP_Version_ID--end

