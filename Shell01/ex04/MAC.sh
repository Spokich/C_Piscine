#!/bin/sh

ifconfig -a | grep 'ether ' | cut -b 8-33 
