#!/bin/bash

if [ $# -ne 1 ]; then
echo "il existe plus qu'un seul argument"
exit 1
fi

if [ -z $pidInitial ]; then
  echo processus $$ demarre
else
  echo "processus $$ demarre avec le processus initial $pidInitial"
fi

export pidInitial=$$

if [ $1 -gt 1 ]; then
  k=$(expr $1 - 1)
  echo "il reste $k  processus à créer"
  ./gladiateur.sh $k
else
  echo "fin de chaine"
fi 

trap "echo $$ : morituri te salutant; exit 0" USR1

while true; do
  echo $$ : Ave Caesar
  sleep 5 &
  wait $! 
   
done
exit 0
