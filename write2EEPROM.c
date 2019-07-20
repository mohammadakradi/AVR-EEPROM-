void write(int w, int address){
while(EECR & (1<<EEWE));
EEAR=address;
EEDR=w;
EECR|=(1<<EEMWE);
EECR|=(1<<EEWE);
}
