gcc src/*.c -O3 -o msflood
cp msflood /usr/bin
export PATH=$PATH:/usr/bin/msflood