#include<Servo.h>
int val; // variable bluetooth


int mid = 90;
int currpos[6] = {90, 60, 10, 90, 100, 90};
int pos1[6];
int pos2[6];


Servo s1; // Bottom to top defining Servos
Servo s2;
Servo s3;
Servo s4;
Servo s5;
Servo s6;


void setup() {
  Serial.begin(9600);
  s1.attach(3);
  s2.attach(5);
  s3.attach(6);
  s4.attach(9);
  s5.attach(10);
  s6.attach(11);
  s1.write(currpos[0]);
  s2.write(currpos[1]);
  s3.write(currpos[2]);
  s4.write(currpos[3]);
  s5.write(currpos[4]);
  s6.write(currpos[5]);
}

void loop() {
  if (Serial.available()>0) {
    val = Serial.read();
    Serial.println(val);

    if(val==1){
      s1.write(currpos[0]);
      currpos[0]= currpos[0] + 2;
    }
    if(val==2){
      s1.write(currpos[0]);
      currpos[0]= currpos[0] - 2;
    }

    if(val==3){
      s2.write(currpos[1]);
      currpos[1]= currpos[1] + 2;
    }
    if(val==4){
      s2.write(currpos[1]);
      currpos[1]= currpos[1] - 2;
    }

    if(val==6){
      s3.write(currpos[2]);
      currpos[2]= currpos[2] + 2;
    }
    if(val==5){
      s3.write(currpos[2]);
      currpos[2]= currpos[2] - 2;
    }
    if(val==7){
      s4.write(currpos[3]);
      currpos[3]= currpos[3] + 2;
    }
    if(val==8){
      s4.write(currpos[3]);
      currpos[3]= currpos[3] - 2;
    }

    if(val==9){
      s5.write(currpos[4]);
      currpos[4]= currpos[4] + 2;
    }
    if(val==10){
      s5.write(currpos[4]);
      currpos[4]= currpos[4] - 2;
    }

    if(val==11){
      s6.write(currpos[5]);
      currpos[5]= currpos[5] + 2;
    }
    if(val==12){
      s6.write(currpos[5]);
      currpos[5]= currpos[5] - 2;
    }

    if(val == 20){
      for(int y = 0; y<=5; y++){
        pos1[y] = currpos[y];
      }
    }
    if( val == 30){
      for(int x = 0; x <=5; x++){
        pos2[x] = currpos[x];
      }
    }
    if( val == 40){
while(1){
  if (Serial.available()>0) {
    int data = Serial.read();
    Serial.println(data);
    if(data==40){
      break;
    }

  }
  
         //seddsvd
      while(currpos[2]!=90){
        if(currpos[2]>90){
          currpos[2] = currpos[2]-1;
        }
        else{
          currpos[2] = currpos[2]+1;
        }
        s3.write(currpos[2]);
        delay(15);
      }

      while(currpos[1]!=90){
        if(currpos[1]>90){
          currpos[1] = currpos[1]-1;
        }
        else{
          currpos[1] = currpos[1]+1;
        }
        s2.write(currpos[1]);
        delay(15);
      }
      while(currpos[3]!=90){
        if(currpos[3]>90){
          currpos[3] = currpos[3]-1;
        }
        else{
          currpos[3] = currpos[3]+1;
        }
        s4.write(currpos[3]);
        delay(15);
      }
      while(currpos[4]!=90){
        if(currpos[4]>90){
          currpos[4] = currpos[4]-1;
        }
        else{
          currpos[4] = currpos[4]+1;
        }
        s5.write(currpos[4]);
        delay(15);
      }
      //sadsf

      
      
        while(currpos[0]!=pos1[0]){
        if(currpos[0]>pos1[0]){
          currpos[0] = currpos[0]-1;
        }
        else{
          currpos[0] = currpos[0]+1;
        }
        s1.write(currpos[0]);
        delay(15);
      }
      while(currpos[2]!=pos1[2]){
        if(currpos[2]>pos1[2]){
          currpos[2] = currpos[2]-1;
        }
        else{
          currpos[2] = currpos[2]+1;
        }
        s3.write(currpos[2]);
        delay(15);
      }

      while(currpos[1]!=pos1[1]){
        if(currpos[1]>pos1[1]){
          currpos[1] = currpos[1]-1;
        }
        else{
          currpos[1] = currpos[1]+1;
        }
        s2.write(currpos[1]);
        delay(15);
      }

    

      while(currpos[3]!=pos1[3]){
        if(currpos[3]>pos1[3]){
          currpos[3] = currpos[3]-1;
        }
        else{
          currpos[3] = currpos[3]+1;
        }
        s4.write(currpos[3]);
        delay(15);
      }
      while(currpos[4]!=pos1[4]){
        if(currpos[4]>pos1[4]){
          currpos[4] = currpos[4]-1;
        }
        else{
          currpos[4] = currpos[4]+1;
        }
        s5.write(currpos[4]);
        delay(15);
      }
       while(currpos[5]!=pos1[5]){
        if(currpos[5]>pos1[5]){
          currpos[5] = currpos[5]-1;
        }
        else{
          currpos[5] = currpos[5]+1;
        }
        s6.write(currpos[5]);
        delay(15);
      }


      //seddsvd
      while(currpos[2]!=90){
        if(currpos[2]>90){
          currpos[2] = currpos[2]-1;
        }
        else{
          currpos[2] = currpos[2]+1;
        }
        s3.write(currpos[2]);
        delay(15);
      }

      while(currpos[1]!=90){
        if(currpos[1]>90){
          currpos[1] = currpos[1]-1;
        }
        else{
          currpos[1] = currpos[1]+1;
        }
        s2.write(currpos[1]);
        delay(15);
      }
      while(currpos[3]!=90){
        if(currpos[3]>90){
          currpos[3] = currpos[3]-1;
        }
        else{
          currpos[3] = currpos[3]+1;
        }
        s4.write(currpos[3]);
        delay(15);
      }
      while(currpos[4]!=90){
        if(currpos[4]>90){
          currpos[4] = currpos[4]-1;
        }
        else{
          currpos[4] = currpos[4]+1;
        }
        s5.write(currpos[4]);
        delay(15);
      }
      //sadsf

      while(currpos[0]!=pos2[0]){
        if(currpos[0]>pos2[0]){
          currpos[0] = currpos[0]-1;
        }
        else{
          currpos[0] = currpos[0]+1;
        }
        s1.write(currpos[0]);
        delay(15);
      }
      while(currpos[2]!=pos2[2]){
        if(currpos[2]>pos2[2]){
          currpos[2] = currpos[2]-1;
        }
        else{
          currpos[2] = currpos[2]+1;
        }
        s3.write(currpos[2]);
        delay(15);
      }
      
      while(currpos[1]!=pos2[1]){
        if(currpos[1]>pos2[1]){
          currpos[1] = currpos[1]-1;
        }
        else{
          currpos[1] = currpos[1]+1;
        }
        s2.write(currpos[1]);
        delay(15);
      }
       

      while(currpos[3]!=pos2[3]){
        if(currpos[3]>pos2[3]){
          currpos[3] = currpos[3]-1;
        }
        else{
          currpos[3] = currpos[3]+1;
        }
        s4.write(currpos[3]);
        delay(15);
      }
      while(currpos[4]!=pos2[4]){
        if(currpos[4]>pos2[4]){
          currpos[4] = currpos[4]-1;
        }
        else{
          currpos[4] = currpos[4]+1;
        }
        s5.write(currpos[4]);
        delay(15);
      }
       while(currpos[5]!=pos2[5]){
        if(currpos[5]>pos2[5]){
          currpos[5] = currpos[5]-1;
        }
        else{
          currpos[5] = currpos[5]+1;
        }
        s6.write(currpos[5]);
        delay(15);
      }
}//while khtm main

    }
}
}
