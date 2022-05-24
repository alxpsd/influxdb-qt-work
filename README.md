# Work with InfluxDB
InfluxDB example with Qt

Установка БД:

Сервер:
sudo apt-get install influxdb
sudo systemctl start influxdb
sudo systemctl status influxdb

Клиент:
sudo apt install influxdb-client

Настройка:

The InfluxDB configuration file is located by default in the /etc/influxdb/influxdb.conf folder.	

Many features are commented out. To enable them, simply open the configuration file and delete the "#" symbols from the relevant line.

To modify the configuration file use the command:

sudo nano /etc/influxdb/influxdb.conf

For example, to access via HTTP request (enabling endpoints), uncomment the "enabled" item in the "http" section.

curl -G http://localhost:8086/query -u ADMIN_NAME:PASSWORD_NAME --data-urlencode "q=QUERY"


# QT
C++ 17 compiler. You can install g++ 9.3.0 through 
sudo apt-get install g++.

CMake 3.12+ tool. You can install CMake 3.16.3 through 
sudo apt-get install cmake.
Curl library. You can install curl4-openssl through 
sudo apt-get install libcurl4-openssl-dev.
Boost 1.57+ library (optional). Install Boost 1.71 c through 
sudo apt-get install libboost1.71-all-dev.
