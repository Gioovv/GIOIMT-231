#!/bin/bash
#Crear arhivo secreto
touch secreto.txt
#Ecribir el mensaje confidencial
echo "Hola linux, soy Gio empecemos desde 0 yo se que sabes que te odio pero necesito aprobar programacion" > secreto.txt
#Dar permisos para que solo el propietario  pueda leer y escribir
echo "El propietario puede leer y escribir"
chmod 600 secreto.txt
ls -l secreto.txt
#Intentar abrir el archivo
sudo nano secreto.txt
#Dar permisos para que todos puedan leerlo  pero solo el propietario pueda escribir
echo "Todos pueden leerlo pero solo el propietario escribir"
chmod 644 secreto.txt
ls -l secreto.txt
