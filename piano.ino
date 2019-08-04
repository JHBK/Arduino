#include <Keypad.h> 
const byte ROWS = 4; //four rows 
const byte COLS = 4; //four columns 
// Define the Keymap 
char hexaKeys[ROWS][COLS] = { 
{'1','2','3','A'}, 
{'4','5','6','B'}, 
{'7','8','9','C'}, 
{'*','0','#','D'} 
}; 
byte rowPins[ROWS] = {12, 3, 4, 5}; //connect to the Rows of the keypad pin 8, 7, 6, 5 respectively 
byte colPins[COLS] = {6, 7, 8, 9}; //connect to the Columns of the keypad pin 4, 3, 2, 1 respectively 
//initialize an instance of class NewKeypad 
Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 
void setup(){ 
Serial.begin(9600); 
} 
void loop(){ 
char customKey = customKeypad.getKey(); 
if (customKey =='1'){   
tone(11,261,100); 
Serial.println(customKey);
}
if (customKey =='2'){ 
tone(11,294,100); 
} 
if (customKey =='3'){ 
tone(11,329,100); 
} if (customKey =='4'){ 
tone(11,392,100); 
} if (customKey =='5'){ 
tone(11,440,100); 
} if (customKey =='6'){ 
tone(11,493,100); 
} if (customKey =='7'){ 
tone(11,750,100); 
} if (customKey =='8'){ 
tone(11,222,100); 
} if (customKey =='9'){ 
tone(11,197,100); 
} if (customKey =='0'){ 
tone(11,111,100); 
} if (customKey =='A'){ 
tone(11,349,100); 
} if (customKey =='B'){ 
tone(11,523,100); 
} if (customKey =='C'){ 
tone(11,70,100); 
} if (customKey =='D'){ 
tone(11,280,100); 
} if (customKey =='#'){ 
tone(11,360,100); 
} if (customKey =='*'){ 
tone(11,456,100); 
}  
} 
