/*DROP DATABASE IF EXISTS base_de_datos;*/

CREATE DATABASE IF NOT EXISTS base_de_datos;

USE base_de_datos;

CREATE TABLE Tabla(
Nombre INTEGER PRIMARY KEY,
Basededatos VARCHAR(30)
);


CREATE TABLE Campo(
Nombre INTEGER PRIMARY KEY,
Tipo VARCHAR(10),
NombreTabla INTEGER REFERENCES Tabla(Codigo)
);


/*
Tabla(Nombre, Basesdedatos)
Campo(Nombre, Tipo, NombreTabla)
);
*/

insert into Tabla values
('hola 1','primera'),
('buenos dias 2','segunda'),
('buenas tardes 3','tercera'),
('adios 4','cuarta');

insert into Campo values
('futbol 1','cesped','1'),
('baloncesto 2','cemento','2'),
('hockey 3','hielo','3'),
('rally 4','arena','4');
