/*DROP DATABASE IF EXISTS starwars;*/

CREATE DATABASE IF NOT EXISTS starwars;

USE starwars;

CREATE TABLE Actores(
Codigo INTEGER AUTO_INCREMENT PRIMARY KEY not null,
Nombre VARCHAR(40),
Fecha DATE,
Nacionalidad VARCHAR(20),
CodigoPersonaje INTEGER REFERENCES PERSONAJES(Codigo)
);


CREATE TABLE Personajes(
CodigoPersonaje INTEGER AUTO_INCREMENT PRIMARY KEY not null,
Nombre VARCHAR(30),
Raza VARCHAR(20),
Grado VARCHAR(20),
CodigoActor INTEGER REFERENCES Actores(Codigo),
CodigoSuperior INTEGER REFERENCES Personajes(Codigo)
);


CREATE TABLE Planetas(
CodigoPlanetas INTEGER AUTO_INCREMENT PRIMARY KEY not null,
Galaxia VARCHAR(20),
Nombre VARCHAR(20)
);


CREATE TABLE Peliculas(
CodigoPeliculas INTEGER AUTO_INCREMENT PRIMARY KEY not null,
Titulo VARCHAR(40),
Director VARCHAR(20),
año VARCHAR(10)
);


CREATE TABLE PersonajesPeliculas(
CodigoPersonajes INTEGER REFERENCES Personajes(Codigo),
CodigoPeliculas INTEGER REFERENCES Peliculas(Codigo)
);


CREATE TABLE Visitas(
CodigoNaves INTEGER REFERENCES Naves(Codigo),
CodigoPlanetas INTEGER REFERENCES Planetas(Codigo),
CodigoPeliculas INTEGER REFERENCES Peliculas(Codigo)
);


CREATE TABLE Naves(
CodigoNaves INTEGER AUTO_INCREMENT PRIMARY KEY not null,
NTripulantes VARCHAR(10),
Nombre VARCHAR(20)
);

insert into Actores values
('','harrison ford','1942-07-13','estados unidos','1'),
('','daniel logan','1987-06-06','nueva zelanda','2'),
('','peter wilton cushing','1913-05-26','inglaterra','3'),
('','mark richard hamill','1951-09-25','estados unidos','4'),
('','anthony daniels','1946-02-21','inglaterra','5');

insert into Personajes values
('','han solo','humano','cazarrecompensas','1',''),
('','boba fett','humano','cazarrecompensas','2',''),
('','grand moff tarkin','humano','gobernador','3',''),
('','luke skywalker','humano','gran maestro','4',''),
('','c3po','droide','droide de protocolo','5','');

insert into Planetas values
('','sector aris','mygeeto'),
('','sector arkanis','tatooine'),
('','espacio salvaje','kamino'),
('','sector mytaranor','kashyyyk'),
('','sector anoat','hoth');

insert into Peliculas values
('','Star Wars IV Una nueva esperanza','George Lucas','1977'),
('','Star Wars V El Imperio contraataca','Irvin Kershner','1980'),
('','Star Wars VI El retorno del jedi','Richard Marquand','1983'),
('','Star Wars I La amenaza fantasma','George Lucas','1999'),
('','Star Wars II El ataque de los clones','George Lucas','2002').
('','Star Wars III La venganza de los Sith','George Lucas','2005');

insert into PersonajesPeliculas values
('1','1'),
('3','1'),
('4','1'),
('5','1'),
('1','2'),
('2','2'),
('4','2'),
('5','2'),
('1','3'),
('2','3'),
('4','3'),
('5','3'),
('5','4'),
('2','5'),
('5','5'),
('5','6');

insert into Visitas values
('1','5','1'),
('2','1','1'),
('2','2','2'),
('2','3','3'),
('2','4','4'),
('2','5','5'),
('2','3','6');

insert into Naves values
('','6','Halcón Milenario YT-1300'),
('','2','Ala-X'),
('','1','Ala-y'),
('','1','Esclavo I'),
('','11628','Destructor Estelar clase República');
