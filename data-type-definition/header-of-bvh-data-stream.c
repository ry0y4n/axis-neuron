// Header format of BVH data
typedef struct _BvhDataHeader
{
    uint16_t Token1; // Package start token: 0xDDFF
    DATA_VER DataVersion; // Version of community data format. e.g.: 1.0.0.2
    uint16_t DataCount; // Values count
    uint8_t WithDisp; // With/out displacement
    uint8_t WithReference; // With/out reference bone data at first
    uint32_t AvatarIndex; // Avatar index
    uint8_t AvatarName[32]; // Avatar name
    uint32_t FrameIndex; // Frame data index
    uint32_t Reserved; // Reserved, only enable this package has 64bytes length uint32_t
    Reserved1; // Reserved, only enable this package has 64bytes length uint32_t
    Reserved2; // Reserved, only enable this package has 64bytes length uint16_t Token2;
    // Package end token: 0xEEFF
} BvhDataHeader;