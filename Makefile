main: main.o pg_result.o pg_conn.o pg_row.o pg_string.o	
	g++ -o main -lpq main.cpp pg_result.cpp pg_conn.cpp pg_row.cpp pg_string.cpp
clean:
	rm *.o
