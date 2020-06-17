// Socket status
typedef enum _SocketStatus
{
    CS_Running, // Socket is working correctly
    CS_Starting,// Is trying to start service
    CS_OffWork, // Not working
}