#pragma once
#include <libpq-fe.h>
#include "./pg_string.h"

class PGRow {
public:
    PGRow(PGresult* result, int row);
    PGString operator[](const char* column_name);
    PGString operator[](int column);
private:
    PGresult * result_ = nullptr;
    int row_ = -1;
};
