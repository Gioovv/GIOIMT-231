#!/bin/bash
#(touch) crea archivos
touch archivo1.txt
#(> archivo) direcciona el texto en el archivo que quieras  (echo)escribe el texto 
echo "Hola, este es un archivode prueba" > archivo1.txt
#(cp)copia archivo1.txt a archivo_copia.txt
cp archivo1.txt archivo_copia.txt
#(mkdir -p)crea una carpeta  dentro de practica_shell
mkdir -p ~/practica_shell/backup
# (mv) mueve el archivo_copia.txt a backup
mv archivo_copia.txt ~/practica_shell/backup
#(rm)elimina  en este caso va a eliminar archivo1.txt
rm archivo1.txt
#(ls)lista los archivos
ls ~/practica_shell/backup
