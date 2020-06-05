#include<iostream>
#include "MyDB.h"
using namespace std;
 
int main()
{
	MyDB db;
	db.initDB("localhost", "hugo", "123456", "test");
	db.exeSQL("select * from user");
	return 0;
}
