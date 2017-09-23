#pragma once
#include <libpq-fe.h>
#include "./pg_row.h"

class PGResult {
public:
    PGResult(PGresult* result);
    PGRow operator[](int i);
    int num_rows() const;
private:
    PGresult * result_ = nullptr;
};
