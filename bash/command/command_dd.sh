#!/bin/bash

dd - convert and copy a file

dd if=<file_in>  bs=1 skip=120 count=<copy only N input blocks> of=<file_out>

bs - read and write up to BYTES bytes at a time
skip=N skip N ibs-sized blocks at start of input


# create file container only '0'  4GB
sudo dd if=/dev/zero of=zero_file.txt bs=1073741824 count=4
# to check
vbindiff old.bin

# create  2GB file with random data
sudo dd if=/dev/urandom of=random_file.txt bs=1048576 count=2048

