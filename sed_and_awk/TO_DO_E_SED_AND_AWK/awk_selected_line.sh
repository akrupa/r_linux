# numerowanie linie
echo -e "a\nb\nc\nd\ne"  | awk '  {print NR ": " $1}'
echo -e "a\nb\nc\nd\ne"  | awk '  {print "FNR: " FNR "  NR:" NR    ": " $1}'



# Parzyste lub nie parzyste
echo -e "a\nb\nc\nd\ne" | cat -n | awk 'NR%2==0'
# Uwaga wyœwietli tylko pierwsz¹ kolumne
echo -e "a\nb\nc\nd\ne" | cat -n | awk 'NR%2==0  {print NR ":" $1 }'
 echo -e "a\nb\nc\nd\ne" | cat -n | awk 'NR%2==0   {print NR ":" $0 }'


 

SET search_path TO mis_intf, mis_stg, mis_prcss, public;
insert into mis_stg.stg_sim_descriptions
( msisdn
, type
, barcode
)
select
  msisdn
, type
, substr(barcode, 7)
from intf_sim_descriptions i
where not exists
( select
    1
  from mis_stg.stg_sim_descriptions s
  where  s.barcode =  substr(i.barcode, 7)
);

update mis_stg.stg_sim_descriptions s
set 
  msisdn=i.msisdn
, type=i.type
from mis_intf.intf_sim_descriptions i
where  s.barcode = substr(i.barcode, 7)
  and  s.msisdn like '%000000%';


(coalesce(msisdn, '!@#$%^&*()' ), coalesce(t, '!@#$%^&*()' ) ) in (








48000000001
 48000000002

