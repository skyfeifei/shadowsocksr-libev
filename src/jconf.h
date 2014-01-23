#ifndef _JCONF_H
#define _JCONF_H

#define MAX_REMOTE_NUM 10
#define MAX_CONF_SIZE 16 * 1024
#define DNS_THREAD_NUM 4
#define MAX_UDP_CONN_NUM 4096

typedef struct
{
    const char *host;
    const char *port;
} addr_t;

typedef struct
{
    int  remote_num;
    addr_t remote_addr[MAX_REMOTE_NUM];
    char *remote_port;
    char *local_addr;
    char *local_port;
    char *password;
    char *method;
    char *timeout;
} jconf_t;

jconf_t *read_jconf(const char* file);
void parse_addr(const char *str, addr_t *addr);

#endif // _JCONF_H
