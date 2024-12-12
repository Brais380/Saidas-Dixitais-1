/*
  Esta e hunha practica de encendido e apagado de un led con temporización
  Autor: Brais Rey Mirón
  Data: 12/12/2024
  */
// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH); //Encende o Led
  delay(10000); // Wait for 10000 millisecond(s)//Espera 10 segundo(s)
  digitalWrite(LED_BUILTIN, LOW); //Apagase o Led
  delay(4000); // Wait for 4000 millisecond(s)//Espera 4 segundo(s)
}
