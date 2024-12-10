#include "hardWareConfig.h"

#ifdef EN_IMU_MPU6050_HMC5883L // defined in main/hardwareConfig.h
#include "I2Cdev.h"
#include "MPU6050.h"
#include "HMC5883L.h"
#include "hardWareConfig.h"

struct accgyro_converted{
    float ax,ay,az,gx,gy,gz;
};
struct mag_converted{
    float mx,my,mz;
};
struct accgyro_raw{
    int16_t ax,ay,az,gx,gy,gz;
};
struct mag_raw{
    int16_t mx,my,mz;
};

void readDataMPU6050_HMC5883L(accgyro_raw rawGA , mag_raw rawMag, accgyro_converted GAdata,mag_converted magdata);
void setupMPU6050_HMC5883L ();
#endif
