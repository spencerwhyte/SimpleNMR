EESchema Schematic File Version 2
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:special
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:lf411
LIBS:HPSDR
LIBS:headphonejack
LIBS:Transmitter-cache
EELAYER 27 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date "11 may 2014"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L GND #PWR01
U 1 1 536AAB20
P 4550 3850
F 0 "#PWR01" H 4550 3850 30  0001 C CNN
F 1 "GND" H 4550 3780 30  0001 C CNN
F 2 "" H 4550 3850 60  0000 C CNN
F 3 "" H 4550 3850 60  0000 C CNN
	1    4550 3850
	1    0    0    -1  
$EndComp
$Comp
L HEADPHONEJACK J1
U 1 1 536AD003
P 3350 2550
F 0 "J1" H 3350 2900 60  0000 C CNN
F 1 "JACK_STEREO" H 3630 2200 60  0000 C CNN
F 2 "" H 3350 2550 60  0000 C CNN
F 3 "" H 3350 2550 60  0000 C CNN
	1    3350 2550
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR02
U 1 1 536AD04D
P 3950 2650
F 0 "#PWR02" H 3950 2650 30  0001 C CNN
F 1 "GND" H 3950 2580 30  0001 C CNN
F 2 "" H 3950 2650 60  0000 C CNN
F 3 "" H 3950 2650 60  0000 C CNN
	1    3950 2650
	0    -1   1    0   
$EndComp
$Comp
L R R1
U 1 1 536AD15F
P 4550 3600
F 0 "R1" V 4630 3600 40  0000 C CNN
F 1 "Rin" V 4557 3601 40  0000 C CNN
F 2 "~" V 4480 3600 30  0000 C CNN
F 3 "~" H 4550 3600 30  0000 C CNN
	1    4550 3600
	-1   0    0    1   
$EndComp
$Comp
L R R2
U 1 1 536AD25A
P 4800 3350
F 0 "R2" V 4880 3350 40  0000 C CNN
F 1 "Rf" V 4807 3351 40  0000 C CNN
F 2 "~" V 4730 3350 30  0000 C CNN
F 3 "~" H 4800 3350 30  0000 C CNN
	1    4800 3350
	0    1    1    0   
$EndComp
$Comp
L CONN_3 K1
U 1 1 536AD4E2
P 4100 3300
F 0 "K1" V 4050 3300 50  0000 C CNN
F 1 "CONN_3" V 4150 3300 40  0000 C CNN
F 2 "" H 4100 3300 60  0000 C CNN
F 3 "" H 4100 3300 60  0000 C CNN
	1    4100 3300
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR03
U 1 1 536AD507
P 3750 3300
F 0 "#PWR03" H 3750 3300 30  0001 C CNN
F 1 "GND" H 3750 3230 30  0001 C CNN
F 2 "" H 3750 3300 60  0000 C CNN
F 3 "" H 3750 3300 60  0000 C CNN
	1    3750 3300
	0    1    1    0   
$EndComp
$Comp
L POT RV1
U 1 1 536EBBB0
P 5300 3350
F 0 "RV1" H 5300 3250 50  0000 C CNN
F 1 "10k" H 5300 3350 50  0000 C CNN
F 2 "~" H 5300 3350 60  0000 C CNN
F 3 "~" H 5300 3350 60  0000 C CNN
	1    5300 3350
	1    0    0    -1  
$EndComp
$Comp
L LF411 U1
U 1 1 536AAA44
P 5050 2650
F 0 "U1" H 5200 2850 60  0000 C CNN
F 1 "LF411" H 5200 2950 60  0000 C CNN
F 2 "" H 5050 2650 60  0000 C CNN
F 3 "" H 5050 2650 60  0000 C CNN
	1    5050 2650
	1    0    0    -1  
$EndComp
$Comp
L VCC #PWR04
U 1 1 536EC54D
P 3750 3200
F 0 "#PWR04" H 3750 3300 30  0001 C CNN
F 1 "VCC" H 3750 3300 30  0000 C CNN
F 2 "" H 3750 3200 60  0000 C CNN
F 3 "" H 3750 3200 60  0000 C CNN
	1    3750 3200
	0    -1   -1   0   
$EndComp
$Comp
L VEE #PWR3
U 1 1 536EC656
P 3750 3400
F 0 "#PWR3" H 3750 3600 40  0001 C CNN
F 1 "VEE" H 3750 3550 40  0000 C CNN
F 2 "" H 3750 3400 60  0000 C CNN
F 3 "" H 3750 3400 60  0000 C CNN
	1    3750 3400
	0    -1   -1   0   
$EndComp
$Comp
L VEE #PWR7
U 1 1 536EC665
P 4950 3050
F 0 "#PWR7" H 4950 3250 40  0001 C CNN
F 1 "VEE" H 4950 3200 40  0000 C CNN
F 2 "" H 4950 3050 60  0000 C CNN
F 3 "" H 4950 3050 60  0000 C CNN
	1    4950 3050
	-1   0    0    1   
$EndComp
Wire Wire Line
	4550 2750 4550 3350
Wire Wire Line
	3950 2350 4550 2350
Wire Wire Line
	4550 2350 4550 2550
$Comp
L VCC #PWR05
U 1 1 536EC6C8
P 4950 2250
F 0 "#PWR05" H 4950 2350 30  0001 C CNN
F 1 "VCC" H 4950 2350 30  0000 C CNN
F 2 "" H 4950 2250 60  0000 C CNN
F 3 "" H 4950 2250 60  0000 C CNN
	1    4950 2250
	1    0    0    -1  
$EndComp
$Comp
L CONN_2 P1
U 1 1 536ED8E7
P 6100 2750
F 0 "P1" V 6050 2750 40  0000 C CNN
F 1 "CONN_2" V 6150 2750 40  0000 C CNN
F 2 "" H 6100 2750 60  0000 C CNN
F 3 "" H 6100 2750 60  0000 C CNN
	1    6100 2750
	1    0    0    -1  
$EndComp
Wire Wire Line
	5550 2650 5750 2650
$Comp
L GND #PWR06
U 1 1 536ED905
P 5750 2850
F 0 "#PWR06" H 5750 2850 30  0001 C CNN
F 1 "GND" H 5750 2780 30  0001 C CNN
F 2 "" H 5750 2850 60  0000 C CNN
F 3 "" H 5750 2850 60  0000 C CNN
	1    5750 2850
	0    1    1    0   
$EndComp
Wire Wire Line
	5300 3200 5550 3200
Wire Wire Line
	5550 3200 5550 2650
$EndSCHEMATC
