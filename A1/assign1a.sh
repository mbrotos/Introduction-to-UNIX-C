#!/bin/bash
SINCE=`last tail | cut -d ' ' -f 3,4,5,6 | tr -d '\n' | tr -s " "`

USERLIST=`last | tr -s " " | head -n -1 | cut -d " " -f 1`

IP=`hostname --ip`
OS=`hostnamectl | grep "Operating System"`
OS=${OS:2}
echo "-------------------------------------------------------------------------------"
echo "This machine is ${HOSTNAME}."
echo "${USERLIST}" | sort -u | wc -w | tr -d '\n'
echo " users have logged into ${HOSTNAME} since ${SINCE}; they are:"
echo "${USERLIST}" | sort -u | tr '\n' ',' | sed 's/.$//'
echo "."
echo "${HOSTNAME^} is at IP Address ${IP} and is running ${OS//:}."
echo "You are ${USER}, and you have logged in " | tr -d '\n'
echo ${USERLIST} | grep -o -i ${USER} | wc -l | tr -d '\n'
echo " times since ${SINCE}."
echo "-------------------------------------------------------------------------------"