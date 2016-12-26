#!/bin/bash

MAIL_ADRES=""
echo "Pleas passed e-mail address"
exit 1

MAIL_MAILPERT_B0DY=`uuidgen`
MAIL_CONNECT_IMAGE_ID_GEN=`uuidgen`
MAIL_CONNECT_IMAGE_ID=""
MAIL_IMAGE_NAME_BEGIN=""
MAIL_IMAGE_TYPE=".png"
MAIL_IMAGE_NAME_ALL=""




##########################################
########################################## SEND EMAIL
##########################################
 {
 echo "$(echo "$MAIL_ADRES" | sed 's|^|To: |' | sed 's/,/\'$'\nTo: /g'  )"
 echo "SUBJECT:  Send   $(date +"%Y-%m-%d %H:%M:%S") "
 echo "Content-Type: multipart/related;boundary=\"$MAIL_MAILPERT_B0DY\""


echo "--$MAIL_MAILPERT_B0DY"
echo "Content-Type: text/html; charset=ISO-8859-15"
echo "Content-Transfer-Encoding: 7bit"
echo "<html>"
echo "<head>"
echo "<style type=\"text/css\">

p { font:italic bold 36px Georgia, serif; }


</style>
"

echo "</head>"
echo "<body>"
echo "tresc"
echo "<p> send mail -  $(date +"%d.%m.%y")  </p>"

} | /usr/sbin/sendmail -t
exit 0

