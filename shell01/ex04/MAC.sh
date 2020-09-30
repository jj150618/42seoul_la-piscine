#!/bin/bash

ifconfig | grep -w ether | sed 's/ether/ /' | tr -d ' ','\t'

exit 0
