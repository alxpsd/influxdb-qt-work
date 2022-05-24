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

Установить следующие библиотеки:  
 
C++ 17 compiler. You can install g++ 9.3.0 through   
sudo apt-get install g++.

CMake 3.12+ tool. You can install CMake 3.16.3 through    
sudo apt-get install cmake.  

Curl library. You can install curl4-openssl through     
sudo apt-get install libcurl4-openssl-dev.  

Boost 1.57+ library (optional). Install Boost 1.71 c through   
sudo apt-get install libboost1.71-all-dev.

Скачать репозиторий:  
git clone https://github.com/offa/influxdb-cxx  
 
Распаковать, создать папку build:  
cd influxdb-cxx  
mkdir build && cd build  

Собрать:  
cmake ..  
sudo make install

Если будут ошибки в ходе сборки может понадобиться установить:  
EDIT: Looks like that package is only available in Debian Bullseye and newer... You could probably still install it on Buster:  
Code:  
wget http://ftp.ca.debian.org/debian/pool/main/c/catch2/catch2_2.12.1-1_all.deb  
sudo apt install ./catch2_2.12.1-1_all.deb  
...or install Catch2 manually:  
Code:  
git clone --depth 1 --branch v2.12.1 -c advice.detachedHead=false https://github.com/catchorg/Catch2.git  
cmake Catch2 -B Catch2/build -DBUILD_TESTING=OFF  
sudo cmake --build Catch2/build --target install  
...or try ReaPack's pre-built Linux binaries.   
и  
git clone https://github.com/rollbear/trompeloeil.git  
cd trompeloeil   
mkdir build ; cd build  
cmake -G "Unix Makefiles" ..  
sudo cmake --build . --target install  

The client library builds libInfluxDB.so and installs at /usr/local/lib/libInfluxDB.so. Header files InfluxDBFactory.h, InfluxDB., Point.h, Transport.h are installed at /usr/local/include/.




