echo "############### TEXT 1 #################"
./antman/antman files/txt/txt1 1 > ./files/antman.txt
./giantman/giantman files/antman.txt 1 > ./files/giantman.txt
SUCCESS="######### TXTFILE ARE THE SAME #########"
ERROR="####### TXTFILE ARE NOT THE SAME #######"
cmp --silent files/txt/txt1 files/giantman.txt && echo "$SUCCESS" || echo "$ERROR"
SIZE2=$(stat -c%s files/antman.txt)
SIZE1=$(stat -c%s files/txt/txt1)
PERC=$(bc <<< "scale=2; ($SIZE2 - $SIZE1)/$SIZE1 * 100")
echo "################## $PERC % #################"
rm files/antman.txt && rm files/giantman.txt

echo "############### TEXT 2 #################"
./antman/antman files/txt/txt2 1 > ./files/antman.txt
./giantman/giantman files/antman.txt 1 > ./files/giantman.txt
SUCCESS="######### TXTFILE ARE THE SAME #########"
ERROR="####### TXTFILE ARE NOT THE SAME #######"
cmp --silent files/txt/txt2 files/giantman.txt && echo "$SUCCESS" || echo "$ERROR"
SIZE2=$(stat -c%s files/antman.txt)
SIZE1=$(stat -c%s files/txt/txt2)
PERC=$(bc <<< "scale=2; ($SIZE2 - $SIZE1)/$SIZE1 * 100")
echo "################## $PERC % #################"
rm files/antman.txt && rm files/giantman.txt

echo "############### TEXT 3 #################"
./antman/antman files/txt/txt3 1 > ./files/antman.txt
./giantman/giantman files/antman.txt 1 > ./files/giantman.txt
SUCCESS="######### TXTFILE ARE THE SAME #########"
ERROR="####### TXTFILE ARE NOT THE SAME #######"
cmp --silent files/txt/txt3 files/giantman.txt && echo "$SUCCESS" || echo "$ERROR"
SIZE2=$(stat -c%s files/antman.txt)
SIZE1=$(stat -c%s files/txt/txt3)
PERC=$(bc <<< "scale=2; ($SIZE2 - $SIZE1)/$SIZE1 * 100")
echo "################## $PERC % #################"
rm files/antman.txt && rm files/giantman.txt

echo "############### TEXT 4 #################"
./antman/antman files/txt/txt4 1 > ./files/antman.txt
./giantman/giantman files/antman.txt 1 > ./files/giantman.txt
SUCCESS="######### TXTFILE ARE THE SAME #########"
ERROR="####### TXTFILE ARE NOT THE SAME #######"
cmp --silent files/txt/txt4 files/giantman.txt && echo "$SUCCESS" || echo "$ERROR"
SIZE2=$(stat -c%s files/antman.txt)
SIZE1=$(stat -c%s files/txt/txt4)
PERC=$(bc <<< "scale=2; ($SIZE2 - $SIZE1)/$SIZE1 * 100")
echo "################## $PERC % #################"
rm files/antman.txt && rm files/giantman.txt

echo "############### TEXT 5 #################"
./antman/antman files/txt/txt5 1 > ./files/antman.txt
./giantman/giantman files/antman.txt 1 > ./files/giantman.txt
SUCCESS="######### TXTFILE ARE THE SAME #########"
ERROR="####### TXTFILE ARE NOT THE SAME #######"
cmp --silent files/txt/txt5 files/giantman.txt && echo "$SUCCESS" || echo "$ERROR"
SIZE2=$(stat -c%s files/antman.txt)
SIZE1=$(stat -c%s files/txt/txt5)
PERC=$(bc <<< "scale=2; ($SIZE2 - $SIZE1)/$SIZE1 * 100")
echo "################## $PERC % #################"
rm files/antman.txt && rm files/giantman.txt

echo "############### TEXT 6 #################"
./antman/antman files/txt/txt6 1 > ./files/antman.txt
./giantman/giantman files/antman.txt 1 > ./files/giantman.txt
SUCCESS="######### TXTFILE ARE THE SAME #########"
ERROR="####### TXTFILE ARE NOT THE SAME #######"
cmp --silent files/txt/txt6 files/giantman.txt && echo "$SUCCESS" || echo "$ERROR"
SIZE2=$(stat -c%s files/antman.txt)
SIZE1=$(stat -c%s files/txt/txt6)
PERC=$(bc <<< "scale=2; ($SIZE2 - $SIZE1)/$SIZE1 * 100")
echo "################## $PERC % #################"
rm files/antman.txt && rm files/giantman.txt

echo "############### TEXT 7 #################"
./antman/antman files/txt/txt7 1 > ./files/antman.txt
./giantman/giantman files/antman.txt 1 > ./files/giantman.txt
SUCCESS="######### TXTFILE ARE THE SAME #########"
ERROR="####### TXTFILE ARE NOT THE SAME #######"
cmp --silent files/txt/txt7 files/giantman.txt && echo "$SUCCESS" || echo "$ERROR"
SIZE2=$(stat -c%s files/antman.txt)
SIZE1=$(stat -c%s files/txt/txt7)
PERC=$(bc <<< "scale=2; ($SIZE2 - $SIZE1)/$SIZE1 * 100")
echo "################## $PERC % #################"
rm files/antman.txt && rm files/giantman.txt

echo "############### TEXT 8 #################"
./antman/antman files/txt/txt8 1 > ./files/antman.txt
./giantman/giantman files/antman.txt 1 > ./files/giantman.txt
SUCCESS="######### TXTFILE ARE THE SAME #########"
ERROR="####### TXTFILE ARE NOT THE SAME #######"
cmp --silent files/txt/txt8 files/giantman.txt && echo "$SUCCESS" || echo "$ERROR"
SIZE2=$(stat -c%s files/antman.txt)
SIZE1=$(stat -c%s files/txt/txt8)
PERC=$(bc <<< "scale=2; ($SIZE2 - $SIZE1)/$SIZE1 * 100")
echo "################## $PERC % #################"
rm files/antman.txt && rm files/giantman.txt
