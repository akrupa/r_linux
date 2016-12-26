echo "
jakiœ tekst NNNNNNNNNN
<login>
tekst_w_login
</login>
NNNNNNNNNNNNNNNNNNNNNNNNN
<login> tekst_w_login_jednalinia </login>
" | sed -n "/<login>/,/<\/login>/p" 

