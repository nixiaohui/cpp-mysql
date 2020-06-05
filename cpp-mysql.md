$ sudo apt-get install mysql-client
$ sudo apt-get install libmysqlclient-dev

# $ g++ connect.cpp -o connect -I /usr/include/mysql/ -L /usr/lib/mysql/ -lmysqlclient

#makoo @ makcooT450A in ~/codes/c/db/cpp-mysql on git:master o [13:43:42]
$ g++ main.cpp MyDB.cpp -o db -I /usr/include/mysql/ -L /usr/lib/mysql -lmysqlclient

#makoo @ makcooT450A in ~/codes/c/db [12:32:40]
$ g++ -c MyDB.cpp

# makcoo @ makcooT450A in ~/codes/c/db [12:33:10]
$ g++ main.cpp -o db MyDB.o -I /usr/include/mysql/ -L /usr/lib/mysql -lmysqlclient
