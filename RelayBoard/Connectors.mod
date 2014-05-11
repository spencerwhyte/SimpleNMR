PCBNEW-LibModule-V1  Saturday, May 10, 2014 'pmt' 10:16:50 pm
# encoding utf-8
Units mm
$INDEX
HeadphoneJack
POT_P110KV
POT_P160KN
PinHeader2
PinHeader3
PinHeader4
STDRelay
bornier2
$EndINDEX
$MODULE HeadphoneJack
Po 0 0 0 15 536EAE5B 00000000 ~~
Li HeadphoneJack
Cd module 1 pin (ou trou mecanique de percage)
Kw CONN JACK
Sc 0
AR /536AD003
Op 0 0 0
T0 0.254 -5.588 1.016 1.016 0 0.254 N V 21 N "J1"
T1 -5.08 5.588 1.016 1.016 0 0.254 N V 21 N "JACK_STEREO"
DS -8.5 -3.5 -6 -3.5 0.15 21
DS -8.5 -3.5 -8.5 3.5 0.15 21
DS -8.5 3.5 -6 3.5 0.15 21
DS -6 3.5 -6 1.5 0.15 21
DS -6 -3.5 6 -3.5 0.15 21
DS 6 -3.5 6 3.5 0.15 21
DS 6 3.5 -6 3.5 0.15 21
DS -6 3.5 -6 -3.5 0.15 21
DS -6 -3.5 -5.5 -3.5 0.15 21
$PAD
Sh "2" C 3 3 0 0 0
Dr 1.3 0 0 O 1.3 0.8
At STD N 00E0FFFF
Ne 2 "N-000001"
Po 5.5 -3.3
$EndPAD
$PAD
Sh "1" C 3 3 0 0 900
Dr 0.8 0 0 O 0.8 1.3
At STD N 00E0FFFF
Ne 1 "GND"
Po -2.5 3.3
$EndPAD
$PAD
Sh "3" C 3 3 0 0 0
Dr 1.3 0 0 O 1.3 0.8
At STD N 00E0FFFF
Ne 0 ""
Po 5.5 3.3
$EndPAD
$PAD
Sh "1" C 3 3 0 0 900
Dr 0.8 0 0 O 0.8 1.3
At STD N 00E0FFFF
Ne 1 "GND"
Po -2.5 -3.3
$EndPAD
$SHAPE3D
Na "Connectors/POWER_21.wrl"
Sc 0.8 0.8 0.8
Of 0 0 0
Ro 0 0 0
$EndSHAPE3D
$EndMODULE HeadphoneJack
$MODULE POT_P110KV
Po 0 0 0 15 536EB8FE 00000000 ~~
Li POT_P110KV
Sc 0
AR 
Op 0 0 0
T0 -0.2 7.3 1 1 0 0.15 N V 21 N "POT_P110KV"
T1 -0.2 -8.9 1 1 0 0.15 N V 21 N "VAL**"
DS 8.5 -4.75 8.5 4.75 0.15 21
DS 8.5 4.75 -8.5 4.75 0.15 21
DS -8.5 4.75 -8.5 -4.75 0.15 21
DS -8.5 -4.75 8.5 -4.75 0.15 21
$EndMODULE POT_P110KV
$MODULE POT_P160KN
Po 0 0 0 15 536EBCE1 00000000 ~~
Li POT_P160KN
Sc 0
AR /536EBBB0
Op 0 0 0
T0 -0.2 7.3 1 1 0 0.15 N V 21 N "RV1"
T1 -0.2 -8.9 1 1 0 0.15 N V 21 N "10k"
DS 3 -4.75 3 -19.75 0.15 21
DS 3 -19.75 -3 -19.75 0.15 21
DS -3 -19.75 -3 -4.75 0.15 21
DS 8.5 -4.75 8.5 4.75 0.15 21
DS 8.5 4.75 -8.5 4.75 0.15 21
DS -8.5 4.75 -8.5 -4.75 0.15 21
DS -8.5 -4.75 8.5 -4.75 0.15 21
$PAD
Sh "2" C 3 3 0 0 0
Dr 1.3 0 0 O 1.3 0.8
At STD N 00E0FFFF
Ne 0 ""
Po 0 -0.95
$EndPAD
$PAD
Sh "3" C 3 3 0 0 0
Dr 1.3 0 0 O 1.3 0.8
At STD N 00E0FFFF
Ne 0 ""
Po 5 -0.95
$EndPAD
$PAD
Sh "1" C 3 3 0 0 0
Dr 1.3 0 0 O 1.3 0.8
At STD N 00E0FFFF
Ne 0 ""
Po -5 -0.95
$EndPAD
$EndMODULE POT_P160KN
$MODULE PinHeader2
Po 0 0 0 15 53692903 00000000 ~~
Li PinHeader2
Cd Bornier d'alimentation 2 pins
Kw DEV
Sc 0
AR /53589E2C
Op 0 0 0
T0 0.14 5.18 1.524 1.524 0 0.3048 N V 21 N "Power1"
T1 0 5.08 1.524 1.524 0 0.3048 N I 21 N "CONN_2"
DS 2.54 1.27 -2.54 1.27 0.3048 21
DS 2.54 1.27 2.54 -1.27 0.3048 21
DS 2.54 -1.27 -2.54 -1.27 0.3048 21
DS -2.54 -1.27 -2.54 1.27 0.3048 21
$PAD
Sh "1" R 1.27 1.27 0 0 0
Dr 0.8 0 0
At STD N 00E0FFFF
Ne 1 "GND"
Po -1.27 0
$EndPAD
$PAD
Sh "2" C 1.27 1.27 0 0 0
Dr 0.8 0 0
At STD N 00E0FFFF
Ne 2 "VCC"
Po 1.27 0
$EndPAD
$SHAPE3D
Na "Device/bornier_2.wrl"
Sc 0.55 0.55 1
Of 0 0 0
Ro 0 0 0
$EndSHAPE3D
$EndMODULE PinHeader2
$MODULE PinHeader3
Po 0 0 0 15 536EDD50 00000000 ~~
Li PinHeader3
Cd Bornier d'alimentation 3 pins
Kw DEV
Sc 0
AR /536AD4E2
Op 0 0 0
T0 0 -5.08 1.524 1.524 0 0.3048 N I 21 N "K1"
T1 0 5.08 1.524 1.524 0 0.3048 N I 21 N "CONN_3"
DS -4 2.54 -4 -2.54 0.3048 21
DS 4 2.54 4 -2.54 0.3048 21
DS -4 2.54 4 2.54 0.3048 21
DS -4 -2.54 4 -2.54 0.3048 21
$PAD
Sh "1" R 1.4 3 0 0 0
Dr 0.8 0 0
At STD N 00E0FFFF
Ne 2 "VCC"
Po -2.54 0
$EndPAD
$PAD
Sh "2" R 1.4 3 0 0 0
Dr 0.8 0 0
At STD N 00E0FFFF
Ne 1 "GND"
Po 0 0
$EndPAD
$PAD
Sh "3" R 1.4 3 0 0 0
Dr 0.8 0 0
At STD N 00E0FFFF
Ne 3 "VEE"
Po 2.54 0
$EndPAD
$SHAPE3D
Na "Device/bornier_3.wrl"
Sc 0.55 0.55 1
Of 0 0 0
Ro 0 0 0
$EndSHAPE3D
$EndMODULE PinHeader3
$MODULE PinHeader4
Po 0 0 0 15 53692832 00000000 ~~
Li PinHeader4
Cd Bornier d'alimentation 4 pins
Kw DEV
Sc 0
AR /5358932A
Op 0 0 0
T0 6.84 -5.1 1.732 1.016 0 0.2 N V 21 N "Control1"
T1 0 5.08 1.524 1.524 0 0.3048 N I 21 N "CONN_4"
DS -5.08 -1.27 -5.08 1.27 0.3048 21
DS 5.08 1.27 5.08 -1.27 0.3048 21
DS 5.08 1.27 -5.08 1.27 0.3048 21
DS -5.08 -1.27 5.08 -1.27 0.3048 21
$PAD
Sh "2" C 1.27 1.27 0 0 0
Dr 0.8 0 0
At STD N 00E0FFFF
Ne 4 "N-0000023"
Po -1.27 0
$EndPAD
$PAD
Sh "3" C 1.27 1.27 0 0 0
Dr 0.8 0 0
At STD N 00E0FFFF
Ne 2 "N-0000016"
Po 1.27 0
$EndPAD
$PAD
Sh "1" R 1.27 1.27 0 0 0
Dr 0.8 0 0
At STD N 00E0FFFF
Ne 3 "N-0000019"
Po -3.81 0
$EndPAD
$PAD
Sh "4" C 1.27 1.27 0 0 0
Dr 0.8 0 0
At STD N 00E0FFFF
Ne 1 "GND"
Po 3.81 0
$EndPAD
$SHAPE3D
Na "Device/bornier_4.wrl"
Sc 0.55 0.55 1
Of 0 0 0
Ro 0 0 0
$EndSHAPE3D
$EndMODULE PinHeader4
$MODULE STDRelay
Po 0 0 0 15 53692961 00000000 ~P
Li STDRelay
Cd 12
Kw SWITCH DEV RELAY
Sc 0
AR /5355DA9B
Op 0 0 0
T0 0.16 0.36 1.524 1.016 0 0.2032 N V 21 N "RL2"
T1 -0.127 -5.953 1.524 1.016 0 0.2032 N I 21 N "Relay2"
DS -7.8 5.3 7.8 5.3 0.3 21
DS 7.8 5.3 7.8 -5.3 0.3 21
DS 7.8 -5.3 -7.8 -5.3 0.3 21
DS -7.8 -5.3 -7.8 5.3 0.3 21
$PAD
Sh "A1" C 1.778 1.778 0 0 0
Dr 1.143 0 0
At STD N 00E0FFFF
Ne 5 "VCC"
Po -3.66 -3.81
$EndPAD
$PAD
Sh "A2" C 1.778 1.778 0 0 0
Dr 1.143 0 0
At STD N 00E0FFFF
Ne 3 "N-0000021"
Po -3.66 3.81
$EndPAD
$PAD
Sh "14" C 1.778 1.778 0 0 0
Dr 1.143 0 0
At STD N 00E0FFFF
Ne 4 "N-000006"
Po -6.2 3.81
$EndPAD
$PAD
Sh "12" C 1.778 1.778 0 0 0
Dr 1.143 0 0
At STD N 00E0FFFF
Ne 1 "N-000001"
Po -6.2 -3.81
$EndPAD
$PAD
Sh "11" C 1.778 1.778 0 0 0
Dr 1.143 0 0
At STD N 00E0FFFF
Ne 2 "N-000002"
Po 6.5 3.81
$EndPAD
$PAD
Sh "11" C 1.778 1.778 0 0 0
Dr 1.143 0 0
At STD N 00E0FFFF
Ne 2 "N-000002"
Po 6.5 -3.81
$EndPAD
$EndMODULE STDRelay
$MODULE bornier2
Po 0 0 0 15 53686C5C 00000000 ~~
Li bornier2
Cd Bornier d'alimentation 2 pins
Kw DEV
Sc 0
AR /53589E2C
Op 0 0 0
T0 0.14 5.18 1.524 1.524 0 0.3048 N V 21 N "Power1"
T1 0 5.08 1.524 1.524 0 0.3048 N I 21 N "CONN_2"
DS 5.08 2.54 -5.08 2.54 0.3048 21
DS 5.08 3.81 5.08 -3.81 0.3048 21
DS 5.08 -3.81 -5.08 -3.81 0.3048 21
DS -5.08 -3.81 -5.08 3.81 0.3048 21
DS -5.08 3.81 5.08 3.81 0.3048 21
$PAD
Sh "1" R 1.27 1.27 0 0 0
Dr 0.9 0 0
At STD N 00E0FFFF
Ne 1 "GND"
Po -1.27 0
$EndPAD
$PAD
Sh "2" C 1.27 1.27 0 0 0
Dr 0.9 0 0
At STD N 00E0FFFF
Ne 2 "VCC"
Po 1.27 0
$EndPAD
$SHAPE3D
Na "Device/bornier_2.wrl"
Sc 1 1 1
Of 0 0 0
Ro 0 0 0
$EndSHAPE3D
$EndMODULE bornier2
$EndLIBRARY