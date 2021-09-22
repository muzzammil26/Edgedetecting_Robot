int L1,L2,L3,L4,a,b,c,d;
void setup() 
{Serial.begin(9600);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
pinMode(13, OUTPUT);
}
void loop() {
  
if(Serial.available()>0)
{     
  L1= Serial.read();
Serial.println(L1);
Serial.print("\n");
if(L1=='1' ){ 
  digitalWrite(10, HIGH);
  }
     a= Serial.read();
Serial.println(a);
Serial.print("\n");
if(a=='1' ){ 
  digitalWrite(10, LOW);
  }
}

if(Serial.available()>0)
{     
  L2= Serial.read();
Serial.println(L2);
Serial.print("\n");
if(L2=='2' ){ 
  digitalWrite(11, HIGH);
  }
  b= Serial.read();
Serial.println(b);
Serial.print("\n");
if(b=='2' ){ 
  digitalWrite(11, LOW);
  }
}

if(Serial.available()>0)
{     
  L3= Serial.read();
Serial.println(L3);
Serial.print("\n");
if(L3=='3' ){ 
  digitalWrite(12, HIGH);
  }
    
  c= Serial.read();
Serial.println(c);
Serial.print("\n");
if(c=='3' ){ 
  digitalWrite(12, LOW);
  }
}

if(Serial.available()>0)
{     
  L4= Serial.read();
Serial.println(L4);
Serial.print("\n");
if(L4=='4' ){ 
  digitalWrite(13, HIGH);
  }
  
  d= Serial.read();
Serial.println(d);
Serial.print("\n");
if(d=='4' ){ 
  digitalWrite(13, LOW);
  }
}
}
