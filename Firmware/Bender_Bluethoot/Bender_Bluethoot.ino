//Motor Drcho adelante
//digitalWrite(2,0);
//digitalWrite(4,1);

//Motor Izq adelante
//digitalWrite(8,0);
//digitalWrite(9,1);

char dato;

void setup( ) {
  
 pinMode(2,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(8,OUTPUT);
 pinMode(9,OUTPUT);
  Serial.begin(9600);
}

void loop( ) {

  if (Serial.available() > 0) {
    dato = Serial.read();
    
      switch (dato) {

      case ('F'): {    
          digitalWrite(2,0);
          digitalWrite(4,1);
          digitalWrite(8,0);
          digitalWrite(9,1);
          analogWrite(3,190);
          analogWrite(10,255);
          
          break;
      }
     
      case ('B'): {    
          digitalWrite(2,1);
          digitalWrite(4,0);
          digitalWrite(8,1);
          digitalWrite(9,0);
          analogWrite(3,205);
          analogWrite(10,255);
          
          break;          
      }
      
      case ('G'): {       
          digitalWrite(2,0);
          digitalWrite(4,1);
          digitalWrite(8,0);
          digitalWrite(9,1);
          analogWrite(3,255);
          analogWrite(10,100);
           
           break;
      }
      
      case ('I'): {     
          digitalWrite(2,0);
          digitalWrite(4,1);
          digitalWrite(8,0);
          digitalWrite(9,1);
          analogWrite(3,100);
          analogWrite(10,255);
           
           break;
          
      }
        

      case ('L'): {     
          digitalWrite(2,0);
          digitalWrite(4,1);
          digitalWrite(8,1);
          digitalWrite(9,0);
          analogWrite(3,100);
          analogWrite(10,100);
          
          break;
      }
      case ('R'): {     
          digitalWrite(2,1);
          digitalWrite(4,0);
          digitalWrite(8,0);
          digitalWrite(9,1);
          analogWrite(3,100);
          analogWrite(10,100);
          
          break;
      }
      case ('H'): {       
          digitalWrite(2,1);
          digitalWrite(4,0);
          digitalWrite(8,1);
          digitalWrite(9,0);
          analogWrite(3,255);
          analogWrite(10,100);
           
           break;
      }
      case ('J'): {     
          digitalWrite(2,1);
          digitalWrite(4,0);
          digitalWrite(8,1);
          digitalWrite(9,0);
          analogWrite(3,100);
          analogWrite(10,255);
           
           break;
          
      }
      case ('S'): {
          analogWrite(3,0);
          analogWrite(10,0);
      }
      
          
      
    }
  }
}

