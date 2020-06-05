#ifndef MYDB_H
#define MYDB_H
#include <iostream>
#include <string>
#include <mysql/mysql.h>

using namespace std;

class MyDB
{
	public:
		MyDB();
		~MyDB();
		bool initDB(string host, string user, string pwd, string db_name);
		bool exeSQL(string sql);
	private:
		MYSQL *connection;
		MYSQL_RES *result;
		MYSQL_ROW row;
};
#endif