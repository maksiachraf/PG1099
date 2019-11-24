#! /bin/bash

if [[ $# -ne 1 ]]; then
echo "il n'existe pas un seul argument" >&2
exit 1
fi


if [[ -d $1 ]]; then
echo "l'argument est un répertoire"
exit 1
fi

exec 3>$1
while read line; do
   echo $line
   echo $line >&3
done < $1
