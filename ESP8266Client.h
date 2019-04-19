#include Client.h

class ESP8266Client : public Client
{
public:
    
    int connect(IPAddress ip, uint16_t port) = 0;
    int connect(const char *host, uint16_t port) = 0;
    size_t write(uint8_t) = 0;
    size_t write(const uint8_t *buf, size_t size) = 0;
    int available() = 0;
    int read() = 0;
    int read(uint8_t *buf, size_t size) = 0;
    int peek() = 0;
    void flush() = 0;
    void stop() = 0;
    uint8_t connected() = 0;
    operator bool() = 0;

protected:
    uint8_t *rawIPAddress(IPAddress &addr) { return addr.raw_address(); };
}