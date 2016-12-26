
#---------------------------------------------------------------- data to epoch
[mis@mis and]$ echo $(date -d " 2013-03-10 1 day" '+%s')
1362956400
[mis@mis and]$ echo $(date -d "  0 day" '+%s')
1411641917
[mis@mis and]$

#---------------------------------------------------------------- epoch  to time_clock
 date -u -d @$(echo "95") +"%T"
00:01:35
 date -u -d @$(echo "86399") +"%T"
23:59:59
# --------------------------------------------------------------- epoch to data
 date -u -d @$(echo "86401")
Fri Jan  2 00:00:01 UTC 1970
#----------
 date -u -d @$(echo "86401") +"%Y-%m-%d"
1970-01-02
#---------------------------------------------------------------- epoch to data
date -d @1234567890 '+%F %T'

# ---------------------------------------------------------------- epoch to time_clock : printf 
s=12345;printf '%02d:%02d:%02d\n' $((s/3600)) $((s%3600/60)) $((s%60))
# ---------------------------------------------------------------- epoch to time_clock : awk
echo 12345|awk '{printf "%02d:%02d:%02d\n",$0/3600,$0%3600/60,$0%60}' 

###################################################################################################################################
#----------------------------------------------------------------- aktualny czas 
date '+%Y-%m-%d %H:%M:%S'
#odp: 2014-09-24 14:38:36
# ---------------------------------------------------------------- jutro
echo $(date -d ' 1 day' '+%Y-%m %d')
#----------------------------------------------------------------- Jutro od jakies daty
echo $(date -d " 2013-03-10 1 day" '+%Y-%m %d')
#----------------------------------------------------------------- podanie time stamp
 date --date="2009-01-02 03:04:05" "+%d %B of %Y at %H:%M and %S seconds"
# 02 January of 2009 at 03:04 and 05 seconds
#-----------------------------------------------------------------  dodajemy miesiac

echo $(date -d " 2013-03-10 0 month" '+%Y-%m-%d')
#-----------------------------------------------------------------



# --------------------------------------------------------------- odejmowanie czasu
START=$(date +%s)
sleep 2
END=$(date +%s)
DIFF=$(( $END - $START ))
echo "It took $DIFF seconds"
# ----------------------------------------------------------------





#----------------------------------------------------------------- utworzenie tablicy z dat� 
 a=(`echo "2009-12-03 12:38:15" | sed -e 's/[:-]/ /g'`)
 echo ${a[*]}
2009 12 03 12 38 15
echo ${a[4]}

#----------------------------------------------------------------- utworzenie tabeli systemowej
d="2009-12-03 15:35:11"
d=${d//[- :]/|}
IFS="|"
set -- $d
echo $1
echo $2
echo $@
2009 12 03 15 35 11

#-----------------------------------------------------------------


# --------------------------------------------------------------- wczytywanie
 date=$(date +'%Y-%m-%d %H:%M:%S')
 
 read Y M D h m s <<< ${date//[-: ]/ }
 2015 03 18 20 40 05

 echo "Y=$Y, m=$m"
 Y=2009, m=57






-- 10 000 Agatki
864073200
---  9 000 
777659600
date -d @777659600 '+%F %T'

---------------------------
[akrupa@mis ~]$ date -d @$((86400*10315 )) '+%F %T'
1998-03-30 02:00:00
[akrupa@mis ~]$ date -d @$((86400*10314 )) '+%F %T'
1998-03-29 01:00:00
[akrupa@mis ~]$

 b=$(date -d " 1986-04-02 0 day" '+%s')
 dzis=$(date -d " 2015-03-19 0 day" '+%s')

 b=$(date -d @$((86400*10000)) '+%F %T')
