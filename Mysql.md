## Mysql

sudo systemctl status mysql.service

sudo systemctl start mysql.service
sudo systemctl stop mysql.service

sudo mysql ----for mysql shell
CREATE USER 'username'@'host' IDENTIFIED WITH authentication_plugin BY 'password';

SHOW VARIABLES LIKE 'validate_password%';
SET GLOBAL validate_password.length = 6;
SET GLOBAL validate_password.number_count = 0;

## Commands--->

1. CREATE DATABASE new Databse myDB;   *CREATE DATABASE DATABASENAME;*
2. To use Databse;  *USE DATABASENAME;*        
3. DROP myDB;  *DROP DATABASE databseName;*
4. Create A Table
```create table employees (
	field_name datatype,.....,field_name datatype);
create table employees (
	id int,
    full_name varchar(50),
    hourly_pay decimal(5,2),
    hire_date date
    
);
```
5. insert Value: *INSERT INTO Student (ROLL, NAME, CITY) VALUES (1, 'John Doe', 'New York');*

6. Query ... `select * from tablename where condition`

7. Rename table `rename table workers to employees`
8. Alter table `alter table employees add phone_number varchar(15)`
9. rename column `alter table employees rename column phone_number to email;`
10. modify column datatype: `alter table employees modify column email varchar(100);`
11. drop column : `alter table employees drop column email;`
12. Primary Key declartion_> *create table student( Roll int primary key,Name Varchar(50),City Varchar(100))*
```
CREATE TABLE Student (
  ROLL int PRIMARY KEY,
  NAME varchar(50),
  CITY varchar(50)
);
```
13. Distict -> select distinct city from student
14. Foreign key
    - create table registrantion (Roll int,id int Primary key,cellphone varchar(11), Foreignkey key(Roll) references Student(Roll) 
15. sort by order by



