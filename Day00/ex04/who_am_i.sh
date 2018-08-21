#include <ldap.h>
ldapwhoami -h ldap-master.42.us.org -Q| cut -d "," -f 1,2,3,4,5,6
