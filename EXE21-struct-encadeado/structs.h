
typedef struct Buf
{
    char buffer[200];
    
} Buf_t;

typedef struct Serial
{
    const char *ComPort;
    unsigned int BaudRate;
    Buf_t Config;

} Serial_t;