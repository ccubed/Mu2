#!/bin/bash
/usr/bin/mysqld_safe &
sleep 5
mysql -u root -e "CREATE DATABASE Mu2"
mysql -u root Mu2 < "/Mu2/Database Stats/JOBS_COMMENTS_CREATE.sql"
mysql -u root Mu2 < "/Mu2/Database Stats/JOBS_LIST_CREATE.sql"
mysql -u root Mu2 < "/Mu2/Database Stats/JOBS_TAGS_CREATE.sql"
