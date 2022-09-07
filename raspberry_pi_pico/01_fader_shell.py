from machine import Pin, PWM

illuminata = PWM(Pin(16))
illuminata.freq(1000)

while True:
    brightness = float(input("Enter brightness (0 to 10):"))
    illuminata.duty_u16(int(brightness * 6553.4))
