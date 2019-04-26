/* init uart
* Starting page 113 of dsPIC30F4011.pdf
* BaudRate = Fcy/(16*(UxBRG+1)); # where Fcy = Instruction clock rate, UxBRG 16 bit value, 0-65535
*
* For clock = 7.3728Mhz * 4 = 29.4912 MHz
* Soo ...
* 115200
*
*/

#ifndef XTAL
#define XTAL 29491200		// just assume a value if not already set.
#endif

#ifndef UART

void interrupt_U2serial {

}

void _init_uart2(int rate) {
    U2MODE.UARTEN = 1;      // enable the uart2
    // default is for 8,N,1
    U2BRG = XTAL/(16 * (rate + 1));
    // ie for rate = 115200, U2BRG = 29491200/(16*115200) = 16
    // ie for rate = 9200, U2BRG = 29491200/(16*9200) = 96
}

int _u2_tx (char txbyte) {

    U2MODE.UTXEN = 1;
    U2TXREG = txbyte;


    return 1;   // return OK
}

#endif

/*
    uart display screen, no input ....

    Input :-

        MOTOR RPM : 5000      >>>>>>>>>>>>>>>>>>
            ACCEL : 1024      >>>>>>>>>>>>>>>>>>>>>>>>
            BRAKE : yes/no
             KILL : yes/no
           Cruise : yes/no

    Monitoring :-

          Ctrl Temp : 0-100, then shutdown
          Fan RPM : 2000 (ish) ... measure at full 12volts

          Total Current : Sum of above.
          Battery pack Voltage :
          Battery pack Temperature :
          Phase lead/lag degrees :
          State : Accel/Brake/Cruise
	  
          Phase U Current : xxx Amps
          Phase V Current : xxx Amps
          Phase W Current : xxx Amps
*/
