# Control de LED RGB mediante Bluetooth
Este proyecto demuestra cómo controlar un LED RGB utilizando una placa Arduino y comunicación Bluetooth. Puede enviar comandos desde un dispositivo con Bluetooth como una aplicación de teléfono inteligente para encender o apagar el LED, o potencialmente ajustar sus colores con mejoras adicionales del código.

## Funcionalidad
Se conecta a un módulo Bluetooth a través de comunicación serie por software.
Lee los datos recibidos del dispositivo Bluetooth.

Controla un LED RGB en función de los datos recibidos:

-'1': Enciende el LED (el color se puede personalizar en el código).
-'0': Apaga el LED.

## Requisitos de hardware
-Placa Arduino (cualquier modelo con suficientes pines)
-LED RGB
-Resistencias (valores apropiados para su LED)
-Módulo Bluetooth (HC-05 o compatible)
-Cables de conexión
-Requisitos de software
-IDE de Arduino (https://www.arduino.cc/en/software
