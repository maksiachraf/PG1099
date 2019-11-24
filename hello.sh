#! /bin/bash
if [ $# -ne 0 ]; then
i=1
while [[ $i -le $# ]]; do
echo $($i)
i=$(expr $i + 1)
done

else
echo Hello Sargeras ! 
fi
