#include <QCoreApplication>
#include <QObject>
#include <QDebug>
#include "influxlib/include/InfluxDBFactory.h"
//#include "influxlib/include/InfluxDB.h"

#include <iostream>



int main(int argc,char *argv[])
{
    auto db = influxdb::InfluxDBFactory::Get("http://localhost:8086?db=temperature_db");
    db->createDatabaseIfNotExists();
    for (auto i: db->query("SHOW DATABASES")) std::cout<<i.getTags()<<std::endl;
    return 0;
}
