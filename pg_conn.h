#pragma once
#include <libpq-fe.h>
#include "./pg_result.h"

class PGConn {
public:
    PGConn(PGconn* conn);
    PGConn(const char* conn_info);
    ConnStatusType PGStatus();
    PGResult PGExecute(const char* sql);
    ~PGConn();
private:
    PGconn* conn_ = nullptr;
};
