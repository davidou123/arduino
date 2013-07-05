/*　教學　可以看http://blog.davidou.org/archives/710
*/

#include <IRremote.h>

IRsend irsend;

void setup()
{
  Serial.begin(9600);
}

void loop() {

    for (int i = 0; i < 3; i++) {
      irsend.sendNEC(0x807F30CF, 32); //  TV power code 　　這邊採用NEC的模式　,807F30CF　是我的電視訊號
      delay(400);
    }
    
   delay(1400);　
}

//#define NEC 1
//#define SONY 2
//#define RC5 3
//#define RC6 4
//#define DISH 5
//#define SHARP 6
//#define PANASONIC 7
//#define JVC 8
//#define SANYO 9
//#define MITSUBISHI 10
//#define UNKNOWN -1
