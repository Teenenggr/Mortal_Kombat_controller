#include <Keyboard.h>

//int lastSent1 = 0;
const int ONE = A0;
const int TWO = 2;
const int THR = 3;
const int FOU = 4;
const int FIV = 5;
const int SIX = 6;
const int SEV = 7;
const int EIG = 8;
const int NIN = 9;
const int TEN = 10;
const int ELE = 16;
const int TWE = 14;
const int THI = 15;
const int FON = A1;
const int FIF = A2;
const int SIN = A3;
int lastSent = 0;
int myPins[] = {FON,FIF,SIN,ONE, TWO, THR, FOU, FIV, SIX, SEV, EIG, TEN ,ELE, TWE, THI};
bool myPinsSt[] = {false,false,false, false, false, false, false, false, false, false, false, false, false ,false, false, false,false,false,false,false};
bool dirPinStat[] = {false,false,false, false, false, false, false, false, false, false, false, false, false ,false, false, false,false,false,false,false};

int de = 50;
bool locL = true;
void setup() {
  Keyboard.begin();
    Serial.begin(9600);
    pinMode(ONE, INPUT);
  pinMode(TWO, INPUT);
    pinMode(THR, INPUT);
    pinMode(FOU, INPUT);
    pinMode(FIV, INPUT);
    pinMode(SIX, INPUT);
    pinMode(SEV, INPUT);
    pinMode(EIG, INPUT);
//    pinMode(NIN, INPUT);
    pinMode(TEN, INPUT);
    pinMode(ELE, INPUT);
    pinMode(TWE, INPUT);
    pinMode(THI, INPUT);
    pinMode(FON, INPUT);
    pinMode(FIF, INPUT);
    pinMode(SIN, INPUT);
}

void loop() {



//  if (digitalRead(TWO) == HIGH) {
//        thr();
//      qcf();
//      qcf();
//      hk();


//      l_kp();a
//      Keyboard.releaseAll();
//      delay(500);
//  }


    if(digitalRead(7) == HIGH) {
      if(dirPinStat[7] != true) {
        Keyboard.press('d');  
      }
      dirPinStat[7] = true;
    } else {
      Keyboard.release('d');
      dirPinStat[7] = false;
    }

    if(digitalRead(3) == HIGH) {
      if(dirPinStat[3] != true) {
        Keyboard.press('w');  
      }
      dirPinStat[3] = true;
    } else {
      Keyboard.release('w');
      dirPinStat[3] = false;
    }

    if(digitalRead(5) == HIGH) {
      if(dirPinStat[5] != true) {
        Keyboard.press('a');  
      }
      dirPinStat[5] = true;
    } else {
      Keyboard.release('a');
      dirPinStat[5] = false;
    }

//    if(digitalRsnStat[9] != true) {
//        Keyboard.press('s');  
//      }
//      dirPinStat[9] = true;
//    } else {
//      Keyboard.release('s');
//      dirPinStat[9] = false;
//    }

    if(digitalRead(18) == HIGH) {
      if(dirPinStat[15] != true) {
        Keyboard.press('g');  
      }
      dirPinStat[15] = true;
    } else {
      Keyboard.release('g');
      dirPinStat[15] = false;
    }

    if(digitalRead(19) == HIGH) {
      if(dirPinStat[14] != true) {
        Keyboard.press('h');  
      }
      dirPinStat[14] = true;
    } else {
      Keyboard.release('h');
      dirPinStat[14] = false;
    }

    if(digitalRead(20) == HIGH) {
      locL = true;
    }
    if(digitalRead(21) == HIGH) {
      locL = false;
    }
  
     for (byte i = 0; i < 15; i = i + 1) {
        if(digitalRead(myPins[i]) == HIGH) {
//          if(lastSent != myPins[i]) {
//           lastSent = myPins[i];
           Serial.println(myPins[i]);
           switch(myPins[i]) {
              case 2:
               v3_3_combo();
              break;    
              case 16:
               v3_2_combo();
              break;
              case 8:
               hoolCS();
              break;
              case 6:
               CSA();
              break;
              case 10:
              hoolES();
              break;
              case 15:
              CS();
              break;
              case 14:
              ECS();
              break;

              case 4:
              hooligan();
              break;
//           }
//           Keyboard.releaseAll();
//          delay(500);
           delay(5);
//      }
        } 
      }
     }
}

void pp() {
  zigR();
//   qcf();
   hk();
   delay(100);
}

void pp1() {
   right();
   h_kp();
   delay(300);
//   hp();
}

void spiralArrow() {
  if(locL) {
    qcf();
  }else {
    qcb();
  }
  h_kp();
}

void MspiralArrow() {
  if(locL) {
    qcf();
  }else {
    qcb();
  }
  mk();
}

void ESA() {
  if(locL) {
    qcf();
  }else {
    qcb();
  }
  hk();
}


void cannonStrike() {
  if(locL) {
    qcb();
  }else {
    qcf();
  }
  hk();
}

void ECST() {
  if(locL) {
    qcb();
  }else {
    qcf();
  }
  mh_k();
}

void cannonSpike() {
  if(locL) {
    zigR();
  }else {
    zigL();
  }
  hk();
//  h_kp();
}

void my_delay(int time) {
}

void ECS() {
  if(locL) {
    zigR();
  }else {
    zigL();
  }
  mh_k();
//  h_kp();
}

void CS() {
  if(locL) {
    zigR();
  }else {
    zigL();
  }
  hk();
//  h_kp();
}

void CSA() {
 if(locL) {
  qcf();
  qcf();
 } else {
  qcb();
  qcb();
 }
 hk();
}

void fcombo() {
  DT();
  delay(2000);
  hp();
  delay(100);
  Keyboard.releaseAll();
  locL = !locL;
  DS();
  Keyboard.releaseAll();
  delay(400);
  down();
  lp();
  Keyboard.releaseAll();
  delay(250);  
  LC();
  Keyboard.releaseAll();
  delay(300);
  cannonSpike();
  Keyboard.releaseAll();
  delay(300);
  CSA();
}

void v3_2_combo() {
  down();
  hp();
  Keyboard.releaseAll();
  delay(200);
  DS();
  Keyboard.releaseAll();
  delay(800);
  down();
  lp();
  Keyboard.releaseAll();
  delay(250);  
  LC();
  Keyboard.releaseAll();
  delay(200);
  EHC();
  Keyboard.releaseAll();
  delay(300);
}

void v3_3_combo() {
  DT();
  delay(2000);
  hp();
  Keyboard.releaseAll();
  delay(150);
  locL= false;
  cannonSpike();
}

void EHC() { // ex hooligan
   if(locL) {
    hcf();
  }else {
    hcb();
  }
    mh_p();
    delay(400);
    hk();
}

void hooligan() {
  if(locL) {
    hcf();
  }else {
    hcb();
  }
    hp();
    delay(400);
    hk();
}

void combo5() {
  hk();
  Keyboard.releaseAll();
  delay(800);
  KB();
//  KB();
  Keyboard.releaseAll();
  delay(500);
  MspiralArrow();
  delay(300);
}
void combo4(){ // s-2 v-1
  m_kp();
  Keyboard.releaseAll();
  delay(900);
  cannonSpike();
//  cannonSpike();
//  Keyboard.releaseAll();
  CSA();
//  CSA();
//  CSA();
  delay(300);
//  CSA();
}

void LC() {
  if(locL==true) {
    left();
  }else {
    right();
  }
  mp();
  delay(20);
  hk();
//  delay(de);
}
void KB() {
  if(locL) {
  right();
 } else {
  left();
 }
 hk();
}

void thr() {
  if(locL) {
        left();  
      }else {
        right();
      }
  l_kp();
}

void DT() {
    h_kp();
   delay(600);
   hp();
   delay(100);
}

void DS() {
      if(locL) {
        right();  
      }else {
        left();
      }
//   delay(500);
   h_kp();
   delay(100);
}

void mh_p() {
  Keyboard.press('j');
    Keyboard.press('b');
    delay(de);
    Keyboard.release('j');
    Keyboard.release('b');
}

void mh_k() {
  Keyboard.press('h');
    Keyboard.press('k');
    delay(de);
    Keyboard.release('h');
    Keyboard.release('k');
}

void RE() {
   h_kp();
   delay(200);
   hk();
   delay(100);
}

void hool() {
      if(locL) {
        hcf();  
      }else {
        hcb();
      }
      
      hp();
      delay(300);
      l_kp();
}

void hoolES() {
      if(locL) {
        hcf();  
      }else {
        hcb();
      }
      
      hp();
//      delay(300);
//      hk();
}

void hoolCS() {
      if(locL) {
        hcf();  
      }else {
        hcb();
      }
      
      hp();
      delay(300);
      l_kp();
}

  void qcf() {
      Keyboard.press('s');
      delay(de);
      Keyboard.press('d');
      delay(de);
      Keyboard.release('s');
      delay(de);
      Keyboard.release('d');
      delay(de);
  }

  void qcb() {
     Keyboard.press('s');
      delay(de);
      Keyboard.press('a');
      delay(de);
      Keyboard.release('s');
      delay(de);
      Keyboard.release('a');
      delay(de);
  }

  void zigR() {
     Keyboard.press('d');
      delay(de);
      Keyboard.press('s');
      delay(de);
      Keyboard.release('s');
      delay(de);
      Keyboard.release('d');
      delay(de);
  }

  void zigL() {
     Keyboard.press('a');
      delay(de);
      Keyboard.press('s');
      delay(de);
      Keyboard.release('s');
      delay(de);
      Keyboard.release('a');
      delay(de);
  }


  void l_kp() {
    Keyboard.press('g');
    Keyboard.press('v');
    delay(de);
    Keyboard.release('g');
    Keyboard.release('v');
  }

  void m_kp() {
    Keyboard.press('h');
    Keyboard.press('b');
    delay(de);
    Keyboard.release('h');
    Keyboard.release('b');
  }

  void h_kp() {
    Keyboard.press('j');
    Keyboard.press('k');
    delay(de);
    Keyboard.release('j');
    Keyboard.release('k');
  }

  void h_uk() {
    Keyboard.press('w');
    Keyboard.press('k');
    delay(de);
    Keyboard.release('w');
    Keyboard.release('k');
  }
  
  void hk() {
    Keyboard.press('k');
    delay(de);
    Keyboard.release('k');
  }

  void up() {
    Keyboard.press('w');
    delay(de);
  }

  void right() {
    Keyboard.press('d');
    delay(de);
  }

  void left() {
    Keyboard.press('a');
    delay(de);
  }

  void down() {
    Keyboard.press('s');
    delay(de);
  }

  

  void mk() {
    Keyboard.press('h');
    delay(de);
    Keyboard.release('h');
  }

  void lk() {
    Keyboard.press('g');
    delay(de);
    Keyboard.release('g');
  }

  void lp() {
    Keyboard.press('v');
    delay(de);
    Keyboard.release('v');
  }

  void mp() {
    Keyboard.press('b');
    delay(de);
    Keyboard.release('b');
  }

  void hp() {
    Keyboard.press('j');
    delay(de);
    Keyboard.release('j');
  }

  void hcf() {
      Keyboard.press('a');
      delay(de);
      Keyboard.press('s');
      delay(de);
      Keyboard.release('a');
      delay(de);
      Keyboard.press('d');
      delay(de);
      Keyboard.release('s');
      delay(de);
      Keyboard.release('d');
      delay(de);
  }

  void hcb() {
      Keyboard.press('d');
      delay(de);
      Keyboard.press('s');
      delay(de);
      Keyboard.release('d');
      delay(de);
      Keyboard.press('a');
      delay(de);
      Keyboard.release('s');
      delay(de);
      Keyboard.release('a');
      delay(de);
  }
  
//void checkPin(int pin) {sdksdk
//  if(digitalRead(pin) == HIGH) {
//    if(myPinsSt[pin] != true) {
//      myPinsSt[pin] = true;
//
////      Serial.println(pin);
//      delay(100);
//    }
//  } else {
//    myPinsSt[pin] = false;
//  }
////kdkksdjksdjkkdkksdjksdjk
