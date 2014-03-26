/*DROP DATABASE IF EXISTS muebles;*/

CREATE DATABASE IF NOT EXISTS muebles;

USE muebles;

CREATE TABLE Muebles(
Nombre INTEGER PRIMARY KEY,
Precio VARCHAR(10)
);


CREATE TABLE Tiene(
NombreMuebles INTEGER REFERENCES Muebles(Codigo),
IDPiezas INTEGER REFERENCES Piezas(Codigo),
Unidades VARCHAR(20)
);


CREATE TABLE Piezas(
ID INTEGER AUTO_INCREMENT PRIMARY KEY not null
);


CREATE TABLE EstanAlmacenados(
IDPiezas INTEGER REFERENCES Piezas(Codigo),
PasilloEstante INTEGER REFERENCES Estante(Codigo),
AlturaEstante INTEGER REFERENCES Estante(Codigo),
Cantidad VARCHAR(20)
);


CREATE TABLE Estante(
Pasillo VARCHAR(20) not null,
Altura VARCHAR(20) not null,
PRIMARY KEY(Pasillo,Altura)
);

/*
Muebles(Nombre, Precio)
Tiene(NombreMuebles, IDPiezas, Unidades)
Piezas(ID)
EstanAlmacenados(IDPiezas, PasilloEstante, AlturaEstante, Cantidad)
Estante(Pasillo, Altura)
);
*/

insert into Muebles values
('mesa','50 euros'),
('silla','20 euros'),
('cama','200 euros'),
('armario','100 euros');

insert into Tiene values
('mesa','1','40 unidades'),
('silla','2','200 unidades'),
('cama','3','15 unidades'),
('armario','4','35 unidades');

insert into Piezas values
(''),
(''),
(''),
('');

insert into EstanAlmacenados values
('1','pasillo 1','altura 4','20 cajas'),
('2','pasillo 2','altura 3','40 cajas'),
('3','pasillo 3','altura 2','10 cajas'),
('4','pasillo 4','altura 1','30 cajas');

insert into Estante values
('pasillo 1','altura 1'),
('pasillo 2','altura 2'),
('pasillo 3','altura 3'),
('pasillo 4','altura 4');
