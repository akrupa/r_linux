#!/bin/bash

echo "Podaj cyfrę dnia tygodnia"
read d
case "$d" in
  "1") echo "Poniedziałek" ;;
  "2") echo "Wtorek" ;;
  "3") echo "Środa" ;;
  "4") echo "Czwartek" ;;
  "5") echo "Piątek" ;;
  "6") echo "Sobota" ;;
  "7") echo "Niedziela" ;;
  *) echo "Nic nie wybrałeś"
esac



#Składnia:

case $zmienna in
  "wzorzec1") polecenie1 ;;
  "wzorzec2") polecenie2 ;;
  "wzorzec3") polecenie3 ;;
  *) polecenie_domyślne
esac

Przykład:

echo "Podaj numer miesiaca"
read d
case "$d" in
  "1") echo "Styczen" ;;
  "2") echo 'Luty' ;;
  "3") echo 'Marzec' ;;
  "4") echo 'Kwiecien' ;;
  "5") echo 'Maj' ;;
  "6") echo 'Czerwiec' ;;
  "7") echo 'Lipiec' ;;
  "8") echo 'Sierpien' ;;
  "9") echo 'Wrzesien' ;;
  "10") echo 'Październi' ;;
  "11") echo 'Listopad' ;;
  "12") echo 'Grudzien' ;;
  *) echo "Nic nie wybrales";

