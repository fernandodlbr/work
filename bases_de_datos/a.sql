/*DROP DATABASE IF EXISTS a;*/

CREATE DATABASE IF NOT EXISTS a;

USE a;

CREATE TABLE parent(
  id INT NOT NULL,
  PRIMARY KEY (id)
) ENGINE=INNODB;

CREATE TABLE child(
  id INT, 
  parent_id INT,
  INDEX par_ind (parent_id),
  FOREIGN KEY (parent_id) 
    REFERENCES parent(id) 
    ON DELETE CASCADE
) ENGINE=INNODB;

insert into parent values
('1'),
('5'),
('7'),
('8');

insert into child values
('11','1'),
('12','1'),
('51','5'),
('71','7'),
('83','8');
