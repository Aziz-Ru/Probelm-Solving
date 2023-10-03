for i in {1..5}
do
    echo $i
done
country=bangladesh
echo $country
while read line
do 
   echo $line
done < input.txt
