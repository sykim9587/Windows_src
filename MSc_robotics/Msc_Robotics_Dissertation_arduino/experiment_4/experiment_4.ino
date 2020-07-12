#include <Wire.h>
#include <Adafruit_I2CDevice.h>
#include <Adafruit_I2CRegister.h>
#include "Adafruit_MCP9600.h"
#include "MegunoLink.h"
#include <math.h>
//#include "pid.h"
#define I2C_ADDRESS (0x67)

float CF3 = 11;
int FF1 = A3;
int FF2 = A0;
int FFdata1 = 0;
int FFdata2 = 0;
float vout31;
float vout32;


Adafruit_MCP9600 mcp;
Adafruit_MCP9600 mcp2;
Adafruit_I2CDevice i2c_dev1 = Adafruit_I2CDevice(0x67);
Adafruit_I2CDevice i2c_dev2 = Adafruit_I2CDevice(0x60);



void setup()
{
  Serial.begin(115200);
  pinMode(FF1, INPUT);
  pinMode(FF2, INPUT);  

  while (!Serial) {
    delay(10);
  }
  Serial.println("MCP9600 HW test");

  /* Initialise the driver with I2C_ADDRESS and the default I2C bus. */
  if (! mcp.begin(0x67)) {
    Serial.println("1st Sensor not found. Check wiring!");
    while (1);
  }
  if (! mcp2.begin(0x60)) {
    Serial.println("2nd Sensor not found. Check wiring!");
    while (1);
  }
  Serial.println("Found both MCP9600!");

  mcp.setADCresolution(MCP9600_ADCRESOLUTION_18);
  Serial.print("ADC resolution set to ");
  switch (mcp.getADCresolution()) {
    case MCP9600_ADCRESOLUTION_18:   Serial.print("18"); break;
    case MCP9600_ADCRESOLUTION_16:   Serial.print("16"); break;
    case MCP9600_ADCRESOLUTION_14:   Serial.print("14"); break;
    case MCP9600_ADCRESOLUTION_12:   Serial.print("12"); break;
  }
  Serial.println(" bits");

  mcp2.setADCresolution(MCP9600_ADCRESOLUTION_18);
  Serial.print("ADC resolution set to ");
  switch (mcp2.getADCresolution()) {
    case MCP9600_ADCRESOLUTION_18:   Serial.print("18"); break;
    case MCP9600_ADCRESOLUTION_16:   Serial.print("16"); break;
    case MCP9600_ADCRESOLUTION_14:   Serial.print("14"); break;
    case MCP9600_ADCRESOLUTION_12:   Serial.print("12"); break;
  }
  Serial.println(" bits");

  mcp.setThermocoupleType(MCP9600_TYPE_T);
  Serial.print("Thermocouple type set to ");
  switch (mcp.getThermocoupleType()) {
    case MCP9600_TYPE_K:  Serial.print("K"); break;
    case MCP9600_TYPE_J:  Serial.print("J"); break;
    case MCP9600_TYPE_T:  Serial.print("T"); break;
    case MCP9600_TYPE_N:  Serial.print("N"); break;
    case MCP9600_TYPE_S:  Serial.print("S"); break;
    case MCP9600_TYPE_E:  Serial.print("E"); break;
    case MCP9600_TYPE_B:  Serial.print("B"); break;
    case MCP9600_TYPE_R:  Serial.print("R"); break;
  }
  Serial.println(" type");

  mcp2.setThermocoupleType(MCP9600_TYPE_T);
  Serial.print("Thermocouple type set to ");
  switch (mcp2.getThermocoupleType()) {
    case MCP9600_TYPE_K:  Serial.print("K"); break;
    case MCP9600_TYPE_J:  Serial.print("J"); break;
    case MCP9600_TYPE_T:  Serial.print("T"); break;
    case MCP9600_TYPE_N:  Serial.print("N"); break;
    case MCP9600_TYPE_S:  Serial.print("S"); break;
    case MCP9600_TYPE_E:  Serial.print("E"); break;
    case MCP9600_TYPE_B:  Serial.print("B"); break;
    case MCP9600_TYPE_R:  Serial.print("R"); break;
  }
  Serial.println(" type");

  mcp.setFilterCoefficient(3);
  Serial.print("Filter coefficient value set to: ");
  Serial.println(mcp.getFilterCoefficient());


  mcp2.setFilterCoefficient(3);
  Serial.print("Filter coefficient value set to: ");
  Serial.println(mcp2.getFilterCoefficient());

  mcp.setAlertTemperature(1, 150);
  Serial.print("Alert #1 temperature set to ");
  Serial.println(mcp.getAlertTemperature(1));
  mcp.configureAlert(1, true, true);  // alert 1 enabled, rising temp

  mcp2.setAlertTemperature(1, 150);
  Serial.print("Alert #1 temperature set to ");
  Serial.println(mcp2.getAlertTemperature(1));
  mcp2.configureAlert(1, true, true);  // alert 1 enabled, rising temp

  mcp.enable(true);
  mcp2.enable(true);
  Serial.println(F("------------------------------"));
}

void loop()
{
  TimePlot temp1("tem1"), temp2("tem2"), flexi1("flexiforce");
  temp1.SendData("temperature 1", mcp.readThermocouple());
  temp2.SendData("temperature 2", mcp2.readThermocouple());
  FFdata1 = analogRead(FF1);
  vout31 = (FFdata1 * 3.3) / 1023.0;
  //vout32 = (FFdata2 * 3.3) / 1023.0;
  vout31 = CF3 * vout31;
  //vout32 = CF3 * vout32;
  flexi1.SendData("Flexiforce", vout31);
  //flexi2.SendData("Flexiforce 2", vout32);
  delay(1000);
}
