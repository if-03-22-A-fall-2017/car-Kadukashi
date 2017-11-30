#include <stdio.h>
#include <stdbool.h>
#include "car.h"

#define MAX_ACCERATION_RATE_AIXAM 1.0;
#define MAX_ACCERATION_RATE_FIAT 2.26;
#define MAX_ACCERATION_RATE_JEEP 3.26;
#define MAX_ACCERATION_RATE 8;

struct CarType{
  enum type type;
  enum color color;
  double fill_level;
  double acceleration_rate;
  double speed;
  bool isRented;


};

static struct CarType AIXAM1 = {AIXAM, RED, 16,0,0,false};
static struct CarType FIAT_MULTIPLA1 = {FIAT_MULTIPLA, GREEN, 65,0,0,false};
static struct CarType FIAT_MULTIPLA2 = {FIAT_MULTIPLA, BLUE, 65,0,0,false};
static struct CarType FIAT_MULTIPLA3 = {FIAT_MULTIPLA, ORANGE, 65,0,0,false};
static struct CarType JEEP1 = {JEEP, SILVER, 80,0,0,false};
static struct CarType JEEP2 = {JEEP, BLACK, 80,0,0,false};
struct CarType car_park[6] = {AIXAM1, FIAT_MULTIPLA1, FIAT_MULTIPLA2, FIAT_MULTIPLA3, JEEP1, JEEP2};

void init()
{
  for (int i = 0; i < 6; i++) {
    car_park[i].isRented = false;
  
    car_park[i].speed = 0;

  }
}
Car get_car(enum type type)
{
  for (int i = 0; i < 6; i++)
  {
    if (type == car_park[i].type && car_park[i].isRented == false)
    {
      car_park[i].isRented = true;
      return &car_park[i];
    }
  }
  return NULL;
}
enum type get_type(Car car)
{
  return car->type;
}
enum color get_color(Car car)
{
  return car->color;
}
double get_fill_level(Car car)
{
  return car->fill_level;
}
double get_acceleration_rate(Car car)
{
  return car->acceleration_rate;
}
void set_acceleration_rate(Car car, double acceleration_rate)
{
   car->acceleration_rate = acceleration_rate;
}
int get_speed(Car car)
{
  return car->speed;
}
void accelerate(Car car) {
  /* code */
}
