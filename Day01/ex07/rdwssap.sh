#/bin/sh
cat /etc/passwd | grep -v '^#' | awk '{if(!(NR % 2))print $0}' | 
rev | cut -d ':' -f 7 | sort -r | awk '{if(NR >= '$FT_LINE1'