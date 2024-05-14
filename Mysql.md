## Mysql

sudo systemctl status mysql.service

sudo systemctl start mysql.service
sudo systemctl stop mysql.service

sudo mysql ----for mysql shell

## Commands--->

1. CREATE DATABASE myDB;    `Create a databse`
2. USE myDB;  `TO use DATABASE`        
3. DROP myDB;  `To drop databse`
4.   
```create table employees (
	field_name datatype,.....,field_name datatype);
create table employees (
	id int,
    full_name varchar(50),
    hourly_pay decimal(5,2),
    hire_date date
    
);
```
Create A Table

5. Query ... `select * from tablename where condition`

6. Rename table `rename table workers to employees`
7. Alter table `alter table employees add phone_number varchar(15)`
8. rename column `alter table employees rename column phone_number to email;`
9. modify column datatype: `alter table employees modify column email varchar(100);`
10. drop column : `alter table employees drop column email;`
`



