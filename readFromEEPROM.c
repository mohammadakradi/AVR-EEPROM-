int read(void){
while(EECR & (1<<EEWE));
EEAR=0x5F;
EECR|=(1<<EERE);
aa=EEDR;
}