#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mslibflood.h"

int main(int argc, char** argv) {
    if(argc < 4) {
        puts("Usage: [IP] [PORT] [MESSAGE] [COUNT]");
        return 1;
    }
    struct ip_header iph;
    iph.ip = argv[1];
    iph.port = atoi(argv[2]);
    msf_flood(&iph, argv[3], atoi(argv[4]));
    return 0;
}