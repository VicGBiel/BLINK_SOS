#include <stdio.h>
#include "pico/stdlib.h"

#define redLed 11

void dot () {                 //Função para fazer os pontos do código morse

  gpio_put (redLed, true);
  sleep_ms(200);
  gpio_put (redLed, false);
  sleep_ms(125);

}

void dash () {                 //Função para fazer os traços do código morse

  gpio_put (redLed, true);
  sleep_ms(800);
  gpio_put (redLed, false);
  sleep_ms(125);

}

int main() {
  gpio_init(redLed);
  gpio_set_dir (redLed, GPIO_OUT);

  while (true) {
    
    dot();
    dot();
    dot();

    sleep_ms(125);  

    dash();
    dash();
    dash();

    sleep_ms(125);

    dot();
    dot();
    dot();

    sleep_ms(2875);
  }
}