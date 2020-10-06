import serial
import signal

ser = serial.Serial('COM4', 9600, timeout=.1)
ser.flushInput()


while True:
    try:
        if (ser.inWaiting()):
            line = ser.readline();
            line = line.decode("utf-8") #ser.readline returns a binary, convert to string
            print(line);
    except:
        print("Keyboard Interrupt")
        break
