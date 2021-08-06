# Unix_Programe_Learning
1.下载apue源码，编译apue源码，可能会出现找不到-lbsd,说明缺少库。执行
sudo apt-get install -y libbsd-dev
执行该条命令时可能会出现其依赖版本不对的情况：libbsd0的版本太高：
sudo apt-get install -y --allow-downgrade libbsd0=0.8.7-1
在执行第一条命令

编译时需要加入书本作者写的error.h这里命名为：myerror.h
另外由于编不过的问题可以把myerror.h和apue.h复制粘贴到/usr/include/
g++ Chapter1/myls.cpp -o myls
