$ sudo apt-get install mysql-client
$ sudo apt-get install libmysqlclient-dev

$ g++ connect.cpp -o connect -I /usr/include/mysql/ -L /usr/lib/mysql/ -lmysqlclient

#makoo @ makcooT450A in ~/codes/c/db [12:32:40]
$ g++ -c MyDB.cpp

# makcoo @ makcooT450A in ~/codes/c/db [12:33:10]
$ g++ main.cpp -o db MyDB.o -I /usr/include/mysql/ -L /usr/lib/mysql -lmysqlclient
