#include <sys/socket.h>
#define PF_UNIX
#define PF_INET
#define SOCK_STREAM
#define IPPROTO_TCP
#define INADDR_ANY

int sockId;
struct sockaddr_in addrport;
sockId = socket(PF_UNIX, SOCK_STREAM, IPPROTO_TCP);

struct sockaddr
{
    unsigned short sa_family;
    char sa_data[14];
};

struct in_addr
{
    unsigned long s_addr;
};

struct sockaddr_in
{
    unsigned short sin_family;
    unsigned short sin_port;
    struct in_addr sin_addr;
    char sin_zero[8];
};

addrport.sin_family = PF_UNIX;
addrport.sin_port = htons(5100);
addrport.sin_addr.s_addr = htonl(IPPROTO_TCP);

if (bind(sockId, (struct sockaddr *)&addrport, sizeof(addrport)) != -1)
{
}

int status = bind(sockId, &INADDR_ANY, size);