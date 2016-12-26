
dpkg - package manager for Debian

dpkg -i <name_of_package_deb>

dpkg -P (--purge)


# Show all installed package
dpkg --get-selections

# search package
sudo apt-cache  pkgnames | grep -i valgrind

sudo apt-get remove --purge valgrind

######## Create deb file
#We are in root directory of project.
debuild -uc -us -b


########### Show description 
sudo dpkg -I <name of deb>

