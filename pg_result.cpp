#include "./pg_result.h"

PGResult::PGResult(PGresult * result) : result_(result)
{
}

PGRow PGResult::operator[](int i)
{
    if (i < PQntuples(result_)) {
        return PGRow(result_, i);
    } else {
        return PGRow(result_, -1);
    }
}

int PGResult::num_rows() const
{
    return PQntuples(result_);
}

//gzrd_Lib_CPP_Version_ID--start
#ifndef GZRD_SVN_ATTR
#define GZRD_SVN_ATTR "0"
#endif
static char gzrd_Lib_CPP_Version_ID[] __attribute__((used))="$HeadURL$ $Id$ " GZRD_SVN_ATTR "__file__";
// gzrd_Lib_CPP_Version_ID--end

