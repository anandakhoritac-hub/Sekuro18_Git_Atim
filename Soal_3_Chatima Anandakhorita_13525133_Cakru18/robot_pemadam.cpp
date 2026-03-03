
#include <iostream>
#include <string>

class Robot_Pemadam{

private:
    int jarak;
    std::string status;

public:
    void inputSensor(int d){
        jarak = d;
    }
    void prosesLogika(){
        if (jarak > 20){
            status = "Maju Mencari Api";
        } else if (jarak <= 20 && jarak > 5){
            status = "UDAH DEKET NIH BRAY";
        } else{
            status = "Posisi Tepat! gas semprot kali ya!";
        }
    }
    void cetakStatus(){
        std::cout << "[Sensor: " << jarak << "cm] -> Action: [" << status << "]" << std:: endl;
    }
};

int main (){
    Robot_Pemadam Ultraman;
    bool isRunning = true;
    int distance;

    while (isRunning) {
        std::cout << "Masukkan jarak sensor: ";
        std::cin >> distance;

        if (distance == 67){
            std::cout << "Program telah berakhir." << std::endl;
            break;

        } else{
            Ultraman.inputSensor(distance);
            Ultraman.prosesLogika();
            Ultraman.cetakStatus();

        }


    }

    return 0;

}