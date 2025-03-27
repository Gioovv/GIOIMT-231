#!/bin/bash
#Con (touch)creamos archivos
touch script.sh
# (echo) puedes escribir con "#!/bin/bash  > script.sh (>) puedes escribir dentro del archivo que creaste o el que quieras
echo "#!/bin/bash" > script.sh
echo "Este es un script de prueba"
#(ls-l) muestra los permisos que tiene el archivo
ls -l script.sh
#(chmod) sirve para cambiar los permisos
chmod 500 script.sh
echo "Permisos despues del chmod 500"
ls -l script.sh
#Intenta modificar
nano script.sh
#Restaurar Permisos
chmod 700 script.sh
echo"Permisos despues de chmod 700"
ls -l script.sh
