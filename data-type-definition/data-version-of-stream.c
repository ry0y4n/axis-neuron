// Data version
typedef union DataVersion
{
    uint32_t _VersionMask;
    struct
{
    uint8_t BuildNumb;  // Build number
    uint8_t Revision;   // Revision number
    uint8_t Minor;      // Subversion number
    uint8_t Major;      // Major version number
};
} DATA_VER;