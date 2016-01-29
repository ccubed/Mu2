#!/bin/bash
/usr/bin/mysqld_safe &
sleep 5
mysql -u root -e "CREATE DATABASE Mu2"
mysql -u root Mu2 < "/Mu2/Jobs/JOBS_COMMENTS_CREATE.sql"
mysql -u root Mu2 < "/Mu2/Jobs/JOBS_LIST_CREATE.sql"
mysql -u root Mu2 < "/Mu2/Jobs/JOBS_TAGS_CREATE.sql"
