CREATE TABLE `[INSERT YOUR DB HERE]`.`JOBS_TAGS` (
  `JOB_ID` INT NOT NULL COMMENT 'Stores ID of the job tag is related to',
  `TAG` VARCHAR(45) NOT NULL COMMENT 'Stores Tag Name',
  FULLTEXT(TAG)) ENGINE=INNODB;