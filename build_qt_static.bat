set PATH=%PATH%;C:\devel\qt5.9.2-static\bin
cd "%cd%"
qmake "USE_UPNP=1" "USE_IPV6=1" Turbogold.pro
make -f Makefile.Release -j4
pause