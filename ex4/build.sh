#! /usr/bin/env bash

mkdir -p buildvalgrind
cd buildvalgrind
# r14960 for Xcode 6.2
# svn co svn://svn.valgrind.org/valgrind/trunk/@14960 valgrind
# r15088 for Xcode 6.3
svn co svn://svn.valgrind.org/valgrind/trunk/@15088 valgrind
cd valgrind
./autogen.sh
./configure --prefix=/usr/local
make && sudo make install

# check that we have our valgrind installed
/usr/local/bin/valgrind --version
