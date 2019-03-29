# BLDC-Motor-Controller
Controller for BLDC 100A Motor

3 Phase Mosfet controller capable of running around 100Amp motor, depending on mosfets used etc etc.

BLDC means there are 3 x Hall Effect transducers that provide feedback on the rotational speed and position for the motor.

Andrew.

Hardware:
  1 x Fet Powerboard: to be etched on Aluminium substrate.
  
  1 x Laser cut Current Paths, Cut from 1mm Copper.
  
  1 x Fet Control Board,
  
  1 x PIC control board, 
  
      * analog inputs for accelerator, temperature, phase current
      
      * digital inputs for brake, kill, hall effect transducers
      
      * digital outputs for pwm control
      
  1 x AMD CPU Fan Heatsink (6cm x 6cm flat area + cpu fan)
  
Development

  PIC Programmer + MPLabs dev suite.
  
  Protel Dos 6.22 PCB and schematic software Easytrax/Autotrax/Schematic.
  
