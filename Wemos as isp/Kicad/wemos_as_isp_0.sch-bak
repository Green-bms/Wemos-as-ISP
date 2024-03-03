EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "Wemos as isp"
Date "2023-11-04"
Rev "0.00"
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L MCU_Module:WeMos_D1_mini U1
U 1 1 65466297
P 3150 3850
F 0 "U1" H 2500 3200 50  0000 C CNN
F 1 "WeMos_D1_mini" H 2500 3050 50  0000 C CNN
F 2 "Module:WEMOS_D1_mini_light" H 3150 2700 50  0001 C CNN
F 3 "https://wiki.wemos.cc/products:d1:d1_mini#documentation" H 1300 2700 50  0001 C CNN
	1    3150 3850
	1    0    0    -1  
$EndComp
Wire Wire Line
	3050 3050 3050 3000
Wire Wire Line
	3250 3050 3250 3000
Text Notes 2850 2600 0    50   ~ 0
WEMOS D1 MINI
$Comp
L power:PWR_FLAG #FLG0101
U 1 1 6546E205
P 2400 2850
F 0 "#FLG0101" H 2400 2925 50  0001 C CNN
F 1 "PWR_FLAG" H 2400 3023 50  0000 C CNN
F 2 "" H 2400 2850 50  0001 C CNN
F 3 "~" H 2400 2850 50  0001 C CNN
	1    2400 2850
	1    0    0    -1  
$EndComp
$Comp
L power:PWR_FLAG #FLG0102
U 1 1 6546EA6E
P 3550 5000
F 0 "#FLG0102" H 3550 5075 50  0001 C CNN
F 1 "PWR_FLAG" H 3550 5173 50  0000 C CNN
F 2 "" H 3550 5000 50  0001 C CNN
F 3 "~" H 3550 5000 50  0001 C CNN
	1    3550 5000
	1    0    0    -1  
$EndComp
Wire Wire Line
	2400 2850 2400 3000
Wire Wire Line
	2400 3000 3050 3000
Wire Wire Line
	9100 5000 6100 5000
Wire Wire Line
	3150 4650 3150 5000
$Comp
L dk_Embedded-Microcontrollers:ATTINY85-20PU U3
U 1 1 65ACF57D
P 6000 3750
F 0 "U3" H 6228 3753 60  0000 L CNN
F 1 "ATTINY85-20PU" H 6228 3647 60  0000 L CNN
F 2 "Package_DIP:DIP-8_W7.62mm_Socket" H 6200 3950 60  0001 L CNN
F 3 "http://www.microchip.com/mymicrochip/filehandler.aspx?ddocname=en589894" H 6200 4050 60  0001 L CNN
F 4 "ATTINY85-20PU-ND" H 6200 4150 60  0001 L CNN "Digi-Key_PN"
F 5 "ATTINY85-20PU" H 6200 4250 60  0001 L CNN "MPN"
F 6 "Integrated Circuits (ICs)" H 6200 4350 60  0001 L CNN "Category"
F 7 "Embedded - Microcontrollers" H 6200 4450 60  0001 L CNN "Family"
F 8 "http://www.microchip.com/mymicrochip/filehandler.aspx?ddocname=en589894" H 6200 4550 60  0001 L CNN "DK_Datasheet_Link"
F 9 "/product-detail/en/microchip-technology/ATTINY85-20PU/ATTINY85-20PU-ND/735469" H 6200 4650 60  0001 L CNN "DK_Detail_Page"
F 10 "IC MCU 8BIT 8KB FLASH 8DIP" H 6200 4750 60  0001 L CNN "Description"
F 11 "Microchip Technology" H 6200 4850 60  0001 L CNN "Manufacturer"
F 12 "Active" H 6200 4950 60  0001 L CNN "Status"
	1    6000 3750
	1    0    0    -1  
$EndComp
$Comp
L dk_Embedded-Microcontrollers:ATTINY84A-PU U2
U 1 1 65AD1A51
P 9000 3700
F 0 "U2" H 9228 3603 60  0000 L CNN
F 1 "ATTINY84A-PU" H 9228 3497 60  0000 L CNN
F 2 "Package_DIP:DIP-14_W7.62mm_Socket" H 9200 3900 60  0001 L CNN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/8183s.pdf" H 9200 4000 60  0001 L CNN
F 4 "ATTINY84A-PU-ND" H 9200 4100 60  0001 L CNN "Digi-Key_PN"
F 5 "ATTINY84A-PU" H 9200 4200 60  0001 L CNN "MPN"
F 6 "Integrated Circuits (ICs)" H 9200 4300 60  0001 L CNN "Category"
F 7 "Embedded - Microcontrollers" H 9200 4400 60  0001 L CNN "Family"
F 8 "http://ww1.microchip.com/downloads/en/DeviceDoc/8183s.pdf" H 9200 4500 60  0001 L CNN "DK_Datasheet_Link"
F 9 "/product-detail/en/microchip-technology/ATTINY84A-PU/ATTINY84A-PU-ND/2774082" H 9200 4600 60  0001 L CNN "DK_Detail_Page"
F 10 "IC MCU 8BIT 8KB FLASH 14DIP" H 9200 4700 60  0001 L CNN "Description"
F 11 "Microchip Technology" H 9200 4800 60  0001 L CNN "Manufacturer"
F 12 "Active" H 9200 4900 60  0001 L CNN "Status"
	1    9000 3700
	1    0    0    -1  
$EndComp
Wire Wire Line
	3550 3850 3700 3850
Text Label 3700 3850 0    50   ~ 0
reset
Wire Wire Line
	3550 3950 3700 3950
Wire Wire Line
	3550 4050 3700 4050
Wire Wire Line
	3550 4150 3700 4150
Text Label 3700 3950 0    50   ~ 0
sck
Text Label 3700 4050 0    50   ~ 0
miso
Text Label 3700 4150 0    50   ~ 0
mosi
NoConn ~ 2750 3450
NoConn ~ 2750 3750
NoConn ~ 2750 3850
NoConn ~ 3550 3350
NoConn ~ 3550 3450
NoConn ~ 3550 3650
NoConn ~ 3550 3750
NoConn ~ 3550 4250
Connection ~ 3550 5000
Wire Wire Line
	3550 5000 3150 5000
Wire Wire Line
	9100 4600 9100 5000
Wire Wire Line
	6100 4250 6100 5000
Connection ~ 6100 5000
Wire Wire Line
	6100 5000 4500 5000
Wire Wire Line
	3250 3000 6100 3000
Wire Wire Line
	9100 3000 9100 3100
Wire Wire Line
	6100 3000 6100 3350
Connection ~ 6100 3000
Wire Wire Line
	6100 3000 9100 3000
Wire Wire Line
	5800 4050 5650 4050
Wire Wire Line
	5800 3550 5650 3550
Wire Wire Line
	5800 3650 5650 3650
Wire Wire Line
	5800 3750 5650 3750
Text Label 5650 3550 2    50   ~ 0
mosi
Text Label 5650 3650 2    50   ~ 0
miso
Text Label 5650 3750 2    50   ~ 0
sck
Text Label 5650 4050 2    50   ~ 0
reset
NoConn ~ 5800 3850
NoConn ~ 5800 3950
$Comp
L Device:R R1
U 1 1 65AD9A30
P 4500 3900
F 0 "R1" H 4570 3946 50  0000 L CNN
F 1 "330" H 4570 3855 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P2.54mm_Vertical" V 4430 3900 50  0001 C CNN
F 3 "~" H 4500 3900 50  0001 C CNN
	1    4500 3900
	1    0    0    -1  
$EndComp
$Comp
L Device:LED D1
U 1 1 65ADA24B
P 4500 4450
F 0 "D1" V 4539 4332 50  0000 R CNN
F 1 "LED" V 4448 4332 50  0000 R CNN
F 2 "LED_THT:LED_D3.0mm" H 4500 4450 50  0001 C CNN
F 3 "~" H 4500 4450 50  0001 C CNN
	1    4500 4450
	0    -1   -1   0   
$EndComp
Wire Wire Line
	3550 3550 4500 3550
Wire Wire Line
	4500 3550 4500 3750
Wire Wire Line
	4500 4050 4500 4300
Wire Wire Line
	4500 4600 4500 5000
Connection ~ 4500 5000
Wire Wire Line
	4500 5000 3550 5000
Wire Wire Line
	8600 3600 8400 3600
Wire Wire Line
	8600 3800 8400 3800
Wire Wire Line
	8600 3900 8400 3900
Wire Wire Line
	8600 4000 8400 4000
Text Label 8400 3600 2    50   ~ 0
reset
Text Label 8400 3800 2    50   ~ 0
mosi
Text Label 8400 3900 2    50   ~ 0
miso
Text Label 8400 4000 2    50   ~ 0
sck
NoConn ~ 8600 3300
NoConn ~ 8600 3400
NoConn ~ 8600 3500
NoConn ~ 8600 3700
NoConn ~ 8600 4100
NoConn ~ 8600 4200
NoConn ~ 8600 4300
NoConn ~ 8600 4400
Text Notes 5750 2600 0    50   ~ 0
ATTINY 85
Text Notes 8750 2600 0    50   ~ 0
ATTINY 84
$EndSCHEMATC
