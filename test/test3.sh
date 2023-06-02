echo "################ IMG 1 #################"
echo "############ COMPRESSION ###############"
./antman/antman files/img/img1 3 > ./files/antman.txt
echo "########### DECOMPRESSION ##############"
./giantman/giantman files/antman.txt 3 > ./files/giantman.txt
SUCCESS="########## IMAGES ARE THE SAME #########"
ERROR="######## IMAGES ARE NOT THE SAME #######"
cmp --silent files/img/img1 files/giantman.txt && echo "$SUCCESS" || echo "$ERROR"
SIZE2=$(stat -c%s files/antman.txt)
SIZE1=$(stat -c%s files/img/img1)
PERC=$(bc <<< "scale=2; ($SIZE2 - $SIZE1)/$SIZE1 * 100")
echo "################## $PERC % #################"
rm files/antman.txt && rm files/giantman.txt

echo "################ IMG 2 #################"
echo "############ COMPRESSION ###############"
./antman/antman files/img/img2 3 > ./files/antman.txt
echo "########### DECOMPRESSION ##############"
./giantman/giantman files/antman.txt 3 > ./files/giantman.txt
SUCCESS="########## IMAGES ARE THE SAME #########"
ERROR="######## IMAGES ARE NOT THE SAME #######"
cmp --silent files/img/img2 files/giantman.txt && echo "$SUCCESS" || echo "$ERROR"
SIZE2=$(stat -c%s files/antman.txt)
SIZE1=$(stat -c%s files/img/img2)
PERC=$(bc <<< "scale=2; ($SIZE2 - $SIZE1)/$SIZE1 * 100")
echo "################## $PERC % #################"
rm files/antman.txt && rm files/giantman.txt

echo "################ IMG 3 #################"
echo "############ COMPRESSION ###############"
./antman/antman files/img/img3 3 > ./files/antman.txt
echo "########### DECOMPRESSION ##############"
./giantman/giantman files/antman.txt 3 > ./files/giantman.txt
SUCCESS="########## IMAGES ARE THE SAME #########"
ERROR="######## IMAGES ARE NOT THE SAME #######"
cmp --silent files/img/img3 files/giantman.txt && echo "$SUCCESS" || echo "$ERROR"
SIZE2=$(stat -c%s files/antman.txt)
SIZE1=$(stat -c%s files/img/img3)
PERC=$(bc <<< "scale=2; ($SIZE2 - $SIZE1)/$SIZE1 * 100")
echo "################## $PERC % #################"
rm files/antman.txt && rm files/giantman.txt

echo "################ IMG 4 #################"
echo "############ COMPRESSION ###############"
./antman/antman files/img/img4 3 > ./files/antman.txt
echo "########### DECOMPRESSION ##############"
./giantman/giantman files/antman.txt 3 > ./files/giantman.txt
SUCCESS="########## IMAGES ARE THE SAME #########"
ERROR="######## IMAGES ARE NOT THE SAME #######"
cmp --silent files/img/img4 files/giantman.txt && echo "$SUCCESS" || echo "$ERROR"
SIZE2=$(stat -c%s files/antman.txt)
SIZE1=$(stat -c%s files/img/img4)
PERC=$(bc <<< "scale=2; ($SIZE2 - $SIZE1)/$SIZE1 * 100")
echo "################## $PERC % #################"
rm files/antman.txt && rm files/giantman.txt
