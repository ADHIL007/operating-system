 #! /bin/bash

echo "enter a number:"
read a
cube=`expr "$a" \* "$a" \* "$a" `
echo "The cube of $a=" $cube
