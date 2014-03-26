/*DROP DATABASE IF EXISTS zz;*/

CREATE DATABASE IF NOT EXISTS zz;

USE zz;

CREATE TABLE padre(
  Id INTEGER not null,
  PRIMARY KEY (id)
) ENGINE=INODB;

CREATE TABLE hijo(
  Id INTEGER not null,
  Idpadre INTEGER,
  INDEX par_ind(Idpadre),
    FOREIGN KEY (Idpadre)
    REFERENCES padre(Id)
    ON DELETE CASCADE
) ENGINE=INODB;

insert into padre values
('1'),
('5'),
('7'),
('8');

insert into hijo values
('11','1'),
('12','1'),
('51','5'),
('71','7'),
('83','8');
