//9 button keypad demo by Oleg Jusaew
const byte keypadPin = A0;
byte key = 0;

void setup(void)
{
  pinMode(keypadPin, INPUT_PULLUP); // sets analog pin for input
  Serial.begin(9600);
}

void loop(void)
{
   char button = getKey();
   Serial.println(button);
}



char getKey()
{
    int val = 0;
    char button = '0';
    val = analogRead(keypadPin);
    //Serial.println(val);
    /*
     * 5V version
     * if ( val <= 50)  {  button = 7; }
    else if ( (val >= 200)  &&  (val <=240)    )   {  button = 4;  } 
    else if ( (val >= 330)  &&  (val <=380)    )   {  button = 1;  }
    else if ( (val >= 420)  &&  (val <=460)    )   {  button = 2;  }
    else if ( (val >= 500)  &&  (val <=530)    )   {  button = 5;  }
    else if ( (val >= 560)  &&  (val <=580)    )   {  button = 8;  }
    else if ( (val >= 605)  &&  (val <=625)    )   {  button = 9;  }
    else if ( (val >= 640)  &&  (val <=660)    )   {  button = 6;  }
    else if ( (val >= 670)  &&  (val <=690)    )   {  button = 3;  }   
    */
    
    /*
     * 3V version
     */
    if ( val <= 50)  {  button = '7'; }
    else if ( (val >= 220)  &&  (val <=280)    )   {  button = '4';  } 
    else if ( (val >= 340)  &&  (val <=410)    )   {  button = '1';  }
    else if ( (val >= 430)  &&  (val <=490)    )   {  button = '2';  }
    else if ( (val >= 530)  &&  (val <=580)    )   {  button = '5';  }
    else if ( (val >= 585)  &&  (val <=620)    )   {  button = '8';  }
    else if ( (val >= 630)  &&  (val <=665)    )   {  button = '9';  }
    else if ( (val >= 670)  &&  (val <=700)    )   {  button = '6';  }
    else if ( (val >= 701)  &&  (val <=760)    )   {  button = '3';  }
    return button;   
} 
