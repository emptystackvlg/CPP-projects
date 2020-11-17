#include <iostream>
#include <time.h>
#include <windows.h>
#include <cstdlib>
#include <stdio.h>


using namespace std;

int main()
{
    setlocale(LC_ALL, "en");

    int main;

    int n = 3;


    cout << "\a" << "                      Hi, I am a program to disable bullshit in Windows 10 \n" << "\n";

Again:
    cout << " Choose option : \n " << "\n";

    cout << "1. Disable Windows Updates \n " << "\n";

    cout << "2. Disable Windows Search \n" << "\n";

    cout << "3. Disable Xbox Live services \n" << "\n";

    cout << "4. Disable Hyper-V services \n" << "\n";

    cout << "5. Disable smartcards Microsoft Passport \n" << "\n";

    cout << "6. Disable unnecessary services (maps , radio , fax , telemetry,telephony , and other services)\n" << "\n";

    cout << "To exit enter '0' \n" << "\n";


    cout << "> ";
    cin >> main;


    if (main == 1) {
        cout << "\n";

        system("sc config wuauserv start= disabled");

        system("sc config WaaSMedicSvc start= disabled ");

        system("cls");

        cout << "\a -Windows Updates disabled successfully - \n" << "\n";

        system("pause");

        system("cls");

        goto Again;


    }

    else if (main == 2) {

        cout << "\n";

        system("sc config WSearch start= disabled");

        system("cls");

        cout << "\a -Windows Search disabled successfully - \n" << "\n";

        system("pause");

        system("cls");

        goto Again;
    }

    else if (main == 3) {

        cout << "\n";

        system("sc config XboxGipSvc start= disabled");

        system("sc config XblAuthManager start= disabled");

        system("sc config XboxNetApiSvc start= disabled");

        system("sc config XblGameSave start= disabled");

        system("sc config xboxgip start= disabled");

        system("cls");

        cout << "\a -Xbox Live services disabled successfully - \n " << "\n";

        system("pause");

        system("cls");


        goto Again;
    }

    else if (main == 4) {

        cout << "\n";

        system("sc config vmicguestinterface start= disabled");

        system("sc config vmicvmsession start= disabled");

        system("sc config vmicrdv start= disabled");

        system("sc config vmicshutdown start= disabled");

        system("sc config vmicvss start= disabled");

        system("sc config vmickvpexchange start= disabled");

        system("sc config vmicheartbeat start= disabled");

        system("sc config vmictimesync start= disabled");

        system("sc config HvHost start= disabled");

        system("cls");

        cout << "\a -Hyper-V services disabled successfully - \n" << "\n";

        system("pause");

        system("cls");

        goto Again;

    }

    else if (main == 5) {

        cout << "\n";

        system("sc config RasMan start= disabled");

        system("sc config NgcCtnrSvc start= disabled");

        system("sc config SessionEnv start= disabled");

        system("sc config SCPolicySvc start= disabled");

        system("sc config SCardSvr start= disabled");

        system("sc config ScDeviceEnum start= disabled");

        system("sc config NgcSvc start= disabled");

        system("cls");

        cout << "\a -Services disabled successfully - \n" << "\n";

        system("pause");

        system("cls");

        goto Again;

    }

    else if (main == 6) {

        cout << "\n";

        system("sc config shpamsvc start= disabled");

        system("sc config PolicyAgent start= disabled ");

        system("sc config WbioSrvc start= disabled ");

        system("sc config SEMgrSvc start= disabled ");

        system("sc config MapsBroker start= disabled ");

        system("sc config RemoteAccess start= disabled");

        system("sc config IKEEXT start= disabled");

        system("sc config WpcMonSvc start= disabled");

        system("sc config icssvc start= disabled");

        system("sc config W32Time start= disabled");

        system("sc config lfsvc start= disabled");

        system("sc config SensorDataService start= disabled");

        system("sc config SensorService start= disabled");

        system("sc config RetailDemo start= disabled");

        system("sc config camsvc start= disabled");

        system("sc config perceptionsimulation start= disabled ");

        system("sc config MSiSCSI start= disabled");

        system("sc config WalletService start= disabled");

        system("sc config SensrSvc start= disabled");

        system("sc config NetTcpPortSharing start= disabled");

        system("sc config WPDBusEnum start= disabled");

        system("sc config WerSvc start= disabled");

        system("sc config TabletInputService start= disabled");

        system("sc config WpnService start= disabled");

        system("sc config SENS start= disabled ");

        system("sc config RmSvc start= disabled");

        system("sc config BDESVC start= disabled ");

        system("sc config diagnosticshub.standardcollector.service start= disabled");

        system("sc config RemoteRegistry start= disabled");

        system("sc config WdiSystemHost start= disabled");

        system("sc config WdiServiceHost start= disabled");

        system("sc config fax start= disabled ");

        system("sc config BITS start= disabled");

        system("sc config EFS start= disabled");

        system("sc config TapiSrv start= disabled");

        system("sc config PerfHost start= disabled ");

        system("cls");

        cout << "\a -Services disabled successfully - \n" << "\n";

        system("pause");

        system("cls");

        goto Again;



    }

















    else if (main == 0) {

        system("cls");

        cout << "\a Goodbye ! \n" << "\n";

        cout << "\n\a End of the program in : \n";

        cout << "\n";

        while (n != 0) {
            cout << n << "...  ";

            n -= 1;

            Sleep(1000);

            cout << "\t----------------------------------------------------------------\t\n";
            cout << "\n";
        }
    }


}

