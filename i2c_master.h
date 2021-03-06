#ifndef I2C_MASTER_H
#define I2C_MASTER_H

#define I2C_READ 0x01
#define I2C_WRITE 0x00

void i2c_init(void);
uint8_t i2c_start(uint8_t address, uint16_t timeout = 1000);
uint8_t i2c_write(uint8_t data, uint16_t timeout = 1000);
uint8_t i2c_read_ack(uint16_t timeout = 1000);
uint8_t i2c_read_nack(uint16_t timeout = 1000);
uint8_t i2c_transmit(uint8_t address, uint8_t* data, uint16_t length);
uint8_t i2c_receive(uint8_t address, uint8_t* data, uint16_t length);
void i2c_stop(void);

#endif // I2C_MASTER_H
