#include"dbi_mysql.h"
#include <iostream>
using namespace std;
int main()
{
    DBI_mysql mysql;
    mysql.db_connect("127.0.0.1","student","root","950512",3306);
    mysql.db_execute("select * from stu");
    mysql.db_fetch();
    int i = 0;
    char val[1024];
    while(mysql.db_next())
    {
        mysql.db_get_field(i++,val,1024);
        cout<<val<<endl;
    }
	return 0;
}

