#ifndef _MSLIBFLOOD_H_
#define _MSLIBFLOOD_H_
struct ip_header {
    char* ip;
    int port;
};

int msf_flood(struct ip_header* iph, char* data, int count);

#endif
