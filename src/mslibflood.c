#include "common.h"
#include "mslibflood.h"

int msf_flood(struct ip_header* iph, char* data, int count) {
    struct sockaddr_in addr;
    addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = inet_addr(iph->ip);
    addr.sin_port = htons(iph->port);
    int sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    int aux;
    int res;
    for(aux = 0; aux < count; aux++) {
        res = sendto(sockfd, (char*)data, sizeof(data), 0, (struct sockaddr*)&addr, sizeof(addr));
        if(res < 0)
            printf("Message %d send error!!\n", aux);
        else 
            printf("Message %d sended sucefully!!\n", aux);
    }
    printf("message %s has sended %d times", data, count);
    return 0;
}