
# h -- HELP
# z -- Compress archive with gzip   ( create file *.tar.gz)
# f -- File name type of the archive file
# v -- Verbosely show the .tar file progress.
# x -- Extract file
#  -j, --bzip2 e.g. name.tar.bz2
# t --
# -C  <dir>  -- dir to extract or Compress
# -r append

# create archiwum
tar -zcvf nazwa_archiwum.tar.gz *

# Extract files to pth_destination
tar -zcvf nazwa_archiwum.tar.gz   -C path_destination

# Extract Group of Files using Wildcard
tar -zxvf Phpfiles-org.tar.gz --wildcards '*.php'

#    The tar command don’t have a option to add files
# or directories to a existing compressed tar.gz and
# tar.bz2 archive file.

bzip2 -d  name.tar.bz2 => name.tar
