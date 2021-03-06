#pragma once

struct CmuData
{
    CmuData()
        :  cmuNumber(0)
        , cellVoltage{63, 64, 65, 66, 67, 68, 69, 70}
        , pcbTemperature(47)
        , cellTemperature{48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62}
    {}

    /* has to be between 0 and 3 (inclusive) */
    unsigned char cmuNumber;
    short cellVoltage[8];
    unsigned short pcbTemperature;
    unsigned short cellTemperature[15];
};
