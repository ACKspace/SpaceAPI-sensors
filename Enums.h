#ifndef ENUMS_H
#define ENUMS_H

namespace Unit
{
    enum Enum : uint8_t
    {
        Undefined   = 0,

        // Temperatures
        Celcius             = 1,
        Fahrenheit          = 2,
        Kelvin              = 3,
        Delisle             = 4, // °De
        Newton              = 5, // °N
        Rankine             = 6, // °R
        Reaumur             = 7, // °Ré
        Roemer              = 8, // °Rø

        // Pressure
        HectoPascal         = 9, // hPa
        //PoundsPerSquareInch = 0, // psi
        //Bar                 = 0, //
        //Atmosphere          = 0, // atm
        //TechnicalAtmosphere = 0, // at

        // Radiation        
        CountsPerMinute     = 10, // cpm
        //rPerHour            = 11, // r/h (Rad or Roentgen?)
        MicroSievertPerHour = 12, // µSv/h
        MiliSievertPerYear  = 13, // mSv/a
        MicroSievertPerYear = 14, // µSv/a

        Percent             = 15,

        // Count (beverages)
        Bottle              = 16, // btl
        Crate               = 17,

        // Power
        MiliWatt            = 18, // mW
        Watt                = 19, // W
        VoltAmpere          = 20, // VA

        // Speed (currently, wind only)
        MeterPerSecond      = 21, // m/s
        KilometerPerHour    = 22, // km/h
        Knots               = 23, // kn

        // Rotational
        Degrees             = 24, // °

        // Currency
        BTC                 = 25,
        EUR                 = 26,
        USD                 = 27,
        GBP                 = 28
    };
}

#endif
