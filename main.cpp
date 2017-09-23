#include <iostream>
#include "./pg_conn.h"

using std::cout;
using std::endl;
int main()
{
    PGConn conn("host=127.0.0.1 port=5432 dbname=test_db user=tx password= connect_timeout=10");
    auto result = conn.PGExecute("select * from test");
    for (int i = 0; i < result.num_rows(); ++i) {
        int j = result[i]["id"];
        cout << j << endl;
    }


    return 0;
}

//gzrd_Lib_CPP_Version_ID--start
#ifndef GZRD_SVN_ATTR
#define GZRD_SVN_ATTR "0"
#endif
static char gzrd_Lib_CPP_Version_ID[] __attribute__((used))="$HeadURL$ $Id$ " GZRD_SVN_ATTR "__file__";
// gzrd_Lib_CPP_Version_ID--end

