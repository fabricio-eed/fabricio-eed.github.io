
XBEE EMISSOR



PAN ID
The network ID is some hexadecimal value between 0 and 0xFFFF. 
XBees can only communicate with each other 
if they have the same network ID



MY ADRESS
DESTINATION ADRESS


EXEMPLO:

xbee_receptor tem MY como MY 0x1234 e
o xbee_emissor tem destination adress o 0x1234 
assim Xbee_emissor consegue 
enviar data do xbee_receptor(2)


Configuração Xbee emissor
C 
PAN: 3BA7
DESTINATION adress high: 0
DESTINATION adress low : 1
MY: 0 



Configuração do xbee receptor:
C 
3BA7
DH: 0 
DL: 0 
MY: 1







***************/*****************/***************