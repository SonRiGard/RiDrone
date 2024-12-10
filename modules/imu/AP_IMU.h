#pragma once

#include "Arduino.h"
#include "hardWareConfig.h"
#include "AP_mpu6050_hmc5883l.h"
#include "QueueManager.h"

struct imudata9Dof{
    accgyro_raw AGraw;
    mag_raw Mraw;
    accgyro_converted AGconverted;
    mag_converted Mconverted;
};

