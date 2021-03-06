/*DROP DATABASE IF EXISTS aparatos_componentes;*/

CREATE DATABASE IF NOT EXISTS aparatos_componentes;

USE aparatos_componentes;

CREATE TABLE Aparato(
Codigo INTEGER AUTO_INCREMENT PRIMARY KEY not null,
Descripcion VARCHAR(50),
NombreTipo INTEGER REFERENCES Tipo(Codigo)
);


CREATE TABLE Aparato2(
NombreTipo INTEGER REFERENCES Tipo(Codigo),
CaracteristicasTipo INTEGER REFERENCES Tipo(Codigo)
);


CREATE TABLE Tipo(
Nombre INTEGER AUTO_INCREMENT PRIMARY KEY not null,
Caracteristicas VARCHAR(40),
NombreTipo VARCHAR(40)
);


CREATE TABLE Lleva(
CodigoAparato INTEGER REFERENCES Aparato(Codigo),
Precio VARCHAR(10),
Cantidad VARCHAR(10)
);


CREATE TABLE Lleva2(
CodigoAparato INTEGER REFERENCES Aparato(Codigo),
NombreComponentes INTEGER REFERENCES Componentes(Codigo)
);


CREATE TABLE Componentes(
Nombre INTEGER AUTO_INCREMENT PRIMARY KEY not null,
Especificaciones VARCHAR(40),
CifFabricante INTEGER REFERENCES Fabricante(Codigo)
);


CREATE TABLE Suministra(
NombreComponentes INTEGER REFERENCES Componentes(Codigo),
CifFabricante INTEGER REFERENCES Fabricante(Codigo)
);


CREATE TABLE Fabricante(
Cif INTEGER AUTO_INCREMENT PRIMARY KEY not null,
Domicilio VARCHAR(20)
);

insert into Aparato values
('','no se que poner','1'),
('','esto es una prueba','2'),
('','espero que funcione','3'),
('','y si no funciona hice lo que pude','4');

insert into Aparato2 values
('1','4'),
('2','3'),
('3','2'),
('4','1');

insert into Tipo values
('','caracteristicas 1','nombretipo 1'),
('','caracteristicas 2','nombretipo 2'),
('','caracteristicas 3','nombretipo 3'),
('','caracteristicas 4','nombretipo 4');

insert into Lleva values
('1','40 euros','20 unidades'),
('2','60 euros','40 unidades'),
('3','80 euros','30 unidades'),
('4','200 euros','10 unidades');

insert into Lleva2 values
('1','1'),
('2','2'),
('3','3'),
('4','4');

insert into Componentes values
('','especificacion 1','1'),
('','especificacion 2','2'),
('','especificacion 3','3'),
('','especificacion 4','4');

insert into Suministra values
('1','1'),
('2','2'),
('3','3'),
('4','4');

insert into Fabricante values
('','calle de la rosa'),
('','calle del arbol'),
('','calle cortada'),
('','calle prohibida');
