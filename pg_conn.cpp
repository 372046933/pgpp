#include "./pg_conn.h"

PGConn::PGConn(PGconn* conn) : conn_(conn)
{
}

PGConn::PGConn(const char* conninfo)
{
    conn_ = PQconnectdb(conninfo);
}

ConnStatusType PGConn::PGStatus()
{
    return PQstatus(conn_);
}

PGResult PGConn::PGExecute(const char * sql)
{
    PGresult * r = PQexec(conn_, sql);
    return PGResult(r);
}

PGConn::~PGConn()
{
    PQfinish(conn_);
}

//gzrd_Lib_CPP_Version_ID--start
#ifndef GZRD_SVN_ATTR
#define GZRD_SVN_ATTR "0"
#endif
static char gzrd_Lib_CPP_Version_ID[] __attribute__((used))="$HeadURL$ $Id$ " GZRD_SVN_ATTR "__file__";
// gzrd_Lib_CPP_Version_ID--end

