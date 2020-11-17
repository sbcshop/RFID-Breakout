import serial                          #import serial module

def read_rfid ():
   ser = serial.Serial ("/dev/ttyS0")  #Open named port, for win use "COM1"(if port is 1) 
   ser.baudrate = 9600                 #Set baud rate to 9600
   data = ser.read(12)                 #Read 12 characters from serial port to data
   ser.close ()                        #Close port
   data=data.decode("utf-8")
   return data                         #Return data


while True:
    id = read_rfid ()                  #Function call
    print (id)  
