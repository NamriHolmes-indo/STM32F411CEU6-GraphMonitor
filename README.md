Code ini adalah kode untuk menampilakn grafik dari pembacaan Analog.
Pembacaan analog berdasarkan module ECG Click dan EEG Click dari MikroE, Pin analog sendiri berada di PA7 dan PA6 dengan ADC_IN

Konfigurasi pin LCD sebagai berikut.
Pin Port (13 Port):
LCD_D2 = A15
LCD_D3 = B3
LCD_D4 = B4
LCD_D5 = B5
LCD_D6 = B6
LCD_D7 = A5
LCD_D0 = B0
LCD_D1 = B1

LCD_RST = A0 = LCD_RD
LCD_CS = A1 = LCD_WR 
LCD_RS = A2 = LCD_RS 
LCD_WR = A3 = LCD_CS 
LCD_RD = A4 = LCD_RST 

Anda dapat mengubah konfigurasi dari ID_LCD di user_setting.h, serta ubah juga untuk pengaturan tinggi dan lebar LCD anda.
