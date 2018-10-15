#!/bin/bash

echo -e "\033[1;33m[0%] Changing to workspace /\033[0m"
cd /home/ubuntu/workspace

sudo mkdir -p .cloud9Setup
cd .cloud9Setup

echo -e "\033[1;33m[5%] Cloning Cloud9 Setup from github\033[0m"
sudo git clone https://github.com/jpaoneMines/cloud9Setup.git

cd cloud9Setup

sudo mkdir -p ../../.c9/runners
echo -e "\033[1;33m[15%] Copying custom C++ (Makefile) runner\033[0m"
sudo cp C++\ \(Makefile\).run ../../.c9/runners/.
echo -e "\033[1;33m[18%] Copying custom Makefile\033[0m"
sudo cp Makefile ../../.c9/.

echo -e "\033[1;33m[22%] Running SFML install script\033[0m"
sudo chmod 744 setupSFML.sh
sudo ./setupSFML.sh

echo -e "\033[1;33m[98%] Returning to workspace\033[0m"
cd /home/ubuntu/workspace
echo -e "\033[1;33m[100%] Done with Cloud9 setup!\033[0m"
