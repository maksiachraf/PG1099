#! /bin/bash

if [[ $# -ne 1 ]]; then
echo "il n'existe pas un seul argument" >&2
exit 1
fi


if [[ -d $1 ]]; then
echo "l'argument est un répertoire" 
exit 1 
fi 


while read line;  do
  num=1
  for mot in $line; do
      if [ $num -eq $2 ]; then
        echo $mot
      fi
      num=$(expr $num + 1)
  done
done < $1
exit 0 

