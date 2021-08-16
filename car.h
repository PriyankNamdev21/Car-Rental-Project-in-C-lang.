#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED
#include<time.h>

struct user
{
    char userid[20];
    char pwd[20];
    char name[20];
};

struct car
{
    int car_id;
    char car_name[50];
    int capacity;
    int car_count;
    int price;
};

struct customer_car_detail
{
    int car_id;
    char cust_name[30];
    char pick[30];
    char drop[30];
    struct tm sd,ed;

};

typedef struct user user;
typedef struct car car;
typedef struct customer_car_detail customer_car_detail;

void addAdmin();
user* getIput();
int checkuserexist(user,char*);
int adminMenu();
void addEmployee();
void viewEmployee();
void addCarDetails();
void showCarDetails();
int deleteEmp();
int deleteCarModel();
void sub_str(char*,char*,char);
int empMenu();
int rentCar();
int selectCarModel();
void updateCarCount(int);
void bookedCarDetails();
char* getCarName(int);
int isValidDate(struct tm);
void availableCarDetails();
void showAllCarDetails();
int isVaildDate1(struct tm,struct tm);


#endif // CAR_H_INCLUDED
