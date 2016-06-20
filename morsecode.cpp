/*
International morse code
Unit time = dot duration
Dash duration = 3 x dot duration
Letters of a word are separated by a space = 3 dots = 1 dash
Words are separated by a space = 7 dots
*/


int ledPin = 13;
int unitTime = 50;
string message = "SOS";

void setup() {
	pinMode(ledPin, OUTPUT);
	message.toUpperCase();
}

void dot()
{
	digitalWrite(ledPin, HIGH);
	delay(unitTime);
	digitalWrite(ledPin, LOW);
	delay(unitTime);
}

void dash()
{
	digitalWrite(ledPin, HIGH);
	delay(unitTime * 3);
	digitalWrite(ledPin, LOW);
	delay(unitTime * 3);
}

void loop() {
	delay(1000);

	for(int i = 0; i < message.length(); i++) {
		switch (message.charAt(i)) {

			case "A":
				dot(); dash();
				break;

			case "B":
				dash(); dot(); dot(); dot();
				break;

			case "C":
				dash(); dot(); dash(); dot();
				break;

			case "D":
				dash(); dot(); dot();
				break;

			case "E":
				dot();
				break;

			case "F":
				dot(); dot(); dash(); dot();
				break;

			case "G":
				dash(); dash(); dot();
				break;

			case "H":
				dot(); dot(); dot(); dot();
				break;

			case "I":
				dot(); dot();
				break;

			case "J":
				dot(); dash(); dash(); dash();
				break;

			case "K":
				dash(); dot(); dash();
				break;

			case "L":
				dot(); dash(); dot(); dot();
				break;

			case "M":
				dash(); dash();
				break;

			case "N":
				dash(); dot();
				break;

			case "O":
				dash(); dash(); dash();
				break;

			case "P":
				dot(); dash(); dash(); dot();
				break;

			case "Q":
				dash(); dash(); dot(); dash();
				break;

			case "R":
				dot(); dash(); dot();
				break;

			case "S":
				dot(); dot(); dot();
				break;

			case "T":
				dash();
				break;

			case "U":
				dot(); dot(); dash(); 
				break;

			case "V":
				dot(); dot(); dot(); dash(); 
				break;

			case "W":
				dot(); dash(); dash();
				break;

			case "X":
				dash(); dot(); dot(); dash(); 
				break;

			case "Y":
				dash(); dot(); dash(); dash();
				break;

			case "Z":
				dash(); dash(); dot(); dot();
				break;

			case "1":
				dot(); dash(); dash(); dash(); dash(); 
				break;

			case "2":
				dot(); dot(); dash(); dash(); dash();
				break;

			case "3":
				dot(); dot(); dot(); dash(); dash();
				break;

			case "4":
				dot(); dot(); dot(); dot(); dash();
				break;

			case "5":
				dot(); dot(); dot(); dot(); dot();
				break;

			case "6":
				dash(); dot(); dot(); dot(); dot();
				break;

			case "7":
				dash(); dash(); dot(); dot(); dot();
				break;

			case "8":
				dash(); dash(); dash(); dot(); dot();
				break;

			case "9":
				dash(); dash(); dash(); dash(); dot();
				break;

			case "0":
				dash(); dash(); dash(); dash(); dash();
				break;

			case " ":
				delay(unitTime * 7);
				break;
		}
	delay(unitTime * 3);
	}
}