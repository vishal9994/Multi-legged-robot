#include <Servo.h>
Servo servo_Left_Top_Joint_1;        // LEFT UP JOINT
Servo servo_Left_Top_Joint_2;        //                      ________________________________________
Servo servo_Left_Top_Joint_3;       // Pin- 22,23,24    |                                        |   25,26,27
                                          //                     |                                        |
Servo servo_Right_Top_Joint_1;         // RIGHT UP  JOINT                  |                                        |
Servo servo_Right_Top_Joint_2;         //                     |                                        |
Servo servo_Right_Top_Joint_3;         //                     |                                        |
                                          //                     |                                        |
Servo servo_Left_Medium_Joint_1;       //  LEFT MIDDLE  JOINT                   |                                        |
Servo servo_Left_Medium_Joint_2;       //                     |                                        |
Servo servo_Left_Medium_Joint_3;      // Pin - 28,29,30    |                HEXAPOD                 |   31,32,33
                                          //                     |                                        |
Servo servo_Right_Medium_Joint_1;        // RIGHT MIDDLE JOINT                    |                                        |
Servo servo_Right_Medium_Joint_2;        //                     |                                        |
Servo servo_Right_Medium_Joint_3;        //                     |                                        |
                                          //                     |                                        |
Servo servo_Left_Lower_Joint_1;         //  LEFT DOWN JOINT                  |                                        |
Servo servo_Left_Lower_Joint_2;         //                     |                                        |
Servo servo_Left_Lower_Joint_3;        // Pin - 34,35,36    |                                        |   37,38,39
                                          //                     |________________________________________|
Servo servo_Right_Lower_Joint_1;          // RIGHT DOWN JOINT
Servo servo_Right_Lower_Joint_2;          //
Servo servo_Right_Lower_Joint_3; 




int val;

int light1 = 11;


int lighting = 0;
int brightness = 0;

int set = 11; 

void setup()
{
  pinMode(light1, OUTPUT);
  
  servo_Left_Top_Joint_1.attach(39);
  servo_Left_Top_Joint_2.attach(38);
  servo_Left_Top_Joint_3.attach(37);
  servo_Right_Top_Joint_1.attach(36);
  servo_Right_Top_Joint_2.attach(35);
  servo_Right_Top_Joint_3.attach(34);
  servo_Left_Medium_Joint_1.attach(7);
  servo_Left_Medium_Joint_2.attach(6);
  servo_Left_Medium_Joint_3.attach(5);
  servo_Right_Medium_Joint_1.attach(30);
  servo_Right_Medium_Joint_2.attach(29);
  servo_Right_Medium_Joint_3.attach(28);  
  servo_Left_Lower_Joint_1.attach(4);
  servo_Left_Lower_Joint_2.attach(3);
  servo_Left_Lower_Joint_3.attach(2);
  servo_Right_Lower_Joint_1.attach(24);
  servo_Right_Lower_Joint_2.attach(23);
  servo_Right_Lower_Joint_3.attach(22);


  servo_Left_Top_Joint_1.write(78);
  servo_Right_Top_Joint_1.write(77);
  servo_Left_Medium_Joint_1.write(108);
  servo_Right_Medium_Joint_1.write(76);
  servo_Left_Lower_Joint_1.write(75);
  servo_Right_Lower_Joint_1.write(83);

  servo_Left_Top_Joint_2.write(120);
  servo_Right_Top_Joint_2.write(62);
  servo_Left_Medium_Joint_2.write(116);
  servo_Right_Medium_Joint_2.write(35);
  servo_Left_Lower_Joint_2.write(62);
  servo_Right_Lower_Joint_2.write(132);

  servo_Left_Top_Joint_3.write(41);
  servo_Right_Top_Joint_3.write(32);
  servo_Left_Medium_Joint_3.write(178);
  servo_Right_Medium_Joint_3.write(6);
  servo_Left_Lower_Joint_3.write(34);
  servo_Right_Lower_Joint_3.write(15);


  delay(1000);
  servo_Left_Top_Joint_3.write(45);
  servo_Right_Top_Joint_3.write(35);
  servo_Left_Medium_Joint_3.write(178);
  servo_Right_Medium_Joint_3.write(10);
  servo_Left_Lower_Joint_3.write(40);
  servo_Right_Lower_Joint_3.write(20);


  Serial.begin(9600);  

  delay(5000);
}
int state = 0;

void loop(){ 
  STAND();
} 


void STAND()
{
  servo_Left_Top_Joint_1.write(78);
  servo_Right_Top_Joint_1.write(77);
  servo_Left_Medium_Joint_1.write(108);
  servo_Right_Medium_Joint_1.write(76);
  servo_Left_Lower_Joint_1.write(75);
  servo_Right_Lower_Joint_1.write(83);

  delay(1000);
  servo_Left_Top_Joint_3.write(45);
  servo_Right_Top_Joint_3.write(35);
  servo_Left_Medium_Joint_3.write(178);
  servo_Right_Medium_Joint_3.write(10);
  servo_Left_Lower_Joint_3.write(40);
  servo_Right_Lower_Joint_3.write(20);

  delay(400);
  servo_Left_Top_Joint_2.write(179);
  servo_Right_Top_Joint_2.write(114);
  servo_Left_Medium_Joint_2.write(51);
  servo_Right_Medium_Joint_2.write(88);
  servo_Left_Lower_Joint_2.write(121);
  servo_Right_Lower_Joint_2.write(76);
  delay(500);
  servo_Left_Top_Joint_3.write(61);
  servo_Right_Top_Joint_3.write(52);
  servo_Left_Medium_Joint_3.write(160);
  servo_Right_Medium_Joint_3.write(26);
  servo_Left_Lower_Joint_3.write(54);
  servo_Right_Lower_Joint_3.write(35);
state = 1;
}



void SIT()
{
  delay(1000);
  servo_Left_Top_Joint_1.write(78);
  servo_Right_Top_Joint_1.write(77);
  servo_Left_Medium_Joint_1.write(108);
  servo_Right_Medium_Joint_1.write(76);
  servo_Left_Lower_Joint_1.write(75);
  servo_Right_Lower_Joint_1.write(83);
  
  servo_Left_Top_Joint_2.write(90); //Povecati
  servo_Right_Top_Joint_2.write(95);   // Smanjiti
  servo_Left_Medium_Joint_2.write(75);  // Povecati
  servo_Right_Medium_Joint_2.write(65);   // Smanjiti
  servo_Left_Lower_Joint_2.write(85);    // Smanjiti
  servo_Right_Lower_Joint_2.write(100);    // Povecati
  delay(100);
  servo_Left_Top_Joint_2.write(95); //Povecati
  servo_Right_Top_Joint_2.write(90);   // Smanjiti
  servo_Left_Medium_Joint_2.write(80);  // Povecati
  servo_Right_Medium_Joint_2.write(60);   // Smanjiti
  servo_Left_Lower_Joint_2.write(80);    // Smanjiti
  servo_Right_Lower_Joint_2.write(105);    // Povecati
  delay(100);
  servo_Left_Top_Joint_2.write(107); //Povecati
  servo_Right_Top_Joint_2.write(82);   // Smanjiti
  servo_Left_Medium_Joint_2.write(87);  // Povecati
  servo_Right_Medium_Joint_2.write(52);   // Smanjiti
  servo_Left_Lower_Joint_2.write(72);    // Smanjiti
  servo_Right_Lower_Joint_2.write(117);    // Povecati
  delay(100);
  servo_Left_Top_Joint_2.write(115); //Povecati
  servo_Right_Top_Joint_2.write(75);   // Smanjiti
  servo_Left_Medium_Joint_2.write(95);  // Povecati
  servo_Right_Medium_Joint_2.write(45);   // Smanjiti
  servo_Left_Lower_Joint_2.write(65);    // Smanjiti
  servo_Right_Lower_Joint_2.write(125);    // Povecati
  delay(500);

  servo_Left_Top_Joint_2.write(120);
  servo_Right_Top_Joint_2.write(50);
  servo_Left_Medium_Joint_2.write(108);
  servo_Right_Medium_Joint_2.write(30);
  servo_Left_Lower_Joint_2.write(60);
  servo_Right_Lower_Joint_2.write(133);

  servo_Left_Top_Joint_3.write(51);
  servo_Right_Top_Joint_3.write(37);
  servo_Left_Medium_Joint_3.write(165);
  servo_Right_Medium_Joint_3.write(19);
  servo_Left_Lower_Joint_3.write(53);
  servo_Right_Lower_Joint_3.write(35);

state = 0;
}



void Forward()
{
  servo_Left_Top_Joint_2.write(152); 
  servo_Right_Medium_Joint_2.write(42);  
  servo_Left_Lower_Joint_2.write(93); 
  delay(100);
  servo_Left_Top_Joint_1.write(98);  
  servo_Right_Medium_Joint_1.write(56);
  servo_Left_Lower_Joint_1.write(54); 
  delay(100);
  servo_Left_Top_Joint_2.write(179);
  servo_Right_Medium_Joint_2.write(88);  
  servo_Left_Lower_Joint_2.write(122); 
  delay(100);
  servo_Left_Top_Joint_1.write(78);
  servo_Right_Medium_Joint_1.write(76);
  servo_Left_Lower_Joint_1.write(75);
  delay(100);
  
  servo_Right_Top_Joint_2.write(70);
  servo_Left_Medium_Joint_2.write(88);
  servo_Right_Lower_Joint_2.write(110);
  delay(100);
  servo_Right_Top_Joint_1.write(63);
  servo_Left_Medium_Joint_1.write(123);
  servo_Right_Lower_Joint_1.write(95);
  delay(100);
  servo_Right_Top_Joint_2.write(114);
  servo_Left_Medium_Joint_2.write(51);
  servo_Right_Lower_Joint_2.write(76);
  delay(100);
  servo_Right_Top_Joint_1.write(77);
  servo_Left_Medium_Joint_1.write(108);
  servo_Right_Lower_Joint_1.write(83);
  delay(100);

}


void Back()
{
 servo_Left_Top_Joint_2.write(152); 
  servo_Right_Medium_Joint_2.write(42);  
  servo_Left_Lower_Joint_2.write(93); 
  delay(100);
  servo_Left_Top_Joint_1.write(63);  
  servo_Right_Medium_Joint_1.write(91);
  servo_Left_Lower_Joint_1.write(89); 
  delay(100);
  servo_Left_Top_Joint_2.write(179);
  servo_Right_Medium_Joint_2.write(88);  
  servo_Left_Lower_Joint_2.write(122); 
  delay(100);
  servo_Left_Top_Joint_1.write(78);
  servo_Right_Medium_Joint_1.write(76);
  servo_Left_Lower_Joint_1.write(75);
  delay(100);

  servo_Right_Top_Joint_2.write(70);
  servo_Left_Medium_Joint_2.write(88);
  servo_Right_Lower_Joint_2.write(110);
  delay(100);
  servo_Right_Top_Joint_1.write(97);
  servo_Left_Medium_Joint_1.write(95);
  servo_Right_Lower_Joint_1.write(67);
  delay(100);
  servo_Right_Top_Joint_2.write(112);
  servo_Left_Medium_Joint_2.write(56);
  servo_Right_Lower_Joint_2.write(80);
  delay(100);
   servo_Right_Top_Joint_1.write(77);
  servo_Left_Medium_Joint_1.write(108);
  servo_Right_Lower_Joint_1.write(83);
  delay(100);
}




void Left()
{
   servo_Left_Top_Joint_2.write(150); 
  servo_Right_Medium_Joint_2.write(37);  
  servo_Left_Lower_Joint_2.write(85); 
  delay(100);
  servo_Left_Top_Joint_1.write(66);  
  servo_Right_Medium_Joint_1.write(51);
  servo_Left_Lower_Joint_1.write(88); 
  delay(100);
  servo_Left_Top_Joint_2.write(178); 
  servo_Right_Medium_Joint_2.write(85);  
  servo_Left_Lower_Joint_2.write(125); 
  delay(100);
  servo_Left_Top_Joint_1.write(78);
  servo_Right_Medium_Joint_1.write(76);
  servo_Left_Lower_Joint_1.write(75);
  delay(100);

  servo_Right_Top_Joint_2.write(70);
  servo_Left_Medium_Joint_2.write(88);
  servo_Right_Lower_Joint_2.write(113);
  delay(100);
  servo_Right_Top_Joint_1.write(56);
  servo_Left_Medium_Joint_1.write(95);
  servo_Right_Lower_Joint_1.write(100);
  delay(100);
  servo_Right_Top_Joint_2.write(114);
  servo_Left_Medium_Joint_2.write(51);
  servo_Right_Lower_Joint_2.write(76);
  delay(100);
   servo_Right_Top_Joint_1.write(77);
  servo_Left_Medium_Joint_1.write(108);
  servo_Right_Lower_Joint_1.write(83);
  delay(100);

}




void Right()
{ 

  servo_Left_Top_Joint_2.write(150); 
  servo_Right_Medium_Joint_2.write(37);  
  servo_Left_Lower_Joint_2.write(85); 
  delay(100);
  servo_Left_Top_Joint_1.write(95);
  servo_Right_Medium_Joint_1.write(91);  
  servo_Left_Lower_Joint_1.write(63); 
  delay(100);
  servo_Left_Top_Joint_2.write(178); 
  servo_Right_Medium_Joint_2.write(85);  
  servo_Left_Lower_Joint_2.write(125); 
  delay(100);
  servo_Left_Top_Joint_1.write(78);
  servo_Right_Medium_Joint_1.write(76);
  servo_Left_Lower_Joint_1.write(75);
  delay(100);


  servo_Right_Top_Joint_2.write(70);
  servo_Left_Medium_Joint_2.write(88);
  servo_Right_Lower_Joint_2.write(113);
  delay(100);
  servo_Right_Top_Joint_1.write(98);
  servo_Left_Medium_Joint_1.write(122);
  servo_Right_Lower_Joint_1.write(64);
  delay(100);
  servo_Right_Top_Joint_2.write(112);
  servo_Left_Medium_Joint_2.write(56);
  servo_Right_Lower_Joint_2.write(78);
  delay(100);    
   servo_Right_Top_Joint_1.write(77);
  servo_Left_Medium_Joint_1.write(108);
  servo_Right_Lower_Joint_1.write(83);
  delay(100);

}
