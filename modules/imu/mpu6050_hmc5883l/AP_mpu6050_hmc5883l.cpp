#include "AP_mpu6050_hmc5883l.h"


MPU6050 gyac; // gyro and accel data
HMC5883L mag; //mag data
void setupMPU6050_HMC5883L (){ 
    #if I2CDEV_IMPLEMENTATION == I2CDEV_ARDUINO_WIRE
        Wire.begin();
    #elif I2CDEV_IMPLEMENTATION == I2CDEV_BUILTIN_FASTWIRE
        Fastwire::setup(400, true);
    #endif

    Serial.println("Initializing MPU6050 devices...");
    gyac.initialize();
    gyac.setI2CMasterModeEnabled(false);
    gyac.setI2CBypassEnabled(true);
    mag.initialize();
    gyac.setI2CMasterModeEnabled(true);
    Serial.println("Set slave address 0x80 for HMC5883L...");
    gyac.setSlaveAddress(0,HMC5883L_ADDRESS | 0x80);
    gyac.setSlaveRegister(0,HMC5883L_RA_DATAX_H);
    gyac.setSlaveEnabled(0,true);
    gyac.setSlaveDataLength(0,6);
    
    // verify connection
    Serial.println("Testing device connections...");
    Serial.println(gyac.testConnection() ? "MPU6050 connection successful" : "MPU6050 connection failed");
}

void readRawDataMPU6050_HMC5883L (int16_t *ax,int16_t *ay,int16_t *az,int16_t *gx,int16_t *gy,int16_t *gz,int16_t *mx,int16_t *my,int16_t *mz){
    gyac.getMotion6(ax, ay, az, gx, gy, gz);
    *mx=gyac.getExternalSensorWord(0);
    *mz=gyac.getExternalSensorWord(2);
    *my=gyac.getExternalSensorWord(4);
}

void readDataMPU6050_HMC5883L(accgyro_raw rawGA , mag_raw rawMag, accgyro_converted GAdata,mag_converted magdata){
    gyac.getMotion6(&rawGA.ax, &rawGA.ay,&rawGA.az, &rawGA.gx, &rawGA.gy, &rawGA.gz);
    rawMag.mx=gyac.getExternalSensorWord(0);
    rawMag.my=gyac.getExternalSensorWord(2);
    rawMag.mz=gyac.getExternalSensorWord(4);

    GAdata.ax = rawGA.ax / 16384.0;
    GAdata.ay = rawGA.ay / 16384.0;
    GAdata.az = rawGA.az / 16384.0;

    GAdata.gx = rawGA.gx / 131.0;
    GAdata.ay = rawGA.gy / 131.0;
    GAdata.az = rawGA.gz / 131.0;
}

//getgyroAcc rate
//getMag rate

