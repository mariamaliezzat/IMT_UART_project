
#define SET_BIT(Reg,Bit) (Reg|=(1<<Bit))
#define CLEAR_BIT(Reg,Bit) (Reg&=~(1<<Bit))
#define Toggle_BIT(Reg,Bit) (Reg^=(1<<Bit))
#define GET_BIT(Reg,Bit) ((Reg>>Bit)&1)
//#define READ_BIT(ADDRESS,Bit) ((ADDRESS & (1<<Bit)>>Bit)
//#define CONC(b7,b6,b5,b4,b3,b2,b1,b0) CONC_HELP(b7,b6,b5,b4,b3,b2,b1,b0)
//#define CONC_HELP(b7,b6,b5,b4,b3,b2,b1,b0) 0b##b7##b6##b5##b4##b3##b2##b1##b0