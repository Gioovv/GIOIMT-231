#!/bin/bash
#(mkdir -p)crea los directorios documentos, imagenes y scripts
mkdir -p documentos imagenes scripts
#(touch) crea archivos dentro de documento
touch documentos/nota{1..5}.txt
#(mv)mueve archivos   en este caso  nota3.txt y nota4.txt a backup
mv documentos/nota3.txt documentos/nota4.txt backup/
#(rm -r)elimina en este caso eliminara la carpeta imagenes
rm -r imagenes
