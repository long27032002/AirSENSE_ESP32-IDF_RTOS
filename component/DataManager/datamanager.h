#ifndef __DATAMANAGER_H__
#define __DATAMANAGER_H__

#include "esp_err.h"
#include "esp_log.h"
#include "sdkconfig.h"
#include <string.h>
#include <inttypes.h>

struct dataSensor_st
{
    int64_t timeStamp;

#if CONFIG_USING_BME280
    float temperature;
    float humidity;
    float pressure;
#endif // CONFIG_USING_BME

#if CONFIG_USING_PMS7003
    uint32_t pm1_0;
    uint32_t pm2_5;
    uint32_t pm10;
#endif // CONFIG_USING_PMS

#if CONFIG_USING_CO2_SENSOR
    uint32_t CO2;
#endif 

#if CONFIG_USING_NO_SENSOR
    uint32_t NO;
#endif // CONFIG_USING_NO_SENSOR

#if CONFIG_USING_CO_SENSOR
    uint32_t CO;
#endif // CONFIG_USING_CO_SENSOR

#if CONFIG_USING_CO2_SENSOR
    uint32_t SO2;
#endif // CONFIG_USING_CO2_SENSOR

};

const char dataSensor_templateSaveToSDCard[] = "%s,%0.2f,%0.2f,%0.2f,%"PRIu32",%"PRIu32",%"PRIu32"";



#endif