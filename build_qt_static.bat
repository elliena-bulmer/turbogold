set PATH=%PATH%;C:\Qt\5.3.2\bin
cd "%cd%"
qmake "USE_UPNP=1" "USE_IPV6=1" Turbogold.pro
make -f Makefile.Release -j4
pause