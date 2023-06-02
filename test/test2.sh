echo "############### HTML 1 #################"
echo "############ COMPRESSION ###############"
./antman/antman files/html/html1 2 > ./files/antman.txt
echo "########### DECOMPRESSION ##############"
./giantman/giantman files/antman.txt 2 > ./files/giantman.txt
SUCCESS="########## HTML ARE THE SAME ###########"
ERROR="######## HTML ARE NOT THE SAME #########"
cmp --silent files/html/html1 files/giantman.txt && echo "$SUCCESS" || echo "$ERROR"
SIZE2=$(stat -c%s files/antman.txt)
SIZE1=$(stat -c%s files/html/html1)
PERC=$(bc <<< "scale=2; ($SIZE2 - $SIZE1)/$SIZE1 * 100")
echo "################## $PERC % #################"
rm files/antman.txt && rm files/giantman.txt

echo "############### HTML 2 #################"
echo "############ COMPRESSION ###############"
./antman/antman files/html/html2 2 > ./files/antman.txt
echo "########### DECOMPRESSION ##############"
./giantman/giantman files/antman.txt 2 > ./files/giantman.txt
SUCCESS="########## HTML ARE THE SAME ###########"
ERROR="######## HTML ARE NOT THE SAME #########"
cmp --silent files/html/html2 files/giantman.txt && echo "$SUCCESS" || echo "$ERROR"
SIZE2=$(stat -c%s files/antman.txt)
SIZE1=$(stat -c%s files/html/html2)
PERC=$(bc <<< "scale=2; ($SIZE2 - $SIZE1)/$SIZE1 * 100")
echo "################## $PERC % #################"
rm files/antman.txt && rm files/giantman.txt

echo "############### HTML 3 #################"
echo "############ COMPRESSION ###############"
./antman/antman files/html/html3 2 > ./files/antman.txt
echo "########### DECOMPRESSION ##############"
./giantman/giantman files/antman.txt 2 > ./files/giantman.txt
SUCCESS="########## HTML ARE THE SAME ###########"
ERROR="######## HTML ARE NOT THE SAME #########"
cmp --silent files/html/html3 files/giantman.txt && echo "$SUCCESS" || echo "$ERROR"
SIZE2=$(stat -c%s files/antman.txt)
SIZE1=$(stat -c%s files/html/html3)
PERC=$(bc <<< "scale=2; ($SIZE2 - $SIZE1)/$SIZE1 * 100")
echo "################## $PERC % #################"
rm files/antman.txt && rm files/giantman.txt

echo "############### HTML 4 #################"
echo "############ COMPRESSION ###############"
./antman/antman files/html/html4 2 > ./files/antman.txt
echo "########### DECOMPRESSION ##############"
./giantman/giantman files/antman.txt 2 > ./files/giantman.txt
SUCCESS="########## HTML ARE THE SAME ###########"
ERROR="######## HTML ARE NOT THE SAME #########"
cmp --silent files/html/html4 files/giantman.txt && echo "$SUCCESS" || echo "$ERROR"
SIZE2=$(stat -c%s files/antman.txt)
SIZE1=$(stat -c%s files/html/html4)
PERC=$(bc <<< "scale=2; ($SIZE2 - $SIZE1)/$SIZE1 * 100")
echo "################## $PERC % #################"
rm files/antman.txt && rm files/giantman.txt

echo "############### HTML 5 #################"
echo "############ COMPRESSION ###############"
./antman/antman files/html/html5 2 > ./files/antman.txt
echo "########### DECOMPRESSION ##############"
./giantman/giantman files/antman.txt 2 > ./files/giantman.txt
SUCCESS="########## HTML ARE THE SAME ###########"
ERROR="######## HTML ARE NOT THE SAME #########"
cmp --silent files/html/html5 files/giantman.txt && echo "$SUCCESS" || echo "$ERROR"
SIZE2=$(stat -c%s files/antman.txt)
SIZE1=$(stat -c%s files/html/html5)
PERC=$(bc <<< "scale=2; ($SIZE2 - $SIZE1)/$SIZE1 * 100")
echo "################## $PERC % #################"
rm files/antman.txt && rm files/giantman.txt
