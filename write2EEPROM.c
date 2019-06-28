void write(int w){
while(EECR & (1<<EEWE));
EEAR=0x5F;
EEDR=w;
EECR|=(1<<EEMWE);
EECR|=(1<<EEWE);
}